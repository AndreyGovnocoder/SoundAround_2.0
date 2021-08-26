#include "Database.h"

const QString Database::DB_NAME(QDir::currentPath() + "/db/db.db");
const QString Database::TABLE_TRACKS("tracks");
const QString Database::TABLE_TAGS("tags");
const QString Database::VERSION("2.0");

QSqlDatabase Database::getDatabase()
{
    return QSqlDatabase::database(DB_NAME);
}

bool Database::checkConnect()
{
    QSqlQuery query(getDatabase());
    query.exec("SELECT _id FROM " + TABLE_TRACKS);

    return query.exec();
}

bool Database::initDatabase()
{
    auto db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(QDir::currentPath() + "/db/db.db");
    const bool ok = db.open();
    if (!ok)
    {
        QString error = db.lastError().text();
        QMessageBox::critical(0, "Ошибка", "Ошибка подключения к базе данных: " + error);
    }
    return ok;
}

int Database::getLastId(const QString& table)
{
    int lastId = -1;

    QSqlQuery query(getDatabase());
    query.exec("SELECT _id FROM " + table + " ORDER BY _id DESC LIMIT 1");

    if (query.first())
        lastId = query.value(0).toInt();

    return query.exec() ? lastId : -1;
}

std::vector<Track> Database::getTrackList()
{
    int rowCount = 0;
    QSqlQuery query(getDatabase());

    query.exec("SELECT * FROM " + TABLE_TRACKS);
    query.last();
    rowCount = query.at();
    std::vector<Track> trackList;
    if (rowCount > 0)
        trackList.reserve(++rowCount);

    query.first();
    query.previous();

    while (query.next())
    {
        Track track(
            query.value(0).toInt(),
            query.value(1).toString(),
            query.value(2).toString(),
            QDir::currentPath() + "/sounds/" + query.value(1).toString(),
            query.value(4).toString());
        track.set_tagList(Database::getTagsByTrack(track.get_id()));
        trackList.push_back(std::move(track));
    }

    return trackList;
}

std::vector<int> Database::getTracksByTag(const QString& tag)
{
    int rowCount = 0;
    QSqlQuery query(getDatabase());

    query.exec("SELECT idTrack FROM " + TABLE_TAGS + " WHERE tag=" + tag);
    query.last();
    rowCount = query.at();
    std::vector<int> trackList;
    if (rowCount > 0)
        trackList.reserve(++rowCount);

    query.first();
    query.previous();

    while (query.next())
        trackList.push_back(std::move(query.value(0).toInt()));

    return trackList;
}

bool Database::addTrack(const Track& newTrack)
{
    QSqlQuery query(getDatabase());
    query.prepare("INSERT INTO " + TABLE_TRACKS + " (name, baseName, totalTime)"
        "VALUES (:name, :baseName, :totalTime);");
    query.bindValue(":name", newTrack.get_name());
    query.bindValue(":baseName", newTrack.get_baseName());
    query.bindValue(":totalTime", newTrack.get_totalTime());

    return query.exec();
}

bool Database::editTrack(const Track* track)
{
    QSqlQuery query(getDatabase());
    query.prepare("UPDATE " + TABLE_TRACKS +
        " SET name = ?, baseName = ?" +
        " WHERE _id=" + QString::number(track->get_id()));
    query.addBindValue(track->get_name());
    query.addBindValue(track->get_baseName());

    return query.exec();
}

bool Database::removeObject(int id, const QString& table)
{
    QSqlQuery query(getDatabase());
    return query.exec("DELETE FROM " + table + " WHERE _id=" + QString::number(id));
}

std::vector<QString> Database::getTagList()
{
    int rowCount = 0;
    std::vector<QString> tagList;
    QSqlQuery query(getDatabase());

    query.exec("SELECT DISTINCT tag FROM " + TABLE_TAGS);
    query.last();
    rowCount = query.at();
    
    if (rowCount > 0)
        tagList.reserve(++rowCount);

    query.first();
    query.previous();

    while (query.next())
        tagList.push_back(std::move(query.value(0).toString()));

    return tagList;
}

std::vector<QString> Database::getTagsByTrack(const int trackId)
{
    int rowCount = 0;
    QSqlQuery query(getDatabase());

    query.exec("SELECT tag FROM " + TABLE_TAGS + " WHERE idTrack=" + QString::number(trackId));
    query.last();
    rowCount = query.at();
    std::vector<QString> tagListByTrack;
    if (rowCount > 0)
        tagListByTrack.reserve(++rowCount);

    query.first();
    query.previous();

    while (query.next())
        tagListByTrack.push_back(std::move(query.value(0).toString()));

    return tagListByTrack;
}

bool Database::addTag(const QString& newTag, const int trackId)
{
    QSqlQuery query(getDatabase());
    query.prepare("INSERT INTO " + TABLE_TAGS + " (idTrack, tag)"
        "VALUES (:idTrack, :tag);");
    query.bindValue(":idTrack", trackId);
    query.bindValue(":tag", newTag);

    return query.exec();
}

bool Database::removeTagsByTrack(const int trackId)
{
    QSqlQuery query(getDatabase());
    return query.exec("DELETE FROM " + TABLE_TAGS + " WHERE idTrack=" + QString::number(trackId));
}
