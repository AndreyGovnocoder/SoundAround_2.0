#include "TrackDialog.h"

TrackDialog::TrackDialog(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
	connect(_mediaPlayer, &QMediaPlayer::durationChanged, this, &TrackDialog::durationChangedSlot);
	_timer->setInterval(10);
	connect(_timer, SIGNAL(timeout()), this, SLOT(setDurations()));
	nameAndTags_frame->setEnabled(false);
	acceptTrack_frame->setEnabled(false);
	setAcceptDrops(true);
	addFile_btn->setVisible(false);
	for (const QString& tag : Helper::get_tagList())
		_allTagsList.append(tag);
	setTagsListWidget();
	_keyDel = new QShortcut(this);
	_keyDel->setKey(Qt::Key_Delete);
	connect(_keyDel, &QShortcut::activated, this, &TrackDialog::removeSelectedTracksSlot);
	_keyEnter = new QShortcut(this);
	_keyEnter->setKey(Qt::Key_Enter);
	connect(_keyEnter, &QShortcut::activated, this, &TrackDialog::keyEnterPressedSlot);
	connect(name_lineEdit, &QLineEdit::returnPressed, this, &TrackDialog::keyEnterPressedSlot);
	connect(search_lineEdit, &QLineEdit::returnPressed, this, &TrackDialog::keyEnterPressedSlot);
	allTags_listWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
	tracksTags_listWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
	allTags_listWidget->setAcceptDrops(false);
	tracksTags_listWidget->setAcceptDrops(false);
	search_lineEdit->setValidator(_validator);
	loadConfig();
	setBackground();
}

void TrackDialog::setTrackData(Track* track)
{
	_isEdit = true;
	_oneFile = true;
	_oldName = track->get_baseName();
	trackPath_frame->setVisible(false);
	tracksList_frame->setVisible(false);
	_fileList.append(QFileInfo(track->get_path()));
	nameAndTags_frame->setEnabled(true);
	acceptTrack_frame->setVisible(false);
	name_lineEdit->setText(track->get_baseName());
	for (const QString& tag : track->get_tagList())
		tracksTags_listWidget->addItem(tag);

	allTags_listWidget->clear();
	for (const QString& tag : Helper::get_tagList())
	{
		auto it = std::find_if(
			track->get_tagList().begin(), track->get_tagList().end(),
			[&tag](const QString& foundedTag) {return foundedTag == tag; });
		if (it == track->get_tagList().end())
			allTags_listWidget->addItem(tag);
	}
}

void TrackDialog::setForOneFile()
{
	_oneFile = true;
	addFile_btn->setVisible(true);
	addFiles_btn->setVisible(false);
	addFolder_btn->setVisible(false);
	tracks_listWidget->setVisible(false);
	tracks_listWidget->setEnabled(false);
	acceptTrack_frame->setVisible(false);
}

void TrackDialog::dragEnterEvent(QDragEnterEvent* event)
{
	event->accept();
}

void TrackDialog::dragMoveEvent(QDragMoveEvent* event)
{
	if (_oneFile && event->mimeData()->urls().size() > 1)
	{
		event->ignore();
		return;
	}
	else if (event->mimeData()->urls().size() == 1)
	{
		QFileInfo fileInfo(event->mimeData()->urls()[0].toLocalFile());
		QString ext = fileInfo.suffix();
		if (ext.isEmpty() || ext == "mp3" || ext == "wav" || ext == "ogg" || ext == "ape" || ext == "flac" || ext == "aiff")
			event->acceptProposedAction();
		else
			event->ignore();
		return;
	}

	event->acceptProposedAction();
}

