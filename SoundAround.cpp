#include "SoundAround.h"

std::vector<TrackFrame*> SoundAround::_trackFramesList;

SoundAround::SoundAround(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.tracks_table->viewport()->installEventFilter(this);
    QCoreApplication::instance()->installEventFilter(this);
    ui.centralWidget->installEventFilter(this);
    ui.tracks_table->setMouseTracking(true);
    setAcceptDrops(true);
    ui.tracks_table->setDragEnabled(true);
    ui.tracks_table->setAcceptDrops(false);
    ui.tracks_table->setDropIndicatorShown(true);
    _keyDel = new QShortcut(this);
    _keyDel->setKey(Qt::Key_Delete);
    connect(_keyDel, &QShortcut::activated, this, &SoundAround::removeTrackSlot);
    setupMenuBar();
    setBackgrounds();
    setTracksTable();
    setTagsComboBox();
    setContextMenu();
    connect(_addTrackAction, &QAction::triggered, this, &SoundAround::addTrackSlot);
    connect(_editTrackAction, &QAction::triggered, this, &SoundAround::editTrackSlot);
    connect(_removeTrackAction, &QAction::triggered, this, &SoundAround::removeTracksSlot);
    connect(_addTrackToPlaylist, &QAction::triggered, this, &SoundAround::addTracksToPlaylistSlot);
    connect(ui.tracks_table, &QTableWidget::customContextMenuRequested, this, &SoundAround::tracksTableContextMenuRequestedSlot);
    connect(ui.tracks_table, &QTableWidget::itemClicked, this, &SoundAround::selectItem);
    connect(ui.tracks_table, &QTableWidget::itemPressed, this, &SoundAround::pressItem);
    connect(_openConfigForm, &QAction::triggered, this, &SoundAround::showConfigsFormSlot);
    connect(_referenceAction, &QAction::triggered, this, &SoundAround::showReferenceSlot);
    connect(_openAboutAction, &QAction::triggered, this, &SoundAround::showAboutFormSlot);
    connect(_openConfigForm, &QAction::hovered, [=] {QToolTip::showText(QCursor::pos(), "Настройки", this); });
    loadConfig();
    loadData();
    ui.trackTable_frame->resize(_trackListSize);
    resize(_mainWinSize);
}

void SoundAround::dragEnterEvent(QDragEnterEvent* event)
{
    event->accept();
}

void SoundAround::dragMoveEvent(QDragMoveEvent* event)
{
    _isCtrl = false;
    if (event->answerRect().intersects(ui.playList_frame->frameGeometry()) && event->mimeData()->hasFormat("application/x-qabstractitemmodeldatalist"))
    {
        event->acceptProposedAction();
        return;
    }

    event->ignore();
}

void SoundAround::dropEvent(QDropEvent* event)
{
    addTracksToPlaylistSlot();
}

bool SoundAround::eventFilter(QObject* obj, QEvent* event)
{
    if (obj != ui.tracks_table && obj != ui.tracks_table->viewport())
    {
        if (event->type() == QEvent::MouseButtonPress && !ui.tracks_table->viewport()->hasFocus() && this->isActiveWindow())
            ui.tracks_table->clearSelection();
        
    }    
    return QWidget::eventFilter(obj, event);
}

bool SoundAround::addTrackSlot()
{
    TrackDialog trackDialog;
    trackDialog.setWindowTitle("Добавление нового трека");
    trackDialog.setWindowModality(Qt::WindowModality::ApplicationModal);
    trackDialog.setWindowFlags(Qt::WindowCloseButtonHint);
    if (!trackDialog.exec())
        return false;

    _settings.beginGroup("config");
    bool addNewTrackInPlaylist = _settings.value("addNewTrackInPlaylist").toBool();
    bool copyFile = _settings.value("saveToFolder").toBool();
    _settings.endGroup();

    for (int i = 0; i < trackDialog.tracks_listWidget->count(); ++i)
    {
        if (QListWidgetItem* item = trackDialog.tracks_listWidget->item(i))
        {
            if (!item->data(Qt::UserRole).toBool())
                continue;
            QString newTrackBaseName = item->text();
            QString newTrackName = newTrackBaseName + "." + trackDialog.get_fileInfoList()[i].suffix();
            QString newTrackPath = QDir::currentPath() + "/sounds/" + newTrackName;
            if (copyFile)
            {
                if (!QFile::copy(trackDialog.get_fileInfoList()[i].filePath(), newTrackPath))
                {
                    QMessageBox::warning(this, "Ошибка", "Файл не найден");
                    return false;
                }
            }
            else
                newTrackPath = trackDialog.get_fileInfoList()[i].absoluteFilePath();

            QString totalTime = "";
            if (!trackDialog.getDurationsList().isEmpty())
                totalTime = trackDialog.getDurationsList()[i];
            Track track(newTrackName, newTrackBaseName, newTrackPath, totalTime);
            for (const QString& tag : trackDialog.getTagLists().at(i))
                track.addTag(tag);

            if (!Database::addTrack(track))
            {
                QMessageBox::critical(this, "Ошибка", "Ошибка добавления трека в базу данных");
                return false;
            }

            track.set_id(Database::getLastId(Database::TABLE_TRACKS));
            Helper::get_trackList().push_back(std::move(track));
            addItemToTracksTable(track, ui.tracks_table->rowCount());
            addNewTrackToCBoxesPLists(track);
            if (addNewTrackInPlaylist)
                addTrackToPlaylist(track.get_id());
            if (track.get_tagList().empty())
                continue;

            addNewTrackTagsToDB(track.get_tagList(), track.get_id());
        }
    }
    Helper::sortTrackList();
    ui.tags_CBox->setCurrentIndex(0);
    ui.tracks_table->setSortingEnabled(false);
    resetTracksTable();
    ui.tracks_table->scrollToBottom();

    return true;
}

