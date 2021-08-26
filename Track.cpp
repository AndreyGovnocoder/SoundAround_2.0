#include "Track.h"

Track::Track(int id, const QString& name, const QString& baseName, const QString& path, const QString& totalTime)
	: _id(id)
	, _name(name)
	, _baseName(baseName)
	, _path(path)
	, _totalTime(totalTime)
{
}

Track::Track(const QString& name, const QString& baseName, const QString& path, const QString& totalTime)
	: _id(-1)
	, _name(name)
	, _baseName(baseName)
	, _path(path)
	, _totalTime(totalTime)
{
}

void Track::removeTag(const QString& tag)
{
	_tagList.erase(std::remove_if(
		_tagList.begin(),
		_tagList.end(),
		[&tag](const QString& tagInList) {return tag == tagInList; }),
		_tagList.end());
}
