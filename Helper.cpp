#include "Helper.h"

std::vector<Track> Helper::_trackList;
std::vector<QString> Helper::_tagList;
const QString Helper::ORGANIZATION_NAME("Goose");
const QString Helper::APPLICATION_NAME("SoundAround");

Helper::Helper()
{
    _trackList = Database::getTrackList();
    _tagList = Database::getTagList();
    sortTrackList();
    sortTagList();    
}

Track* Helper::findTrack(const int trackId)
{
	auto it = std::find_if(
        _trackList.begin(), 
        _trackList.end(), 
        [trackId](const Track& track) {return track.get_id() == trackId; });
	return (it == _trackList.end()) ? nullptr : &(*it);
}

void Helper::removeTrackFromList(const int trackId)
{
    auto itTrack = std::remove_if(
        _trackList.begin(),
        _trackList.end(),
        [&trackId](const Track& track) {return trackId == track.get_id(); });
    if (itTrack != _trackList.end())
        _trackList.erase(itTrack);
}

bool Helper::findTag(const QString& tag)
{
    auto itTag = std::find(_tagList.begin(), _tagList.end(), tag);
    return (itTag == _tagList.end()) ? false : true;
}

void Helper::removeTag(const QString& removableTag)
{
    _tagList.erase(std::remove(_tagList.begin(), _tagList.end(), removableTag));
}

void Helper::removeTag(const QString& removableTag, std::vector<QString>& tagList)
{
    tagList.erase(std::remove(tagList.begin(), tagList.end(), removableTag));
}

bool Helper::askForAnyAction(const QString& titleText, const QString& askText)
{
    QMessageBox messageBox(QMessageBox::Question,
        titleText,
        askText,
        QMessageBox::Yes | QMessageBox::No,
        0);
    messageBox.setButtonText(QMessageBox::Yes, QObject::tr("Да"));
    messageBox.setButtonText(QMessageBox::No, QObject::tr("Нет"));
    return messageBox.exec() == QMessageBox::No;
}

void Helper::refreshTagList()
{
    _tagList = Database::getTagList();
    sortTagList();
}

const QString Helper::getFormatTime(int totalSec)
{
    int hours = totalSec / 3600;
    int min = (totalSec / 60) - (hours * 60);
    int sec = totalSec - (hours * 3600) - (min * 60);

    return QString::number(hours) + ":" + 
        QString::number(min / 10) + QString::number(min % 10) + ":" + 
        QString::number(sec / 10) + QString::number(sec % 10);
}

bool Helper::checkTagExistInTracks(const QString& checkingTag)
{
    for (const Track& track : _trackList)
    {
        for (const QString& tag : track.get_tagList())
        {
            if (tag == checkingTag)
                return true;
        }
    }
    return false;
}

bool Helper::checkTrackNameInTracks(const QString& checkingName)
{
    auto it = std::find_if(
        _trackList.begin(), 
        _trackList.end(), 
        [&checkingName](const Track& track) {return track.get_baseName() == checkingName; });
    return (it == _trackList.end()) ? false : true;
}

void Helper::sortTagList()
{
    std::sort(
        _tagList.begin(),
        _tagList.end(),
        [](const QString& lhs, const QString& rhs) { return lhs.toLower() < rhs.toLower(); });
}

void Helper::sortTrackList()
{
    std::sort(
        _trackList.begin(),
        _trackList.end(),
        [](const Track& lhs, const Track& rhs)
        { return lhs.get_baseName().toLower() < rhs.get_baseName().toLower(); });
}
