#include "ConfigsForm.h"

ConfigsForm::ConfigsForm(QWidget* parent)
    : QDialog(parent)
{
	setupUi(this);
    loadSettings();
    QPixmap mainBkgnd(":/SoundAround/images/wall.png");
    mainBkgnd.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QPalette palette;
    palette.setBrush(QPalette::Background, mainBkgnd);
    setPalette(palette);
}

void ConfigsForm::loadSettings()
{
    QSettings _settings("Goose", "SoundAround");
    _settings.beginGroup("config");
    bool volumeDialView = _settings.value("volumeDialView", true).toBool();
    bool addNewTrackInPlaylist = _settings.value("addNewTrackInPlaylist", true).toBool();
    bool resizeByCount = _settings.value("resizeByCount", true).toBool();
    bool copyFile = _settings.value("saveToFolder", true).toBool();
    dialView_checkBox->setChecked(volumeDialView);
    sliderView_checkBox->setChecked(!volumeDialView);
    addNewTrackToPlaylist_ChBox->setChecked(addNewTrackInPlaylist);
    resizeByCount_checkBox->setChecked(resizeByCount);
    copyFile_Chbox->setChecked(copyFile);
    _settings.endGroup();
}

void ConfigsForm::acceptSlot()
{
    QSettings _settings("Goose", "SoundAround");
    _settings.beginGroup("config");
    _settings.setValue("volumeDialView", dialView_checkBox->isChecked());
    _settings.setValue("addNewTrackInPlaylist", addNewTrackToPlaylist_ChBox->isChecked());
    _settings.setValue("resizeByCount", resizeByCount_checkBox->isChecked());
    _settings.setValue("saveToFolder", copyFile_Chbox->isChecked());
    _settings.endGroup();
    accept();
}

void ConfigsForm::checkTracksOnExistanceSlot()
{
    checkTracksOnExistanceSignal();
}

void ConfigsForm::changeDialViewSlot(bool value)
{
    sliderView_checkBox->setChecked(!value);
}

void ConfigsForm::changeSliderViewSlot(bool value)
{
    dialView_checkBox->setChecked(!value);
}