void TrackDialog::dropEvent(QDropEvent* event)
{
	int size = event->mimeData()->urls().size();
	if (_oneFile)
	{
		tracks_listWidget->clear();
		tracksTags_listWidget->clear();
		setTagsListWidget();
		_tagLists.clear();
		_fileList.clear();
		_durationsList.clear();
	}

	if (size == 1 && QFileInfo(event->mimeData()->urls()[0].toLocalFile()).suffix().isEmpty())
	{
		QDir dir = event->mimeData()->urls()[0].toLocalFile();
		QFileInfoList files = dir.entryInfoList(QDir::Files);
		for (QFileInfo& fileInfo : files)
		{
			if (checkFileInfo(fileInfo))
				continue;
			QString ext = fileInfo.suffix();
			if (ext == "mp3" || ext == "wav" || ext == "ogg" || ext == "ape" || ext == "flac" || ext == "aiff")
			{
				_fileList.append(fileInfo);
				_durationsList.append("");
			}
		}
	}
	else
	{
		for (int i = 0; i < size; ++i)
		{
			QFileInfo fileInfo(event->mimeData()->urls()[i].toLocalFile());
			if (checkFileInfo(fileInfo))
				continue;
			QString ext = fileInfo.suffix();
			if (ext == "mp3" || ext == "wav" || ext == "ogg" || ext == "ape" || ext == "flac" || ext == "aiff")
			{
				_fileList.append(fileInfo);
				_durationsList.append("");
			}
		}
	}

	setTrackListWidget();
}

void TrackDialog::setBackground()
{
	QPixmap mainBkgnd(":/SoundAround/images/wall.png");
	mainBkgnd.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
	QPalette palette;
	palette.setBrush(QPalette::Background, mainBkgnd);
	setPalette(palette);
}

void TrackDialog::setTagsListWidget()
{
	allTags_listWidget->clear();
	if (tracksTags_listWidget->count() == 0)
	{
		allTags_listWidget->addItems(_allTagsList);
		return;
	}

	QStringList addedTags;
	for (const QString& tag : _allTagsList)
	{
		if (!checkFoundTag(tag))
			addedTags.append(tag);
	}
	allTags_listWidget->addItems(addedTags);
}
void TrackDialog::setTracksTagsListWidget(const int row)
{
	tracksTags_listWidget->clear();
	tracksTags_listWidget->addItems(_tagLists.at(row));
	setTagsListWidget();
}
void TrackDialog::removeTagFromAllTagsListWidget(const QString& removableTag)
{
	for (int i = 0; i < allTags_listWidget->count(); ++i)
	{
		QListWidgetItem* item = allTags_listWidget->item(i);
		if (item->text() == removableTag)
		{
			delete item;
			break;
		}
	}
}

bool TrackDialog::checkTrackName(const QString& trackName, const int index)
{
	auto it = std::find_if(Helper::get_trackList().begin(), Helper::get_trackList().end(), [&trackName](const Track& track) {return track.get_baseName() == trackName; });
	bool check = (it == Helper::get_trackList().end()) ? true : false;
	if (!check)
		return check;
	QString duplicate = QDir::currentPath() + "/sounds/" + trackName + "." + _fileList[index].suffix();
	if (QFile(duplicate).exists())
		QFile::remove(duplicate);
	return true;
}

bool TrackDialog::checkTrackNameInAddedAcceptedTracks(const QString& trackName)
{
	for (int i = 0; i < tracks_listWidget->count(); ++i)
	{
		QListWidgetItem* item = tracks_listWidget->item(i);
		if (item->data(Qt::UserRole).toBool() && item->text() == trackName)
			return true;
	}
	return false;
}

void TrackDialog::keyPressEvent(QKeyEvent* event)
{
	if (event->key() == Qt::Key_Control)
	{
		tracksTags_listWidget->setSelectionMode(QAbstractItemView::MultiSelection);
		allTags_listWidget->setSelectionMode(QAbstractItemView::MultiSelection);
		tracks_listWidget->setSelectionMode(QAbstractItemView::MultiSelection);
	}
	else if (event->key() == Qt::Key_Shift)
	{
		tracks_listWidget->setSelectionMode(QAbstractItemView::MultiSelection);
		_isShift = true;
	}
	
}