void SoundAround::editTrackSlot()
{
    const int currRow = ui.tracks_table->selectionModel()->currentIndex().row();
    if (currRow < 0)
        return;
    const int trackId = ui.tracks_table->item(currRow, 0)->data(Qt::UserRole).toInt();
    if (Track* track = Helper::findTrack(trackId))
    {
        TrackDialog trackDialog;
        trackDialog.setWindowTitle("Редактирование трека");
        trackDialog.setWindowModality(Qt::WindowModality::ApplicationModal);
        trackDialog.setTrackData(track);
        if (!trackDialog.exec())
            return;

        QString newTrackBaseName = trackDialog.name_lineEdit->text();
        QString newTrackName = newTrackBaseName + "." + trackDialog.get_fileInfoList()[0].suffix();
        QString newTrackPath = QDir::currentPath() + "/sounds/" + newTrackName;
        QString localTrackPath = QDir::currentPath() + "/sounds/" + track->get_name();
        if (track->get_path() == localTrackPath && track->get_path() != newTrackPath)
        {
            if (!QFile::rename(track->get_path(), newTrackPath))
            {
                QMessageBox::critical(this, "Ошибка", "Ошибка переименования файла\nВозможно файл поврежден или отсутствует");
                return;
            }
            track->set_path(newTrackPath);
        }
        track->set_baseName(newTrackBaseName);
        track->set_name(newTrackName);
        track->clearTagList();

        if (!Database::removeTagsByTrack(trackId))
        {
            QMessageBox::critical(this, "Ошибка", "Ошибка базы данных");
            return;
        }
        trackDialog.tracksTags_listWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        trackDialog.tracksTags_listWidget->selectAll();
        for (const auto& item : trackDialog.tracksTags_listWidget->selectedItems())
            track->addTag(item->text());
        if (!Database::editTrack(*track))
        {
            QMessageBox::critical(this, "Ошибка", "Ошибка базы данных");
            return;
        }
        ui.tracks_table->setSortingEnabled(false);
        ui.tracks_table->removeRow(currRow);
        addItemToTracksTable(track, currRow);
        resetTracksTable();
        ui.tracks_table->selectRow(currRow);
        changeRemoveTrackInCB(trackId, false);
        if (track->get_tagList().empty())
            return;

        for (const QString& tag : track->get_tagList())
        {
            if (!Database::addTag(tag, track->get_id()))
            {
                QString message = "Не удалось добавить тег \"" + tag + "\"";
                QMessageBox::critical(this, "Ошибка", message);
                continue;
            }
            Helper::addTagToList(tag);
        }
    }
}

void SoundAround::removeTrackSlot()
{
    int selectedRows = ui.tracks_table->selectionModel()->selectedRows().size();
    if (selectedRows < 0)
        return;


    const int currRow = ui.tracks_table->selectionModel()->currentIndex().row();
    if (currRow < 0)
        return;

    const int trackId = ui.tracks_table->item(currRow, 0)->data(Qt::UserRole).toInt();

    if (checkTrackInPlaylist(trackId))
    {
        QMessageBox::warning(this, "Внимание", "Пока трек находится в списке воспроизведения его удалить нельзя");
        return;
    }

    if (!Helper::askForAnyAction("Удаление трека", "Уверен, что хочешь удалить трек безвозвратно?"))
        return;
    
    if (!Database::removeTagsByTrack(trackId))
    {
        QMessageBox::critical(this, "Ошибка", "Ошибка базы данных - таблица тегов");
        return;
    }

    if (!Database::removeObject(trackId, Database::TABLE_TRACKS))
    {
        QMessageBox::critical(this, "Ошибка", "Ошибка базы данных - таблица треков");
        return;
    }
    if (Track* track = Helper::findTrack(trackId))
    {
        std::vector<QString> tagList = track->get_tagList();
        QString path = QDir::currentPath() + "/sounds/" + track->get_name();
        if (QFile(path).exists())
            QFile::remove(track->get_path());
        Helper::removeTrackFromList(trackId);
        for (const QString& tag : tagList)
        {
            if (!Helper::checkTagExistInTracks(tag))
            {
                Helper::removeTag(tag);
                removeTagFromCBoxes(tag);
            }
        }
    }
    
    ui.tracks_table->removeRow(currRow);
    changeRemoveTrackInCB(trackId, true);
    Helper::refreshTagList();
}

