#pragma once

#include <QDialog>
#include "ui_ConfigsForm.h"
#include <QDebug>
#include <QtCore/qsettings.h>

class ConfigsForm : public QDialog, public Ui::ConfigsForm
{
	Q_OBJECT

public:
	ConfigsForm(QWidget *parent = Q_NULLPTR);
	~ConfigsForm() = default;

private:
	void loadSettings();

private slots:
	void changeDialViewSlot(bool value);
	void changeSliderViewSlot(bool value);
	void acceptSlot();
	void checkTracksOnExistanceSlot();

signals:
	void checkTracksOnExistanceSignal();
};