void TrackDialog::keyReleaseEvent(QKeyEvent* event)
{
	if (event->key() == Qt::Key_Control)
	{
		tracksTags_listWidget->setSelectionMode(QAbstractItemView::SingleSelection);
		allTags_listWidget->setSelectionMode(QAbstractItemView::SingleSelection);
		tracks_listWidget->setSelectionMode(QAbstractItemView::SingleSelection);
	}
	else if (event->key() == Qt::Key_Shift)
	{
		_isShift = false;
		tracks_listWidget->setSelectionMode(QAbstractItemView::SingleSelection);
	}
}

void TrackDialog::saveConfig()
{
	QSettings settings("Goose", "SoundAround");
	settings.beginGroup("config");
	settings.setValue("trackDialogWinWidth", width());
	settings.setValue("trackDialogWinHeight", height());	
	settings.endGroup();
}

void TrackDialog::loadConfig()
{
	QSize size;
	QSettings settings("Goose", "SoundAround");
	settings.beginGroup("config");
	size.setWidth(settings.value("trackDialogWinWidth", 475).toInt());
	size.setHeight(settings.value("trackDialogWinHeight", 430).toInt());
	settings.endGroup();
	resize(size);
}

void TrackDialog::isAccept()
{
	QSettings settings("Goose", "SoundAround");
	settings.beginGroup("config");
	bool ask = settings.value("askToSave").toBool();
	settings.endGroup();

	if (!_isEdit && !ask)
	{
		AskToCopyDialog askToCopyDialog;
		askToCopyDialog.setWindowTitle("");
		askToCopyDialog.setWindowModality(Qt::WindowModality::ApplicationModal);
		askToCopyDialog.setWindowFlags(Qt::WindowCloseButtonHint);
		if (!askToCopyDialog.exec())
			return;
	}

	saveConfig();
	accept();
}

void TrackDialog::setTrackListWidget()
{
	if (_fileList.size() == tracks_listWidget->count())
		return;

	for (int i = tracks_listWidget->count(); i < _fileList.size(); ++i)
	{
		QListWidgetItem* item = new QListWidgetItem(_fileList[i].completeBaseName(), tracks_listWidget);
		item->setIcon(QIcon(":/SoundAround/images/ban-16.png"));
		item->setData(Qt::UserRole, false);
		QStringList stringList;
		_tagLists.push_back(std::move(stringList));
	}
	_timer->start();
	selectFirstNotAcceptedItem();
}

bool TrackDialog::checkFileInfo(const QFileInfo& fileInfo)
{
	auto it = std::find_if(
		_fileList.begin(),
		_fileList.end(),
		[&fileInfo](const QFileInfo& currFileInfo) {return fileInfo == currFileInfo; });
	return (it == _fileList.end() ? false : true);
}

void TrackDialog::cancelAcceptingItem(QListWidgetItem* item)
{
	bool accepted = item->data(Qt::UserRole).toBool();
	if (!accepted)
		return;

	item->setIcon(QIcon(":/SoundAround/images/ban-16.png"));
	item->setData(Qt::UserRole, false);
}

void TrackDialog::selectFirstNotAcceptedItem()
{
	for (int i = 0; i < tracks_listWidget->count(); ++i)
	{
		if (tracks_listWidget->item(i)->data(Qt::UserRole).toBool())
			continue;

		tracks_listWidget->setCurrentRow(i);
		selectItemSlot(tracks_listWidget->item(i));
		return;
	}

	tracks_listWidget->clearSelection();
	name_lineEdit->clear();
	nameAndTags_frame->setEnabled(false);
	acceptTrack_frame->setEnabled(false);
	ok_btn->setFocus();
}

