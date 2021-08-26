#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SoundAround.h"
#include <QtCore/qsettings.h>
#include <QInputDialog>
#include "Track.h"
#include "TrackDialog.h"
#include <QDebug>
#include "TrackFrame.h"
#include "Helper.h"
#include "ConfigsForm.h"
#include "AboutForm.h"
#include "ReferenceForm.h"
#include <QShortcut>

class SoundAround : public QMainWindow
{
    Q_OBJECT

public:
    SoundAround(QWidget *parent = Q_NULLPTR);
    static TrackFrame* findTrackFrame(const int trackId);
    static void removeTrackFrame(TrackFrame* trackFrame);

private:
    Ui::SoundAroundClass ui;
    QSize _mainWinSize;
    QSize _trackListSize;
    QSettings _settings;
    QShortcut* _keyDel;
    std::vector<Track*> _trList;
    static std::vector<TrackFrame*> _trackFramesList;
    QMediaPlayer* mediaPlayer = new QMediaPlayer(this);
    QMenu* _contextMenu = new QMenu(this);
    QAction* _addTrackAction = new QAction(QIcon(":/SoundAround/images/add-new-track-24x24.png"), "Добавить", this);
    QAction* _editTrackAction = new QAction(QIcon(":/SoundAround/images/edit-24.png"), "Редактировать", this);
    QAction* _removeTrackAction = new QAction(QIcon(":/SoundAround/images/delete-24.png"), "Удалить", this);
    QAction* _openConfigForm = new QAction(QIcon(":/SoundAround/images/cog-24.png"), "Настройки", this);
    QMenu* _referenceMenu = new QMenu("?", this);
    QAction* _referenceAction = new QAction(QIcon(":/SoundAround/images/info-2-24.png"), "Справка", this);
    QAction* _openAboutAction = new QAction(QIcon(":/SoundAround/images/logo-512-2.png"), "О программе", this);
    QAction* _addTrackToPlaylist = new QAction(QIcon(":/SoundAround/images/add-to-list-24x24.png"), "В список", this);
    
    void setBackgrounds();
    void loadConfig();
    void saveConfig();
    void loadData();
    void saveData();
    void setupMenuBar();
    void setTracksTable();
    void setTracksTable(const std::vector<Track>& trackList);
    void setTagsComboBox();
    void setContextMenu();
    void resetTracksTable();
    void resizeByTrackListCount(const int trackListCount);
    void addItemToTracksTable(const Track& track, const int row);
    void addItemToTracksTable(Track* track, const int row);
    void resizeEvent(QResizeEvent* event);
    void closeEvent(QCloseEvent* event);
    void changeRemoveTrackInCB(const int trackId, bool remove);
    bool checkTrackInPlaylist(const int trackId);
    static void removeTrackFromPlaylist(const int trackId);
    void addNewTrackToCBoxesPLists(const Track& newTrack);
    bool checkOnTagIsExist(const QString& newTag);
    void addNewTagToCBoxes(const QString& newTag);
    void removeTagFromCBoxes(const QString& removableTag);
    void changedConfigs();
    void setShowHideTableBtnIcon();
    void setShowHideTableBtnIcon(bool show);
    void addTrackToPlaylist(const int trackId);

private slots:
    bool addTrackSlot();
    void editTrackSlot();
    void removeTrackSlot();
    void addTrackToPlaylistSlot();
    void testSlot();
    void showConfigsFormSlot();
    void showAboutFormSlot();
    void showReferenceSlot();
    void tracksTableContextMenuRequestedSlot(QPoint pos);
    void showHideTracksTableSlot();
    void closeTrackFrameSlot(int trackId);
    void filterByTagSlot();
    void addEmptyTrackFrameSlot();
    void cleanTrackFramesListSlot();
    void muteAllSlot(bool mute);
    void stopAllSlot();
};
