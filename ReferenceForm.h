#pragma once
#include "ui_ReferenceForm.h"

class ReferenceForm : public QDialog, public Ui::ReferenceForm
{
	Q_OBJECT

public:
	ReferenceForm(QWidget *parent = Q_NULLPTR);
	~ReferenceForm() = default;

private:
	void setVisibleLabels(bool value);

private slots:
	void itemActivated(QModelIndex item);
};
