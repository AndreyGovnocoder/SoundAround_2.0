#pragma once

#include "ui_AboutForm.h"
#include "SoundAround.h"

class AboutForm : public QDialog, public Ui::AboutForm
{
	Q_OBJECT

public:
	AboutForm(QWidget *parent = Q_NULLPTR);
	~AboutForm() = default;
};
