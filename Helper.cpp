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
        [&trackId](const Track& track) {return track.get_id() == trackId; });
	return (it == _trackList.end()) ? nullptr : &(*it);
}

void Helper::removeTrackFromList(const int trackId)
{
    auto itTrack = std::remove_if(
        _trackList.begin(),
        _trackList.end(),
        [&trackId](const Track& track) {return trackId == track.get_id(); });
    _trackList.erase(itTrack, _trackList.end());
}

QString* Helper::findTag(const QString& tag)
{
    auto it = std::find_if(
        _tagList.begin(), 
        _tagList.end(), 
        [&tag](const QString& foundedTag) {return foundedTag == tag; });
    return (it == _tagList.end()) ? nullptr : &(*it);
}
void Helper::removeTag(const QString& removableTag)
{
    auto itTag = std::remove_if(
        _tagList.begin(),
        _tagList.end(),
        [&removableTag](const QString& tag) {return removableTag == tag; });
    _tagList.erase(itTag, _tagList.end());
}

bool Helper::askForAnyAction(const QString& titleText, const QString& askText)
{
    QMessageBox messageBox(QMessageBox::Question,
        titleText,
        askText,
        QMessageBox::Yes | QMessageBox::No,
        0);
    messageBox.setButtonText(QMessageBox::Yes, "Да");
    messageBox.setButtonText(QMessageBox::No, "Нет");
    if (messageBox.exec() == QMessageBox::No)
        return false;

    return true;
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
    hours = hours % 24;

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