bool TrackDialog::checkFoundTag(const QString& foundTag)
{
	for (int i = 0; i < tracksTags_listWidget->count(); ++i)
	{
		if (tracksTags_listWidget->item(i)->text() == foundTag)
			return true;
	}
	return false;
}

void TrackDialog::addTagToTrackSlot()
{
	if (allTags_listWidget->selectedItems().isEmpty())
	{
		if (search_lineEdit->text().isEmpty())
			return;
		QString newTag = search_lineEdit->text().toLower();
		if (Helper::findTag(newTag) || checkFoundTag(newTag))
		{
			QMessageBox::warning(this, "Внимание", "Такой тег уже существует");
			search_lineEdit->setFocus();
			return;
		}
		tracksTags_listWidget->addItem(newTag);
		_allTagsList.append(newTag);
		int currRow = tracks_listWidget->currentRow();
		if (!_isEdit)
			_tagLists.at(currRow).append(newTag);
		search_lineEdit->clear();
		return;
	}
	int currRow = tracks_listWidget->currentRow();
	for (const auto& item : allTags_listWidget->selectedItems())
	{
		tracksTags_listWidget->addItem(item->text());
		if (!_isEdit)
			_tagLists.at(currRow).append(item->text());
	}
	qDeleteAll(allTags_listWidget->selectedItems());
	allTags_listWidget->clearSelection();
	search_lineEdit->clear();
}

void TrackDialog::addTagToBackSlot()
{
	if (tracksTags_listWidget->selectedItems().isEmpty())
		return;
	int currRow = tracks_listWidget->currentRow();
	for (const auto& item : tracksTags_listWidget->selectedItems())
	{
		QString itemText = item->text();
		allTags_listWidget->addItem(itemText);
		if (!_isEdit)
		{
			auto it = std::remove_if(
				_tagLists.at(currRow).begin(),
				_tagLists.at(currRow).end(),
				[&itemText](const QString& tag) {return itemText == tag; });
			_tagLists.at(currRow).erase(it, _tagLists.at(currRow).end());
		}		
	}
	
	qDeleteAll(tracksTags_listWidget->selectedItems());
	tracksTags_listWidget->clearSelection();
}

void TrackDialog::addNewTagSlot()
{

	TagDialog tagDialog;
	tagDialog.setWindowTitle("Новый тег");
	tagDialog.setWindowModality(Qt::WindowModality::ApplicationModal);
	tagDialog.setWindowFlags(Qt::WindowCloseButtonHint);
	if (!tagDialog.exec())
		return;
	QString newTag = tagDialog.tag_lineEdit->text().toLower();
	tracksTags_listWidget->addItem(newTag);
	int currRow = tracks_listWidget->currentRow();
	if (!_isEdit)
		_tagLists.at(currRow).append(newTag);
	_allTagsList.append(newTag);
}

void TrackDialog::acceptSlot()
{
	if (!_isEdit && !_oneFile)
	{
		isAccept();
		return;
	}

	if (name_lineEdit->text().isEmpty())
	{
		QMessageBox::warning(this, "Внимание", "Введи название трека");
		return;
	}

	if (name_lineEdit->text() == _oldName)
	{
		isAccept();
		return;
	}

	if (Helper::checkTrackNameInTracks(name_lineEdit->text()))
	{
		QMessageBox::warning(this, "Внимание", "Трек с таким названием уже существует. Введи другое название.");
		return;
	}

	isAccept();
}

void TrackDialog::searchTagSlot(QString input)
{
	if (input.isEmpty())
	{
		setTagsListWidget();
		return;
	}

	QString searchText = input.toLower();
	QStringList foundTagsList;
	size_t one = 1;
	
	for (const auto& tag : _allTagsList)
	{
		for (size_t k = 0; k < searchText.size(); ++k)
		{
			if (k == tag.size())
				break;

			if (searchText.at(k) != tag.at(k))
				break;

			if (k == searchText.size() - one && !checkFoundTag(tag))
				foundTagsList.append(tag);
		}
	}

	allTags_listWidget->clear();
	allTags_listWidget->addItems(foundTagsList);
	allTags_listWidget->setCurrentRow(0);
}