void SoundAround::removeTracksSlot()
{
    int selectedRows = ui.tracks_table->selectionModel()->selectedRows().size();
    if (selectedRows == 1)
    {
        removeTrackSlot();
        return;
    }

    if (!Helper::askForAnyAction("Удаление трека", "Уверен, что хочешь удалить треки безвозвратно?"))
        return;

    bool showMessage = false;
    const int rowCount = ui.tracks_table->rowCount();
    for (int i = rowCount - 1; i >= 0; --i)
    {
        if (!ui.tracks_table->selectionModel()->isRowSelected(i))
            continue;

        const int trackId = ui.tracks_table->item(i, 0)->data(Qt::UserRole).toInt();
        if (checkTrackInPlaylist(trackId))
        {
            if (!showMessage)
            {
                QMessageBox::warning(this, "Внимание", 
                    "Пока треки находятся в списке воспроизведения их удалить нельзя\nБудут удалены выделенные треки, не находящиеся в списке воспроизведения");
                showMessage = true;
            }
            continue;
        }

        if (!Database::removeTagsByTrack(trackId))
        {
            QMessageBox::critical(this, "Ошибка", "Ошибка базы данных - таблица тегов");
            return;
        }

        if (!Database::removeObject(trackId, Database::TABLE_TRACKS))
        {
            QMessageBox::critical(this, "Ошибка", "Ошибка базы данных - таблица треков");
            return;
        }

        if (Track* track = Helper::findTrack(trackId))
        {
            std::vector<QString> tagList = track->get_tagList();
            QString path = QDir::currentPath() + "/sounds/" + track->get_name();
            if (QFile(path).exists())
                QFile::remove(track->get_path());
            Helper::removeTrackFromList(trackId);
            for (const QString& tag : tagList)
            {
                if (!Helper::checkTagExistInTracks(tag))
                {
                    Helper::removeTag(tag);
                    removeTagFromCBoxes(tag);
                }
            }
        }

        ui.tracks_table->removeRow(i);
        changeRemoveTrackInCB(trackId, true);
    }
    
    Helper::refreshTagList();
}

void SoundAround::addNewTrackToTrackFrameSlot(TrackFrame* currTrackFrame)
{
    TrackDialog trackDialog;
    trackDialog.setWindowTitle("Добавление нового трека");
    trackDialog.setWindowModality(Qt::WindowModality::ApplicationModal);
    trackDialog.setWindowFlags(Qt::WindowCloseButtonHint);
    trackDialog.setForOneFile();
    if (!trackDialog.exec())
        return;

    _settings.beginGroup("config");
    bool copyFile = _settings.value("saveToFolder").toBool();
    _settings.endGroup();

    QString newTrackBaseName = trackDialog.name_lineEdit->text();
    QString newTrackName = newTrackBaseName + "." + trackDialog.get_fileInfoList()[0].suffix();
    QString newTrackPath = QDir::currentPath() + "/sounds/" + newTrackName;

    if (copyFile)
    {
        if (!QFile::copy(trackDialog.get_fileInfoList()[0].filePath(), newTrackPath))
        {
            QMessageBox::warning(this, "Ошибка", "Файл не найден");
            return;
        }
    }
    else
        newTrackPath = trackDialog.get_fileInfoList()[0].absoluteFilePath();

    QString totalTime = "";
    if (!trackDialog.getDurationsList().isEmpty())
        totalTime = trackDialog.getDurationsList()[0];
    Track track(newTrackName, newTrackBaseName, newTrackPath, totalTime);
    for (int i = 0; i < trackDialog.tracksTags_listWidget->count(); ++i)
    {
        if (QListWidgetItem* item = trackDialog.tracksTags_listWidget->item(i))
            track.addTag(item->text());
    }

    if (!Database::addTrack(track))
    {
        QMessageBox::critical(this, "Ошибка", "Ошибка добавления трека в базу данных");
        return;
    }

    track.set_id(Database::getLastId(Database::TABLE_TRACKS));
    Helper::get_trackList().push_back(std::move(track));
    Helper::sortTrackList();
    addItemToTracksTable(track, ui.tracks_table->rowCount());

    ui.tags_CBox->setCurrentIndex(0);
    addNewTrackToCBoxesPLists(track);
    ui.tracks_table->setSortingEnabled(false);
    resetTracksTable();
    ui.tracks_table->scrollToBottom();

    currTrackFrame->set_track(&track);

    if (track.get_tagList().empty())
        return;

    for (const QString& tag : track.get_tagList())
    {
        if (!Database::addTag(tag, track.get_id()))
        {
            QString message = "Не удалось добавить тег \"" + tag + "\"";
            QMessageBox::critical(this, "Ошибка", message);
            continue;
        }
        if (!Helper::findTag(tag))
        {
            Helper::addTagToList(tag);
            addNewTagToCBoxes(tag);
        }
    }
}

void SoundAround::addTracksToPlaylistSlot()
{
    const int rowCount = ui.tracks_table->rowCount();
    for (int i = 0; i < rowCount; ++i)
    {
        if (!ui.tracks_table->selectionModel()->isRowSelected(i))
            continue;

        const int trackId = ui.tracks_table->item(i, 0)->data(Qt::UserRole).toInt();
        addTrackToPlaylist(trackId);
    }
    ui.tracks_table->clearSelection();
}

TrackFrame* SoundAround::findTrackFrame(const int trackId)
{
    auto it = std::find_if(
        _trackFramesList.begin(),
        _trackFramesList.end(), 
        [&trackId](TrackFrame* trackFrame) {return trackFrame->get_trackId() == trackId; });
    return (it == _trackFramesList.end()) ? nullptr : *it;
}

void SoundAround::removeTrackFrame(TrackFrame* trackFrame)
{
    auto it = std::find(_trackFramesList.begin(), _trackFramesList.end(), trackFrame);
    if (it != _trackFramesList.end())
        _trackFramesList.erase(it);
}

