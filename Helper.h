#pragma once
#include "Track.h"
#include "Database.h"

class Helper
{
public:
    Helper();
    ~Helper() = default;
    static const QString ORGANIZATION_NAME;
    static const QString APPLICATION_NAME;
    static std::vector<Track>& get_trackList() { return _trackList; };
    static std::vector<QString>& get_tagList() { return _tagList; };
    static Track* findTrack(const int trackId);
    static void removeTrackFromList(const int trackId);
    static bool findTag(const QString& tag);
    static void addTagToList(const QString& tag) { _tagList.push_back(std::move(tag)); };
    static void removeTag(const QString& removableTag);
    static void removeTag(const QString& removableTag, std::vector<QString>& tagList);
    static bool askForAnyAction(const QString& titleText, const QString& askText);
    static void refreshTagList();
    static const QString getFormatTime(int totalSec);
    static bool checkTagExistInTracks(const QString& checkingTag);
    static bool checkTrackNameInTracks(const QString& checkingName);
    static void sortTagList();
    static void sortTrackList();

private:
	static std::vector<Track> _trackList;
	static std::vector<QString> _tagList;
};
