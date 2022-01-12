#include "TrackFrame.h"

TrackFrame::TrackFrame(Track* track, QWidget* parent)
    : QWidget(parent)
    , _track(track)
    , _trackId(track->get_id())
{
	setupUi(this);
    setBackGrounds();
    _player = new QMediaPlayer(this);
    setTracksComboBox();
    setTagsComboBox();
    set_track(track);
    installEventFilter();
    _trackListByTag.reserve(Helper::get_trackList().size());
    connect(_player, &QMediaPlayer::positionChanged, this, &TrackFrame::trackPlayingSlot);
    connect(_player, &QMediaPlayer::durationChanged, this, &TrackFrame::setTrackTotalTimeSlot);
}

TrackFrame::TrackFrame(QWidget* parent)
    : QWidget(parent)
{
    setupUi(this);
    setBackGrounds();
    _player = new QMediaPlayer(this);
    _track = nullptr;
    _trackId = -1;
    tracks_CBox->setCurrentIndex(-1);
    setTracksComboBox();
    setTagsComboBox();
    installEventFilter();
    _trackListByTag.reserve(Helper::get_trackList().size());
    connect(_player, &QMediaPlayer::positionChanged, this, &TrackFrame::trackPlayingSlot);
    connect(_player, &QMediaPlayer::durationChanged, this, &TrackFrame::setTrackTotalTimeSlot);
}

void TrackFrame::set_track(Track* track)
{
    totalTimeLbl->setText(track->get_totalTime());
    for (int i = 0; i < tracks_CBox->count(); ++i)
    {
        const int currTrackId = tracks_CBox->itemData(i).toInt();
        if (currTrackId != track->get_id())
            continue;

        tracks_CBox->setCurrentIndex(i);
        break;
    }
}

void TrackFrame::setPlay()
{
    if (!_isPlaying)
    {
        _player->play();
        setPlayPause(true);
    }
}

void TrackFrame::setPause()
{
    if (_isPlaying)
    {
    _player->pause();
    setPlayPause(false);
    }
}

void TrackFrame::setPlayPause(bool value)
{
    _isPlaying = value;
    if (_isPlaying)
        playPause_btn->setIcon(QIcon(":/SoundAround/images/pause-48.png"));
    else
        playPause_btn->setIcon(QIcon(":/SoundAround/images/play-6-48.png"));
}

void TrackFrame::installEventFilter()
{
    tracks_CBox->installEventFilter(this);
    tags_CBox->installEventFilter(this);
    dialVolume->installEventFilter(this);
    sliderVolume->installEventFilter(this);
    pauseRangeStart->installEventFilter(this);
    pauseRangeEnd->installEventFilter(this);
}

void TrackFrame::setTrackToPlayer()
{
    QFile fileTrack(_track->get_path());
    if (!fileTrack.exists())
    {
        QString message;
        message.append(
            "Аудиофайл ").append(
                _track->get_name()).append(
                    " повреждён или удалён\nВыполните проверку треков в настройках программы.");
        QMessageBox::critical(this, "Ошибка", message);
        _isNoProblem = false;
        onCloseBtnSlot();
        return;
    }
    positionSlider_frame->setEnabled(true);
    playPause_btn->setEnabled(true);
    stop_btn->setEnabled(true);
    _player->setAudioRole(QAudio::CustomRole);
    _player->setMedia(QUrl::fromLocalFile(_track->get_path()));
    _player->setVolume(dialVolume->value());
}

void TrackFrame::loadData(const QSettings& settings)
{
    int volumeValue = settings.value("volume", 50).toInt();
    int positionValue = settings.value("position", 0).toInt();
    tags_CBox->setCurrentIndex(settings.value("tagIndex", 0).toInt());
    _player->setVolume(volumeValue);
    dialVolume->setValue(volumeValue);
    volumeValueLbl->setText(QString::number(volumeValue));
    muteBtn->setChecked(settings.value("isMute", false).toBool());
    _player->setPosition(positionValue);
    currTimeLbl->setText(Helper::getFormatTime(positionValue / 1000));
    bool isLoopChecked = settings.value("isLoop", false).toBool();
    loopBtn->setChecked(isLoopChecked);
    pauseRangeStart->setEnabled(isLoopChecked);
    pauseRangeEnd->setEnabled(isLoopChecked);
    pauseRangeStart->setValue(settings.value("pauseRangeStartValue", 0).toInt());
    pauseRangeEnd->setValue(settings.value("pauseRangeEndValue", 0).toInt());
    timeLine->setEnabled(settings.value("timeLineEnabled", false).toBool());
}

