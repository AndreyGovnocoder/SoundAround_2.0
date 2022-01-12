#include "ReferenceForm.h"

ReferenceForm::ReferenceForm(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
	setAcceptDrops(false);
	QPixmap mainBkgnd(":/SoundAround/images/wall.png");
	mainBkgnd.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
	QPalette palette;
	palette.setBrush(QPalette::Background, mainBkgnd);
	setPalette(palette);
	listWidget->setCurrentRow(-1);
	setVisibleLabels(false);
}

void ReferenceForm::setVisibleLabels(bool value)
{
	addTrack_lbl->setVisible(value);
	editTrack_lbl->setVisible(value);
	removeTrack_lbl->setVisible(value);
	addTrackToPlaylist_lbl->setVisible(value);
	cleanPlaylist_lbl->setVisible(value);
	loopPlayTracks_lbl->setVisible(value);
	tagsFilter_lbl->setVisible(value);
	configs_lbl->setVisible(value);
}

void ReferenceForm::itemActivated(QModelIndex item)
{
	setVisibleLabels(false);
	int row = item.row();
	switch (row)
	{
	case 0:
		addTrack_lbl->setVisible(true);
		break;
	case 1:
		editTrack_lbl->setVisible(true);
		break;
	case 2:
		removeTrack_lbl->setVisible(true);
		break;
	case 3:
		addTrackToPlaylist_lbl->setVisible(true);
		break;
	case 4:
		cleanPlaylist_lbl->setVisible(true);
		break;
	case 5:
		loopPlayTracks_lbl->setVisible(true);
		break;
	case 6:
		tagsFilter_lbl->setVisible(true);
		break;
	case 7:
		configs_lbl->setVisible(true);
		break;
	}
}
