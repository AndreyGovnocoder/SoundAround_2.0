#pragma once

#include <QDialog>
#include "ui_TrackDialog.h"
#include <QDragEnterEvent>
#include <QDragMoveEvent>
#include <QMimeData>
#include <QDropEvent>
#include <QFileDialog>
#include <QListWidgetItem>
#include <QStandardItem>
#include <qsound.h>
#include <qmediaplayer.h>
#include <QtWidgets\qmessagebox.h>
#include <QInputDialog>
#include "Track.h"
#include "Helper.h"
#include "AskToCopyDialog.h"
#include "TagDialog.h"
#include <QShortcut>
#include <QTimer>

class TrackDialog : public QDialog, public Ui::TrackDialog
{
	Q_OBJECT

public:
	TrackDialog(QWidget *parent = Q_NULLPTR);
	~TrackDialog() = default;

	const QFileInfoList& get_fileInfoList() const { return _fileList; };
	void setTrackData(Track* track);
	void setForOneFile();
	const QStringList& getDurationsList() const { return _durationsList; };
	const std::vector<QStringList>& getTagLists() const { return _tagLists; };
	
	
protected:
	void dragEnterEvent(QDragEnterEvent* event) override;
	void dragMoveEvent(QDragMoveEvent* event) override;
	void dropEvent(QDropEvent* event) override;
	void closeEvent(QCloseEvent* event) { saveConfig(); };

private:
	std::vector<Track> _addedTracksList;
	QFileInfoList _fileList;
	QStringList _allTagsList;
	QStringList _durationsList;
	int _currIndex = 0;
	std::vector<QStringList> _tagLists;
	bool _isEdit = false;
	bool _durationChanged = false;
	bool _oneFile = false;
	bool _isShift = false;
	QString _oldName;
	QMediaPlayer* _mediaPlayer = new QMediaPlayer(this);
	QRegExpValidator* _validator = new QRegExpValidator(QRegExp("\\w*"), this);
	QShortcut* _keyDel;
	QShortcut* _keyEnter;
	QTimer* _timer = new QTimer(this);
	void setBackground();
	void setTagsListWidget();
	void setTracksTagsListWidget(const int row);
	void removeTagFromAllTagsListWidget(const QString& removableTag);
	bool checkTrackName(const QString& trackName, const int index);
	bool checkTrackNameInAddedAcceptedTracks(const QString& trackName);
	void keyPressEvent(QKeyEvent* event);
	void keyReleaseEvent(QKeyEvent* event);
	void saveConfig();
	void loadConfig();
	void isAccept();
	void setTrackListWidget();
	bool checkFileInfo(const QFileInfo& fileInfo);
	void cancelAcceptingItem(QListWidgetItem* item);
	void selectFirstNotAcceptedItem();
	bool checkFoundTag(const QString& foundedTag);
	
private slots:
	void addFilesSlot();
	void addFileSlot();
	void addFolderSlot();
	void addTagToTrackSlot();
	void addTagToBackSlot();
	void addNewTagSlot();
	void acceptSlot();
	void clearSearchLineEditSlot() { search_lineEdit->clear(); };
	void searchTagSlot(QString input);
	void pressItemSlot(QListWidgetItem* item);
	void selectItemSlot(QListWidgetItem* item);
	void acceptTrackSlot();
	void cancelTrackSlot();
	void removeSelectedTracksSlot();
	void keyEnterPressedSlot();
	void durationChangedSlot();
	void setDurations();
	void testSlot();
};
