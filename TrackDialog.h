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

class TrackDialog : public QDialog, public Ui::TrackDialog
{
	Q_OBJECT

public:
	TrackDialog(QWidget *parent = Q_NULLPTR);
	~TrackDialog() = default;

	const QFileInfo& get_fileInfo() const { return _fileInfo; };
	void setTrackData(Track* track);
	const QString getTrackTotalTime();
	
protected:
	void dragEnterEvent(QDragEnterEvent* event) override;
	void dragMoveEvent(QDragMoveEvent* event) override;
	void dropEvent(QDropEvent* event) override;
	void closeEvent(QCloseEvent* event) { saveConfig(); };

private:
	QFileInfo _fileInfo;
	bool _isEdit = false;
	QString _oldName;
	QMediaPlayer* mediaPlayer = new QMediaPlayer(this);
	void setBackground();
	void setTagsListWidget();
	void fileSelected();
	bool checkTrackName(const QString& trackName);
	void keyPressEvent(QKeyEvent* event);
	void keyReleaseEvent(QKeyEvent* event);
	void saveConfig();
	void loadConfig();
	
private slots:
	void addFileSlot();
	void addTagToTrackSlot();
	void addTagToBackSlot();
	void addNewTagSlot();
	void trackTagsItemClickedSlot();
	void allTagsItemClickedSlot();
	void acceptSlot();
};
