#pragma once
#include <qstring.h>
#include <vector>

class Track
{
public:
	Track(int id, const QString& name, const QString& baseName, const QString& path, const QString& totalTime);
	Track(const QString& name, const QString& baseName, const QString& path, const QString& totalTime);
	Track() = default;
	~Track() = default;

	void set_id(int id) { _id = id; };
	void set_name(const QString& name) { _name = name; };
	void set_baseName(const QString& baseName) { _baseName = baseName; };
	void set_path(const QString& path) { _path = path; };
	void set_tagList(const std::vector<QString>& tagList) { _tagList = tagList; };
	void addTag(const QString& tag) { _tagList.push_back(std::move(tag)); };
	void removeTag(const QString& tag);
	void clearTagList() { _tagList.clear(); };
	void set_totalTime(const QString& totalTime) { _totalTime = totalTime; };

	int get_id() const { return _id; };
	const QString& get_name() const { return _name; };
	const QString& get_baseName() const { return _baseName; };
	const QString& get_path() const { return _path; };
	const std::vector<QString>& get_tagList() const { return _tagList; };
	const QString& get_totalTime() const { return _totalTime; };

private:
	int _id;
	QString _name;
	QString _baseName;
	QString _path;
	std::vector<QString> _tagList;
	QString _totalTime;
};

