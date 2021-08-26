#include "AboutForm.h"

AboutForm::AboutForm(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
	versionValue_lbl->setText(Database::VERSION);
	QPixmap mainBkgnd(":/SoundAround/images/wall.png");
	mainBkgnd.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
	QPalette palette;
	palette.setBrush(QPalette::Background, mainBkgnd);
	setPalette(palette);
}