void TrackDialog::pressItemSlot(QListWidgetItem* item)
{
	if (!_isShift)
	{
		selectItemSlot(item);
		return;
	}
	
	int minIndex = -1;
	int maxIndex = 0;
	for (int i = 0; i < tracks_listWidget->count(); ++i)
	{
		if (!tracks_listWidget->item(i)->isSelected())
			continue;
		if (minIndex < 0)
			minIndex = i;
		if (i > maxIndex)
			maxIndex = i;
	}

	if (minIndex < 0)
	{
		selectItemSlot(item);
		return;
	}

	for (int i = minIndex; i <= maxIndex; ++i)
		tracks_listWidget->item(i)->setSelected(true);
	name_lineEdit->clear();
	tracksTags_listWidget->clear();
	setTagsListWidget();
	nameAndTags_frame->setEnabled(false);
}

void TrackDialog::selectItemSlot(QListWidgetItem* item)
{
	if (tracks_listWidget->selectionMode() == QAbstractItemView::MultiSelection)
	{
		name_lineEdit->clear();
		tracksTags_listWidget->clear();
		setTagsListWidget();
		nameAndTags_frame->setEnabled(false);
		return;
	}
	bool acceptedTrack = item->data(Qt::UserRole).toBool();

	nameAndTags_frame->setEnabled(!acceptedTrack);
	acceptTrack_frame->setEnabled(true);
	name_lineEdit->setText(item->text());
	int row = tracks_listWidget->row(item);
	setTracksTagsListWidget(row);
	if (!acceptedTrack)
	{
		name_lineEdit->setFocus();
		name_lineEdit->selectAll();
	}
}

void TrackDialog::acceptTrackSlot()
{
	if (tracks_listWidget->selectedItems().size() > 1)
		return;

	if (QListWidgetItem* item = tracks_listWidget->selectedItems()[0])
	{
		bool acceptedTrack = item->data(Qt::UserRole).toBool();
		if (acceptedTrack)
			return;

		if (name_lineEdit->text().isEmpty())
		{
			QMessageBox::warning(this, "Внимание", "Введи название трека");
			return;
		}

		if (Helper::checkTrackNameInTracks(name_lineEdit->text()) ||
			checkTrackNameInAddedAcceptedTracks(name_lineEdit->text()))
		{
			QMessageBox::warning(this, "Внимание", "Трек с таким названием уже существует. Введи другое название.");
			return;
		}

		item->setIcon(QIcon(":/SoundAround/images/checkmark-16.png"));
		item->setData(Qt::UserRole, true);
		item->setText(name_lineEdit->text());
		int currRow = tracks_listWidget->currentRow();

		for (int i = ++currRow; i < tracks_listWidget->count(); ++i)
		{
			if (tracks_listWidget->item(i)->data(Qt::UserRole).toBool())
				continue;

			tracks_listWidget->setCurrentRow(i);
			selectItemSlot(tracks_listWidget->item(i));
			return;
		}

		selectFirstNotAcceptedItem();
	}
}

void TrackDialog::cancelTrackSlot()
{
	if (tracks_listWidget->selectedItems().size() == 1)
	{
		QListWidgetItem* item = tracks_listWidget->selectedItems()[0];
		cancelAcceptingItem(item);
		nameAndTags_frame->setEnabled(true);
		name_lineEdit->setText(item->text());
		name_lineEdit->setFocus();
		name_lineEdit->selectAll();
	}
	else
	{
		for (QListWidgetItem* item : tracks_listWidget->selectedItems())
			cancelAcceptingItem(item);
	}
}