void SoundAround::setBackgrounds()
{
    QPixmap mainBkgnd(":/SoundAround/images/wall.png");
    mainBkgnd.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QPalette palette;
    palette.setBrush(QPalette::Background, mainBkgnd);
    setPalette(palette);

    ui.tracks_table->setAttribute(Qt::WA_TranslucentBackground);
    ui.trackTable_frame->setWindowFlags(Qt::FramelessWindowHint);
    ui.playlist_scrollArea->setWindowFlags(Qt::FramelessWindowHint);
    ui.playlist_scrollArea->setAttribute(Qt::WA_TranslucentBackground);
}

void SoundAround::loadConfig()
{
    _settings.beginGroup("config");
    _mainWinSize.setHeight(_settings.value("mainWinHeight", 600).toInt());
    _mainWinSize.setWidth(_settings.value("mainWinWidth", 378).toInt());
    _trackListSize.setHeight(_settings.value("trackListHeight", 400).toInt());
    _trackListSize.setWidth(_settings.value("trackListWidth", 450).toInt());
    bool visible = _settings.value("trackListShow", false).toBool();
    _settings.endGroup();
    ui.trackTable_frame->setVisible(visible);
    if (visible)
    {
        if (_trackListSize.width() < 450)
        {
            _trackListSize.setWidth(450);
            _mainWinSize.setWidth(935);
        }
        setMaximumWidth(16777215);
    }
    else
        setMaximumWidth(_mainWinSize.width());
    setShowHideTableBtnIcon(visible);
}

void SoundAround::saveConfig()
{
    _settings.beginGroup("config");
    _settings.setValue("mainWinHeight", height());
    _settings.setValue("mainWinWidth", width());
    _settings.setValue("trackListWidth", ui.trackTable_frame->width());
    _settings.setValue("trackListHeight", ui.trackTable_frame->height());
    _settings.setValue("trackListShow", ui.trackTable_frame->isVisible());
    _settings.endGroup();
}

void SoundAround::loadData()
{
    size_t trackFramesCount = _settings.value("trackFramesCount", 0).toInt();
    if (trackFramesCount <= 0)
        return;
    _trackFramesList.reserve(trackFramesCount);
    _settings.beginGroup("config");
    bool volumeWidgetViewValue = _settings.value("volumeDialView", true).toBool();
    bool resizeByCount = _settings.value("resizeByCount", true).toBool();
    _settings.endGroup();
    resize(width(), 16777215);
    for (size_t i = 0; i < trackFramesCount; ++i)
    {
        QString group = "trackFrame #" + QString::number(i);
        _settings.beginGroup(group);
        const int trackId = _settings.value("trackId").toInt();
        if (Track* track = Helper::findTrack(trackId))
        {
            TrackFrame* trackFrame = new TrackFrame(track);
            trackFrame->setVolumeWidgetsViewVisible(volumeWidgetViewValue);
            trackFrame->loadData(_settings);
            ui.trackList_VBox->addWidget(trackFrame);
            _trackFramesList.push_back(std::move(trackFrame));
            resizeByTrackListCount(_trackFramesList.size());
            connect(trackFrame, SIGNAL(closeFrame(int)), this, SLOT(closeTrackFrameSlot(int)));
            connect(trackFrame, SIGNAL(addNewTrackSignal(TrackFrame*)), this, SLOT(addNewTrackToTrackFrameSlot(TrackFrame*)));
            if (!trackFrame->isNoProblem())
                trackFrame->closeIt();
        }
        else if (trackId == -1)
        {
            TrackFrame* trackFrame = new TrackFrame();
            trackFrame->setVolumeWidgetsViewVisible(volumeWidgetViewValue);
            trackFrame->loadData(_settings);
            ui.trackList_VBox->addWidget(trackFrame);
            _trackFramesList.push_back(std::move(trackFrame));
            connect(trackFrame, SIGNAL(closeFrame(int)), this, SLOT(closeTrackFrameSlot(int)));
            connect(trackFrame, SIGNAL(addNewTrackSignal(TrackFrame*)), this, SLOT(addNewTrackToTrackFrameSlot(TrackFrame*)));
        }
        if (resizeByCount)
            resizeByTrackListCount(_trackFramesList.size());
        _settings.endGroup();
    }
    resize(_mainWinSize);
}

void SoundAround::saveData()
{
    size_t trackFramesCount = _trackFramesList.size();
    _settings.setValue("trackFramesCount", trackFramesCount);
    if (trackFramesCount <= 0)
        return;
    for (size_t i = 0; i < trackFramesCount; ++i)
    {
        QString group = "trackFrame #" + QString::number(i);
        _settings.beginGroup(group);
        _settings.setValue("trackId", _trackFramesList.at(i)->get_trackId());
        _settings.setValue("tagIndex", _trackFramesList.at(i)->tags_CBox->currentIndex());
        _settings.setValue("volume", _trackFramesList.at(i)->dialVolume->value());
        _settings.setValue("isMute", _trackFramesList.at(i)->muteBtn->isChecked());
        _settings.setValue("position", _trackFramesList.at(i)->get_player()->position());
        _settings.setValue("isLoop", _trackFramesList.at(i)->loopBtn->isChecked());
        _settings.setValue("pauseRangeStartValue", _trackFramesList.at(i)->pauseRangeStart->value());
        _settings.setValue("pauseRangeEndValue", _trackFramesList.at(i)->pauseRangeEnd->value());
        _settings.setValue("timeLineEnabled", _trackFramesList.at(i)->timeLine->isEnabled());
        _settings.endGroup();
    }
}

