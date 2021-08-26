#include "TrackDialog.h"


TrackDialog::TrackDialog(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
	nameAndTags_frame->setEnabled(false);
	setAcceptDrops(true);
	setTagsListWidget();
	allTags_listWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
	tracksTags_listWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
	allTags_listWidget->setAcceptDrops(false);
	tracksTags_listWidget->setAcceptDrops(false);
	loadConfig();
	setBackground();
}

void TrackDialog::dragMoveEvent(QDragMoveEvent* event)
{
	QFileInfo fileInfo(event->mimeData()->urls()[0].toLocalFile());
	QString ext = fileInfo.completeSuffix();
	if (ext == "mp3" || ext == "wav" || ext == "ogg" || ext == "ape" || ext == "flac" || ext == "aiff")
		event->acceptProposedAction();
	else
		event->ignore();
}

void TrackDialog::setTrackData(Track* track)
{
	_isEdit = true;
	_oldName = track->get_baseName();
	trackPath_frame->setVisible(false);
	_fileInfo.setFile(track->get_path());
	nameAndTags_frame->setEnabled(true);
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

const QString TrackDialog::getTrackTotalTime()
{
	QString totalTime = Helper::getFormatTime(mediaPlayer->duration() / 1000);
	return totalTime;
}

void TrackDialog::dragEnterEvent(QDragEnterEvent* event)
{
	event->accept();
}

void TrackDialog::dropEvent(QDropEvent* event)
{
	_fileInfo.setFile(event->mimeData()->urls()[0].toLocalFile());
	fileSelected();
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
	QStringList tagList;
	for (const QString& tag : Helper::get_tagList())
		tagList.append(tag);

	allTags_listWidget->addItems(tagList);
}

void TrackDialog::fileSelected()
{
	mediaPlayer->setMedia(QUrl::fromLocalFile(_fileInfo.path() + "/" + _fileInfo.fileName()));
	nameAndTags_frame->setEnabled(true);
	name_lineEdit->setText(_fileInfo.baseName());
	name_lineEdit->setFocus();
	name_lineEdit->selectAll();
}

bool TrackDialog::checkTrackName(const QString& trackName)
{
	auto it = std::find_if(Helper::get_trackList().begin(), Helper::get_trackList().end(), [&trackName](const Track& track) {return track.get_baseName() == trackName; });
	bool check = (it == Helper::get_trackList().end()) ? true : false;
	if (!check)
		return check;
	QString duplicate = QDir::currentPath() + "/sounds/" + trackName + "." + _fileInfo.suffix();
	if (QFile(duplicate).exists())
		QFile::remove(duplicate);
	return true;
}

void TrackDialog::keyPressEvent(QKeyEvent* event)
{
	if (event->key() != Qt::Key_Control)
		return;
	tracksTags_listWidget->setSelectionMode(QAbstractItemView::MultiSelection);
	allTags_listWidget->setSelectionMode(QAbstractItemView::MultiSelection);
}

void TrackDialog::keyReleaseEvent(QKeyEvent* event)
{
	if (event->key() != Qt::Key_Control)
		return;
	tracksTags_listWidget->setSelectionMode(QAbstractItemView::SingleSelection);
	allTags_listWidget->setSelectionMode(QAbstractItemView::SingleSelection);
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

void TrackDialog::addTagToTrackSlot()
{
	if (allTags_listWidget->selectedItems().isEmpty())
		return;

	for (const auto& item : allTags_listWidget->selectedItems())
		tracksTags_listWidget->addItem(item->text());
	qDeleteAll(allTags_listWidget->selectedItems());
	allTags_listWidget->clearSelection();
	addTagToTrack_btn->setEnabled(false);
}

void TrackDialog::addTagToBackSlot()
{
	if (tracksTags_listWidget->selectedItems().isEmpty())
		return;

	for (const auto& item : tracksTags_listWidget->selectedItems())
		allTags_listWidget->addItem(item->text());
	qDeleteAll(tracksTags_listWidget->selectedItems());
	tracksTags_listWidget->clearSelection();
	addTagToAllTags_btn->setEnabled(false);
}

void TrackDialog::addNewTagSlot()
{
	bool ok;
	
	QString tag = QInputDialog::getText(this, "Новый тег", "Тег:", QLineEdit::Normal, "", &ok);
	if (tag.isEmpty() || !ok)
	    return;
	tracksTags_listWidget->addItem(tag);
}

void TrackDialog::trackTagsItemClickedSlot()
{
	if (tracksTags_listWidget->selectedItems().isEmpty())
		addTagToAllTags_btn->setEnabled(false);
	else
		addTagToAllTags_btn->setEnabled(true);
}

void TrackDialog::allTagsItemClickedSlot()
{
	if (allTags_listWidget->selectedItems().isEmpty())
		addTagToTrack_btn->setEnabled(false);
	else
		addTagToTrack_btn->setEnabled(true);
}

void TrackDialog::acceptSlot()
{
	if (_fileInfo.filePath().isEmpty())
	{
		QMessageBox::warning(this, "Внимание", "Добавь трек");
		return;
	}

	if (name_lineEdit->text().isEmpty())
	{
		QMessageBox::warning(this, "Внимание", "Введи название трек");
		return;
	}

	if (_isEdit && name_lineEdit->text() == _oldName)
	{
		saveConfig();
		accept();
		return;
	}

	if (!checkTrackName(name_lineEdit->text()))
	{
		QMessageBox::warning(this, "Внимание", "Трек с таким названием уже существует. Введи другое название.");
		return;
	}
	saveConfig();
	accept();
}

void TrackDialog::addFileSlot()
{
	QFile file = QFileDialog::getOpenFileName(this,
	    tr("Добавить трек"), "", tr("sound (*.mp3 *.wav *.ogg *.aiff *.flac *.ape)"));
	
	if (file.fileName().isEmpty())
	    return;

	_fileInfo.setFile(file.fileName());
	fileSelected();
}