void TrackDialog::removeSelectedTracksSlot()
{
	if (tracks_listWidget->selectedItems().isEmpty())
		return;
	for (int i = _fileList.size() - 1; i >= 0; --i)
	{
		if (!tracks_listWidget->item(i)->isSelected())
			continue;
		_fileList.removeAt(i);
		_durationsList.removeAt(i);
		_tagLists.erase(_tagLists.begin() + i);
	}
	qDeleteAll(tracks_listWidget->selectedItems());
	selectFirstNotAcceptedItem();
}

void TrackDialog::addFilesSlot()
{
	QStringList filesList = QFileDialog::getOpenFileNames(this,
	    tr("Добавить трек"), "", tr("sound (*.mp3 *.wav *.ogg *.aiff *.flac *.ape)"));
	
	if (filesList.isEmpty())
		return;

	for (QString& currFile : filesList)
	{
		QFile file(currFile);
		QFileInfo fileInfo(file.fileName());
		if (checkFileInfo(fileInfo))
			continue;

		_fileList.append(fileInfo);
		_durationsList.append("");
	}

	setTrackListWidget();
}

void TrackDialog::addFileSlot()
{
	QFile file = QFileDialog::getOpenFileName(this,
		tr("Добавить трек"), "", tr("sound (*.mp3 *.wav *.ogg *.aiff *.flac *.ape)"));

	if (file.fileName().isEmpty())
		return;

	_fileList.append(QFileInfo(file.fileName()));
	_durationsList.append("");
	setTrackListWidget();
}

void TrackDialog::addFolderSlot()
{
	QString dirPath = QFileDialog::getExistingDirectory(this, "Добавить папку с треками", nullptr,
		QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
	if (dirPath.isEmpty())
		return;
	QDir dir(dirPath);
	QFileInfoList files = dir.entryInfoList(QDir::Files);
	if (files.isEmpty())
		return;

	for (QFileInfo& fileInfo : files)
	{
		QString ext = fileInfo.suffix();
		if (ext.isEmpty() || checkFileInfo(fileInfo))
			continue;
		
		if (ext == "mp3" || ext == "wav" || ext == "ogg" || ext == "ape" || ext == "flac" || ext == "aiff")
		{
			_fileList.append(fileInfo);
			_durationsList.append("");
		}
	}

	setTrackListWidget();
}

void TrackDialog::keyEnterPressedSlot()
{
	if (search_lineEdit->hasFocus() && !search_lineEdit->text().isEmpty())
	{
		addTagToTrackSlot();
		return;
	}
	
	if (_oneFile)
	{
		if (!search_lineEdit->hasFocus())
			search_lineEdit->setFocus();
		else
			acceptSlot();
		return;
	}

	if (tracks_listWidget->selectedItems().size() == 1)
	{
		if (tracksTags_listWidget->count() == 0 && !search_lineEdit->hasFocus())
		{
			search_lineEdit->setFocus();
			return;
		}

		bool acceptedTrack = tracks_listWidget->item(tracks_listWidget->currentRow())->data(Qt::UserRole).toBool();
		if (!acceptedTrack)
		{
			acceptTrackSlot();
			return;
		}
	}
		
	selectFirstNotAcceptedItem();	
}

void TrackDialog::durationChangedSlot()
{
	if (_mediaPlayer->duration() > 0)
		_durationChanged = true;
}

void TrackDialog::setDurations()
{
	QString currentMedia = _mediaPlayer->media().canonicalUrl().toLocalFile();
	QString newMedia = _fileList[_currIndex].absoluteFilePath();
	if (currentMedia != newMedia)
		_mediaPlayer->setMedia(QUrl::fromLocalFile(newMedia));
	if (!_durationChanged)
		return;
	_durationsList.replace(_currIndex, Helper::getFormatTime(_mediaPlayer->duration() / 1000));
	_durationChanged = false;
	++_currIndex;
	if (_currIndex == _fileList.size())
	{
		_timer->stop();
		_currIndex = 0;
	}
}

void TrackDialog::testSlot()
{
}