void SoundAround::setupMenuBar()
{
    ui.menuBar->setToolTipDuration(3000);
    ui.menuBar->addAction(_openConfigForm);
    _referenceMenu->setIcon(QIcon(":/SoundAround/images/question-mark-2-24.png"));
    _referenceMenu->addAction(_referenceAction);
    _referenceMenu->addAction(_openAboutAction);
    _referenceMenu->setToolTipsVisible(true);
    ui.menuBar->addMenu(_referenceMenu);
}

void SoundAround::setTracksTable()
{
    qDebug() << "in setTracksTable()";
    ui.tracks_table->setSortingEnabled(false);
    ui.tracks_table->clearContents();
    ui.tracks_table->setRowCount(0);

    for (const Track& track : Helper::get_trackList())
    {
        qDebug() << "track: " << track.get_name();
        addItemToTracksTable(track, ui.tracks_table->rowCount());
    }
    ui.tracks_table->scrollToBottom();
    ui.tracks_table->hideColumn(0);
    ui.tracks_table->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Stretch);
    ui.tracks_table->resizeColumnsToContents();
    ui.tracks_table->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui.tracks_table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Fixed);
    ui.tracks_table->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Fixed);
    ui.tracks_table->setColumnWidth(1, ui.tracks_table->columnWidth(1));
    ui.tracks_table->setColumnWidth(2, ui.tracks_table->columnWidth(2));
    ui.tracks_table->setSortingEnabled(true);
}

void SoundAround::setTracksTable(const std::vector<Track>& trackList)
{
    ui.tracks_table->setSortingEnabled(false);
    ui.tracks_table->clearContents();
    ui.tracks_table->setRowCount(0);

    for (const Track& track : trackList)
        addItemToTracksTable(track, ui.tracks_table->rowCount());
    ui.tracks_table->scrollToBottom();
    ui.tracks_table->hideColumn(0);
    ui.tracks_table->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Stretch);
    ui.tracks_table->resizeColumnsToContents();
    ui.tracks_table->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui.tracks_table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Fixed);
    ui.tracks_table->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Fixed);
    ui.tracks_table->setColumnWidth(1, ui.tracks_table->columnWidth(1));
    ui.tracks_table->setColumnWidth(2, ui.tracks_table->columnWidth(2));
    ui.tracks_table->setSortingEnabled(true);
}

void SoundAround::setTagsComboBox()
{
    ui.tags_CBox->addItem("Все теги");
    for (auto& tag : Helper::get_tagList())
        ui.tags_CBox->addItem(tag);
}

void SoundAround::setContextMenu()
{
    _contextMenu->addAction(_addTrackAction);
    _contextMenu->addAction(_editTrackAction);
    _contextMenu->addAction(_removeTrackAction);
    _contextMenu->addSeparator();
    _contextMenu->addAction(_addTrackToPlaylist);
}

void SoundAround::resetTracksTable()
{
    ui.tracks_table->setSortingEnabled(false);
    ui.tracks_table->resizeColumnsToContents();
    ui.tracks_table->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui.tracks_table->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Fixed);
    ui.tracks_table->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Fixed);
    ui.tracks_table->setColumnWidth(1, ui.tracks_table->columnWidth(1));
    ui.tracks_table->setColumnWidth(2, ui.tracks_table->columnWidth(2));
    ui.tracks_table->setSortingEnabled(true);
}

void SoundAround::resizeByTrackListCount(const int trackListCount)
{
    if (trackListCount > 5)
        return;

    const int changeHeightValue = 130;

    QSize size(this->size());
    switch (trackListCount)
    {
    case 0:
        size.setHeight(220);
        break;
    case 1:
        size.setHeight(220);
        break;
    case 2:
        size.setHeight(350);
        break;
    case 3:
        size.setHeight(480);
        break;
    case 4:
        size.setHeight(610);
        break;
    case 5:
        size.setHeight(737);
        break;
    default:
        break;
    }
    resize(size);
}

void SoundAround::addItemToTracksTable(const Track& track, const int row)
{
    QFileInfo fileInfo(track.get_path());
    QString tagList;
    for (const QString& tag : track.get_tagList())
        tagList.append(tag + " ");
    QTableWidgetItem* trackIdItem = new QTableWidgetItem(QString::number(track.get_id()));
    trackIdItem->setData(Qt::UserRole, track.get_id());
    QTableWidgetItem* totalTimeItem = new QTableWidgetItem(track.get_totalTime());
    totalTimeItem->setTextAlignment(Qt::AlignCenter);

    ui.tracks_table->insertRow(row);
    ui.tracks_table->setItem(row, 0, trackIdItem);
    ui.tracks_table->setItem(row, 1, new QTableWidgetItem(track.get_baseName()));
    ui.tracks_table->setItem(row, 2, totalTimeItem);
    ui.tracks_table->setItem(row, 3, new QTableWidgetItem(tagList));
}

