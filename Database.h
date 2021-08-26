#pragma once
#include <QtSql>
#include <QSqlDatabase>
#include <QFile>
#include <QDate>
#include <QtWidgets/qmessagebox.h>
#include <vector>
#include <qstring.h>
#include "Track.h"
#include "Helper.h"

class Database
{
public:
    Database() = default;
    ~Database() = default;

    static const QString DB_NAME;
    static const QString TABLE_TRACKS; 
    static const QString TABLE_TAGS;
    static const QString VERSION;

    static QSqlDatabase getDatabase();
    static bool checkConnect();
    static bool initDatabase();
    static int getLastId(const QString& table);
    static std::vector<Track> getTrackList();
    static std::vector<int> getTracksByTag(const QString& tag);
    static bool addTrack(const Track& newTrack);
    static bool editTrack(const Track* track);
    static bool removeObject(const int id, const QString& table);
    static std::vector<QString> getTagList();
    static std::vector<QString> getTagsByTrack(const int trackId);
    static bool addTag(const QString& newTag, const int trackId);
    static bool removeTagsByTrack(const int trackId);
};