void TrackFrame::mute(bool mute)
{
    muteBtn->setChecked(mute);
    setMuteSlot(mute);
}

void TrackFrame::changeRemoveTrackInCB(const int trackId, bool remove)
{
    for (int i = 0; i < tracks_CBox->count(); ++i)
    {
        const int currTrackId = tracks_CBox->itemData(i).toInt();
        if (currTrackId != trackId)
            continue;
        if (Track* track = Helper::findTrack(trackId))
        {
            if (!remove)
                tracks_CBox->setItemText(i, track->get_baseName());
            return;
        }
        if (remove)
            tracks_CBox->removeItem(i);
    }
}

void TrackFrame::setVolumeWidgetsViewVisible(bool visible)
{
    dialVolume->setVisible(visible);
    sliderVolume->setVisible(!visible);
}

void TrackFrame::setBackGrounds()
{
    QPixmap bkgnd(":/SoundAround/images/scroll.png");

    bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    setPalette(palette);

    topFrame->setAttribute(Qt::WA_TranslucentBackground);
    currTimeLbl->setAttribute(Qt::WA_TranslucentBackground);
    totalTimeLbl->setAttribute(Qt::WA_TranslucentBackground);
    closeBtn_frame->setAttribute(Qt::WA_TranslucentBackground);
    dialVolume->setAttribute(Qt::WA_TranslucentBackground);
    volumeValueLbl->setAttribute(Qt::WA_TranslucentBackground);
    muteBtn->setAttribute(Qt::WA_TranslucentBackground);
    playerControl_frame->setAttribute(Qt::WA_TranslucentBackground);
    tags_frame->setAttribute(Qt::WA_TranslucentBackground);
    positionSlider_frame->setAttribute(Qt::WA_TranslucentBackground);
    horizontal_frame->setAttribute(Qt::WA_TranslucentBackground);

    muteBtn->setAttribute(Qt::WA_TranslucentBackground);
    pauseRangeStart->setAttribute(Qt::WA_TranslucentBackground);
    pauseRangeEnd->setAttribute(Qt::WA_TranslucentBackground);
    playPause_btn->setAttribute(Qt::WA_TranslucentBackground);
    stop_btn->setAttribute(Qt::WA_TranslucentBackground);
    loopBtn->setAttribute(Qt::WA_TranslucentBackground);
    tags_CBox->setAttribute(Qt::WA_TranslucentBackground);
    tracks_CBox->setAttribute(Qt::WA_TranslucentBackground);
    timeLine->setAttribute(Qt::WA_TranslucentBackground);
    sliderVolume->setAttribute(Qt::WA_TranslucentBackground);
}

void TrackFrame::setTracksComboBox()
{
    tracks_CBox->clear();
    tracks_CBox->addItem("");
    for (auto& track : Helper::get_trackList())
    {
        tracks_CBox->addItem(track.get_baseName(), track.get_id());
    }
    tracks_CBox->setCurrentIndex(-1);
    tracks_CBox->removeItem(0);
}

void TrackFrame::setTracksComboBox(const std::vector<Track>& trackList)
{
    tracks_CBox->clear();
    for (auto& track : trackList)
        tracks_CBox->addItem(track.get_baseName(), track.get_id());
}

void TrackFrame::setTagsComboBox()
{
    tags_CBox->addItem("Все теги");
    for (auto& tag : Helper::get_tagList())
        tags_CBox->addItem(tag);
    tags_CBox->setValidator(_validator);
}