void SoundAround::addItemToTracksTable(Track* track, const int row)
{
    QFileInfo fileInfo(track->get_path());
    QString tagList;
    for (const QString& tag : track->get_tagList())
        tagList.append(tag + " ");
    QTableWidgetItem* trackIdItem = new QTableWidgetItem(QString::number(track->get_id()));
    trackIdItem->setData(Qt::UserRole, track->get_id());
    QTableWidgetItem* totalTimeItem = new QTableWidgetItem(track->get_totalTime());
    totalTimeItem->setTextAlignment(Qt::AlignCenter);

    ui.tracks_table->insertRow(row);
    ui.tracks_table->setItem(row, 0, trackIdItem);
    ui.tracks_table->setItem(row, 1, new QTableWidgetItem(track->get_baseName()));
    ui.tracks_table->setItem(row, 2, totalTimeItem);
    ui.tracks_table->setItem(row, 3, new QTableWidgetItem(tagList));
}

void SoundAround::resizeEvent(QResizeEvent* event)
{
    event->ignore();
    if (!ui.trackTable_frame->isVisible())
        return;
    resetTracksTable();
}

void SoundAround::closeEvent(QCloseEvent* event)
{
    saveConfig();
    saveData();
    event->accept();
}

void SoundAround::changeRemoveTrackInCB(const int trackId, bool remove)
{
    for (TrackFrame* trackFrame : _trackFramesList)
        trackFrame->changeRemoveTrackInCB(trackId, remove);
}

bool SoundAround::checkTrackInPlaylist(const int trackId)
{
    for (TrackFrame* trackFrame : _trackFramesList)
        if (trackFrame->get_trackId() == trackId)
            return true;
    return false;
}

void SoundAround::removeTrackFromPlaylist(const int trackId)
{
    auto itTrack = std::remove_if(
        _trackFramesList.begin(),
        _trackFramesList.end(),
        [&trackId](TrackFrame* trackFrame) {return trackFrame->get_trackId() == trackId; });
    _trackFramesList.erase(itTrack, _trackFramesList.end());
}

void SoundAround::addNewTrackToCBoxesPLists(const Track& newTrack)
{
    for (TrackFrame* trackFrame : _trackFramesList)
        trackFrame->tracks_CBox->addItem(newTrack.get_baseName(), newTrack.get_id());
}

bool SoundAround::checkOnTagIsExist(const QString& newTag)
{
    auto it = std::find_if(
        Helper::get_tagList().begin(),
        Helper::get_tagList().end(),
        [&newTag](const QString& tag) {return tag == newTag; });
    return (it == Helper::get_tagList().end()) ? false : true;
}

void SoundAround::addNewTagToCBoxes(const QString& newTag)
{
    ui.tags_CBox->addItem(newTag);
    for (TrackFrame* trackFrame : _trackFramesList)
        trackFrame->tags_CBox->addItem(newTag);
}

void SoundAround::removeTagFromCBoxes(const QString& removableTag)
{
    ui.tags_CBox->count();
    for (int i = 0; i < ui.tags_CBox->count(); ++i)
    {
        if (ui.tags_CBox->itemText(i) == removableTag)
            ui.tags_CBox->removeItem(i);
    }

    for (TrackFrame* trackFrame : _trackFramesList)
    {
        for (int i = 0; i < trackFrame->tags_CBox->count(); ++i)
        {
            if (ui.tags_CBox->itemText(i) == removableTag)
                ui.tags_CBox->removeItem(i);
        }
    }
}

void SoundAround::changedConfigs()
{
    _settings.beginGroup("config");
    bool volumeWidgetViewValue = _settings.value("volumeDialView", true).toBool();
    _settings.endGroup();

    for (TrackFrame* trackFrame : _trackFramesList)
    {
        if (trackFrame->dialVolume->isVisible() == volumeWidgetViewValue)
            return;
        trackFrame->setVolumeWidgetsViewVisible(volumeWidgetViewValue);
    }
}

void SoundAround::setShowHideTableBtnIcon()
{
    if (ui.trackTable_frame->isVisible())
    {
        ui.showHideTracksTable_btn->setIcon(QIcon(":/SoundAround/images/arrow-29-24.png"));
        ui.showHideTracksTable_btn->setToolTip("Скрыть таблицу треков");
    }
    else
    {
        ui.showHideTracksTable_btn->setIcon(QIcon(":/SoundAround/images/arrow-93-24.png"));
        ui.showHideTracksTable_btn->setToolTip("Показать таблицу треков");
    }
}

void SoundAround::setShowHideTableBtnIcon(bool show)
{
    if (show)
    {
        ui.showHideTracksTable_btn->setIcon(QIcon(":/SoundAround/images/arrow-29-24.png"));
        ui.showHideTracksTable_btn->setToolTip("Скрыть таблицу треков");
    }
    else
    {
        ui.showHideTracksTable_btn->setIcon(QIcon(":/SoundAround/images/arrow-93-24.png"));
        ui.showHideTracksTable_btn->setToolTip("Показать таблицу треков");
    }
}

void SoundAround::addTrackToPlaylist(const int trackId)
{
    _settings.beginGroup("config");
    bool volumeWidgetViewValue = _settings.value("volumeDialView", true).toBool();
    bool resizeByCount = _settings.value("resizeByCount", true).toBool();
    _settings.endGroup();

    if (Track* track = Helper::findTrack(trackId))
    {
        TrackFrame* trackFrame = new TrackFrame(track);
        trackFrame->setVolumeWidgetsViewVisible(volumeWidgetViewValue);
        ui.trackList_VBox->addWidget(trackFrame);
        _trackFramesList.push_back(std::move(trackFrame));
        connect(trackFrame, SIGNAL(closeFrame(int)), this, SLOT(closeTrackFrameSlot(int)));
        connect(trackFrame, SIGNAL(addNewTrackSignal(TrackFrame*)), this, SLOT(addNewTrackToTrackFrameSlot(TrackFrame*)));
        if (!trackFrame->isNoProblem())
            trackFrame->closeIt();
    }

    if (resizeByCount)
        resizeByTrackListCount(_trackFramesList.size());
}

