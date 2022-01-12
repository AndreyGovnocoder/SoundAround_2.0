#pragma once

#include "ui_TrackFrame.h"
#include <qmediaplayer.h>
#include "Helper.h"

class TrackFrame : public QWidget, public Ui::TrackFrame
{
	Q_OBJECT

public:
	TrackFrame(Track* track, QWidget *parent = Q_NULLPTR);
	TrackFrame(QWidget* parent = Q_NULLPTR);
	~TrackFrame() = default;
	const Track* get_track() { return _track; };
	const int get_trackId() { return _trackId; };
	void changeRemoveTrackInCB(const int trackId, bool remove);
	void setVolumeWidgetsViewVisible(bool visible);
	QMediaPlayer* get_player() { return _player; };
	void setTrackToPlayer();
	void loadData(const QSettings& settings);
	void mute(bool mute);
	void stop() { toStartSlot(); };
	const bool isNoProblem() { return _isNoProblem; };
	void closeIt() { onCloseBtnSlot(); };
	void set_track(Track* track);
	void setPlay();
	void setPause();
	
private:
	Track* _track = nullptr;
	int _trackId = -1;
	bool _isPlaying = false;
	bool _isNoProblem = true;
	QMediaPlayer* _player;
	QRegExpValidator* _validator = new QRegExpValidator(QRegExp("\\w*"), this);
	std::vector<Track> _trackListByTag;
	void setBackGrounds();
	void setTracksComboBox();
	void setTracksComboBox(const std::vector<Track>& trackList);
	void setTagsComboBox();
	bool eventFilter(QObject* object, QEvent* event);
	void setPlayPause(bool value);
	void installEventFilter();

private slots:
	void playPauseSlot();
	void continuePlaybackSlot();
	void changeTrackSlot();
	void changeVolumeSlot(int value);
	void changeSliderSlot(int value) { _player->setPosition(value); };
	void setTrackTotalTimeSlot();
	void trackPlayingSlot();
	void toStartSlot();
	void setMuteSlot(bool mute) { _player->setMuted(mute); };
	void setLoopSlot(bool loop);
	void changePauseRangeStartSlot(int value) { pauseRangeEnd->setMinimum(value); };
	void onCloseBtnSlot() { closeFrame(_trackId); };
	void filterByTagSlot();
	void addNewTrackSlot();

signals:
	void closeFrame(int trackId);
	void addNewTrackSignal(TrackFrame*);
};