bool TrackFrame::eventFilter(QObject* object, QEvent* event)
{
    if (object == tracks_CBox ||
        object == dialVolume ||
        object == pauseRangeStart ||
        object == pauseRangeEnd ||
        object == tags_CBox ||
        object == sliderVolume ||
        object == timeLine)
    {
        if (event->type() == QEvent::Wheel)
        {
            event->ignore();
            return true;
        }
    }

    return false;
}

void TrackFrame::playPauseSlot()
{
    _isPlaying ? _player->pause() : _player->play();
    setPlayPause(!_isPlaying);
}

void TrackFrame::continuePlaybackSlot()
{
    timeLine->setValue(0);
    if (_isPlaying)
        _player->play();
}

void TrackFrame::changeTrackSlot()
{
    if (tracks_CBox->currentIndex() == -1)
    {
        positionSlider_frame->setEnabled(false);
        playPause_btn->setEnabled(false);
        stop_btn->setEnabled(false);
        currTimeLbl->setText("0:00:00");
        return;
    }

    if (_track = Helper::findTrack(tracks_CBox->currentData().toInt()))
    {
        _trackId = _track->get_id();
        _player->stop();
        if (_isPlaying)
            setPlayPause(false);

        timeLine->setValue(0);
        totalTimeLbl->setText(_track->get_totalTime());
        setTrackToPlayer();
        return;
    }

    currTimeLbl->setText("0:00:00");    
}

void TrackFrame::changeVolumeSlot(int value)
{
    _player->setVolume(value);
    volumeValueLbl->setText(QString::number(value));
    if (dialVolume->isVisible())
        sliderVolume->setValue(value);
    else
        dialVolume->setValue(value);
}

void TrackFrame::setTrackTotalTimeSlot()
{
    timeLine->setMaximum(_player->duration());
    timeLine->setValue(_player->position());
    timeLine->setSliderPosition(_player->position());
    timeLine->setEnabled(true);
}

void TrackFrame::trackPlayingSlot()
{
    currTimeLbl->setText(Helper::getFormatTime(_player->position() / 1000));
    timeLine->setValue(_player->position());
    if (_player->position() != timeLine->maximum())
        return;

    _player->stop();
    if (loopBtn->isChecked())
    {
        int value = QRandomGenerator::global()->bounded(pauseRangeStart->value(), pauseRangeEnd->value());
        QTimer::singleShot(value * 1000, this, &TrackFrame::continuePlaybackSlot);
    }
    else if (_isPlaying)
        setPlayPause(false);
}

void TrackFrame::toStartSlot()
{
    timeLine->setValue(0);
    _player->setPosition(0);

    if (!_isPlaying)
        return;
    setPlayPause(false);
    _player->stop();
}

void TrackFrame::setLoopSlot(bool loop)
{
    if (loop)
        delay_GBox->setStyleSheet(QStringLiteral("QGroupBox{color: black;}"));
    else
        delay_GBox->setStyleSheet(QStringLiteral("QGroupBox{color: gray;}"));
    pauseRangeStart->setEnabled(loop);
    pauseRangeEnd->setEnabled(loop);
}

void TrackFrame::filterByTagSlot()
{
    if (tags_CBox->currentIndex() <= 0)
    {
        _trackId = -1;
        _track = nullptr;
        setTracksComboBox();
        return;
    }
    _trackListByTag.clear();
    QString tag = tags_CBox->itemText(tags_CBox->currentIndex());
    for (const Track& track : Helper::get_trackList())
    {
        if (track.get_tagList().empty())
            continue;
        auto it = std::find(track.get_tagList().begin(), track.get_tagList().end(), tag);
        if (it == track.get_tagList().end())
            continue;
        _trackListByTag.push_back(std::move(track));
    }
    
    if (_trackListByTag.empty())
        return;
    setTracksComboBox(_trackListByTag);
    if (tags_CBox->hasFocus())
        tracks_CBox->showPopup();
}

void TrackFrame::addNewTrackSlot()
{
    addNewTrackSignal(this);
}