void SoundAround::addNewTrackTagsToDB(const std::vector<QString>& tagList, int trackId)
{
    for (const QString& tag : tagList)
    {
        if (!Database::addTag(tag, trackId))
        {
            QString message = "Не удалось добавить тег \"" + tag + "\"";
            QMessageBox::critical(this, "Ошибка", message);
            continue;
        }
        if (!Helper::findTag(tag))
        {
            Helper::addTagToList(tag);
            addNewTagToCBoxes(tag);
        }
    }
}

void SoundAround::keyPressEvent(QKeyEvent* event)
{
    if (event->key() == Qt::Key_Control)
    {
        ui.tracks_table->setSelectionMode(QAbstractItemView::MultiSelection);
        _isCtrl = true;
    }
    else if (event->key() == Qt::Key_Shift)
    {
        ui.tracks_table->setSelectionMode(QAbstractItemView::MultiSelection);
        _isShift = true;
    }
}

void SoundAround::keyReleaseEvent(QKeyEvent* event)
{
    _isCtrl = false;
    _isShift = false;
}

void SoundAround::showConfigsFormSlot()
{
    //ConfigsForm configsForm;
    std::unique_ptr<ConfigsForm> cf(new ConfigsForm());
    cf.get()->setWindowFlags(Qt::WindowCloseButtonHint);
    connect(cf.get(), SIGNAL(checkTracksOnExistanceSignal()), this, SLOT(checkTracksOnExistanceSlot()));
    
    if (!cf.get()->exec())
        return;
    changedConfigs();
}

void SoundAround::showAboutFormSlot()
{
    AboutForm aboutForm;
    aboutForm.setWindowFlags(Qt::WindowCloseButtonHint);
    aboutForm.exec();
}

void SoundAround::showReferenceSlot()
{
    ReferenceForm referenceForm;
    referenceForm.setWindowFlags(Qt::WindowCloseButtonHint);
    referenceForm.exec();
}

void SoundAround::tracksTableContextMenuRequestedSlot(QPoint pos)
{
    int rowAtPos = ui.tracks_table->itemAt(pos)->row();
    if (!ui.tracks_table->selectionModel()->isRowSelected(rowAtPos))
        ui.tracks_table->selectRow(rowAtPos);
    int selectedSize = ui.tracks_table->selectionModel()->selectedRows().size();
    bool editEnable = true;
    if (selectedSize > 1)
    {
        
        editEnable = false;
    }
    const int currRow = ui.tracks_table->selectionModel()->currentIndex().row();
    bool enable = true;
    _contextMenu->popup(ui.tracks_table->viewport()->mapToGlobal(pos));
    if (currRow < 0)
    {
        enable = false;
        editEnable = false;
    }
    _editTrackAction->setEnabled(editEnable);
    _removeTrackAction->setEnabled(enable);
    _addTrackToPlaylist->setEnabled(enable);
}

void SoundAround::selectItem(QTableWidgetItem* item)
{
    if (!_isCtrl && !_isShift)
    {
        ui.tracks_table->setSelectionMode(QAbstractItemView::SingleSelection);
        ui.tracks_table->selectRow(item->row());
    }
}

void SoundAround::pressItem(QTableWidgetItem* item)
{
    if (!_isCtrl && !_isShift)
    {
        ui.tracks_table->selectRow(item->row());
        return;
    }

    if (!_isShift)
        return;

    ui.tracks_table->setSelectionMode(QAbstractItemView::MultiSelection);
    int itemIndex = item->row();
    int minIndex = -1;
    int maxIndex = 0;

    for (int i = 0; i < ui.tracks_table->rowCount(); ++i)
    {
        if (!ui.tracks_table->selectionModel()->isRowSelected(i))
            continue;
        if (minIndex < 0)
            minIndex = i;
        if (i > maxIndex)
            maxIndex = i;
    }

    if (minIndex < 0)
    {
        ui.tracks_table->selectRow(item->row());
        return;
    }

    if (itemIndex < maxIndex && itemIndex > minIndex)
        maxIndex = itemIndex;

    for (int i = 0; i < ui.tracks_table->rowCount(); ++i)
    {
        bool rowIsSelected = ui.tracks_table->selectionModel()->isRowSelected(i);
        if (i < minIndex)
            continue;

        if (i >= minIndex && i <= maxIndex)
        {
            if (!rowIsSelected)
                ui.tracks_table->selectRow(i);
        }
        else if (rowIsSelected)
            ui.tracks_table->selectRow(i);
    }
}

void SoundAround::showHideTracksTableSlot()
{
    if (ui.trackTable_frame->isVisible())
    {
        _trackListSize = ui.trackTable_frame->size();
        ui.trackTable_frame->setMinimumWidth(0);
        ui.trackTable_frame->resize(0, 0);
        ui.trackTable_frame->setVisible(false);
        setShowHideTableBtnIcon();
        _mainWinSize.setWidth(535);
        _mainWinSize.setHeight(height());
        
        setMaximumWidth(535);
        setMinimumWidth(535);
        resize(_mainWinSize);
    }
    else
    {
        if (_trackListSize.width() < 450)
            _trackListSize.setWidth(450);
        ui.trackTable_frame->resize(_trackListSize);
        ui.trackTable_frame->setVisible(true);
        setShowHideTableBtnIcon();
        setMaximumWidth(16777215);
        setMinimumWidth(535);
        resize(width() + _trackListSize.width(), height());
    }
}

void SoundAround::closeTrackFrameSlot(int trackId)
{
    if (TrackFrame* trackFrame = findTrackFrame(trackId))
    {
        trackFrame->deleteLater();
        removeTrackFrame(trackFrame);

        _settings.beginGroup("config");
        bool resizeByCount = _settings.value("resizeByCount", true).toBool();
        _settings.endGroup();
        if (resizeByCount)
            resizeByTrackListCount(_trackFramesList.size());
    }
}

void SoundAround::filterByTagSlot()
{
    if (ui.tags_CBox->currentIndex() <= 0)
    {
        setTracksTable();
        return;
    }
    std::vector<Track> trackListByTag;
    QString tag = ui.tags_CBox->itemText(ui.tags_CBox->currentIndex());
    for (const Track& track : Helper::get_trackList())
    {
        if (track.get_tagList().empty())
            continue;
        auto it = std::find_if(
            track.get_tagList().begin(),
            track.get_tagList().end(),
            [&tag](const QString& foundedTag) {return foundedTag == tag; });
        if (it == track.get_tagList().end())
            continue;
        trackListByTag.push_back(std::move(track));
    }

    if (trackListByTag.empty())
        return;
    setTracksTable(trackListByTag);
}

void SoundAround::addEmptyTrackFrameSlot()
{
    _settings.beginGroup("config");
    bool volumeWidgetViewValue = _settings.value("volumeDialView", true).toBool();
    bool resizeByCount = _settings.value("resizeByCount", true).toBool();
    _settings.endGroup();

    TrackFrame* trackFrame = new TrackFrame();
    trackFrame->setParent(this);
    trackFrame->setVolumeWidgetsViewVisible(volumeWidgetViewValue);
    ui.trackList_VBox->addWidget(trackFrame);
    _trackFramesList.push_back(std::move(trackFrame));
    connect(trackFrame, SIGNAL(closeFrame(int)), this, SLOT(closeTrackFrameSlot(int)));
    connect(trackFrame, SIGNAL(addNewTrackSignal(TrackFrame*)), this, SLOT(addNewTrackToTrackFrameSlot(TrackFrame*)));
    if (resizeByCount)
        resizeByTrackListCount(_trackFramesList.size());
}

void SoundAround::cleanTrackFramesListSlot()
{
    for (TrackFrame* trackFrame : _trackFramesList)
        trackFrame->deleteLater();

    _trackFramesList.clear();
    _settings.beginGroup("config");
    bool resizeByCount = _settings.value("resizeByCount", true).toBool();
    _settings.endGroup();
    if (resizeByCount)
        resizeByTrackListCount(_trackFramesList.size());
}

void SoundAround::muteAllSlot(bool mute)
{
    for (TrackFrame* trackFrame : _trackFramesList)
        trackFrame->mute(mute);
}

void SoundAround::stopAllSlot()
{
    for (TrackFrame* trackFrame : _trackFramesList)
        trackFrame->stop();
}

void SoundAround::playAllSlot()
{
    for (TrackFrame* trackFrame : _trackFramesList)
        trackFrame->setPlay();
}

void SoundAround::pauseAllSlot()
{
    for (TrackFrame* trackFrame : _trackFramesList)
        trackFrame->setPause();
}

void SoundAround::checkTracksOnExistanceSlot()
{
    QStringList remoteTracks;
    std::vector<Track> removableTracks;
    QString messageText;
    for (Track& track : Helper::get_trackList())
    {
        QString path = track.get_path();
        QString currentPath = QDir::currentPath() + "/sounds/" + track.get_name();
        if (QFile(path).exists())
            continue;
        if (QFile(currentPath).exists())
        {
            track.set_path(currentPath);
            Database::editTrack(track);
            continue;
        }
        removableTracks.push_back(std::move(track));
    }

    for (Track& track : removableTracks)
    {
        int trackId = track.get_id();
        Database::removeTagsByTrack(trackId);
        Database::removeObject(trackId, Database::TABLE_TRACKS);
        std::vector<QString> tagList = track.get_tagList();
        Helper::removeTrackFromList(trackId);
        for (const QString& tag : tagList)
        {
            if (!Helper::checkTagExistInTracks(tag))
            {
                Helper::removeTag(tag);
                removeTagFromCBoxes(tag);
            }
        }
        changeRemoveTrackInCB(trackId, true);
        remoteTracks.append(track.get_baseName());
    }
    
    if (remoteTracks.isEmpty())
        messageText = "Все треки в норме";
    else
    {
        messageText = "Следующие треки удалены, так как не найдены:";
        for (const QString& trackName : remoteTracks)
            messageText.append("\n").append(trackName);
        Helper::refreshTagList();
        setTracksTable();
    }

    QMessageBox::information(this, "Проверка треков", messageText);
}
