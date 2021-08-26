/********************************************************************************
** Form generated from reading UI file 'ConfigsForm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGSFORM_H
#define UI_CONFIGSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigsForm
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *addNewTrackToPlaylist_ChBox;
    QCheckBox *resizeByCount_checkBox;
    QGroupBox *volumeView_GBox;
    QGridLayout *gridLayout;
    QCheckBox *dialView_checkBox;
    QCheckBox *sliderView_checkBox;
    QDial *dialVolume;
    QSlider *sliderVolume;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *accept_btn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ConfigsForm)
    {
        if (ConfigsForm->objectName().isEmpty())
            ConfigsForm->setObjectName(QString::fromUtf8("ConfigsForm"));
        ConfigsForm->resize(408, 252);
        ConfigsForm->setMinimumSize(QSize(373, 252));
        ConfigsForm->setMaximumSize(QSize(16777215, 252));
        verticalLayout = new QVBoxLayout(ConfigsForm);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addNewTrackToPlaylist_ChBox = new QCheckBox(ConfigsForm);
        addNewTrackToPlaylist_ChBox->setObjectName(QString::fromUtf8("addNewTrackToPlaylist_ChBox"));
        QFont font;
        font.setPointSize(10);
        addNewTrackToPlaylist_ChBox->setFont(font);
        addNewTrackToPlaylist_ChBox->setChecked(true);

        verticalLayout->addWidget(addNewTrackToPlaylist_ChBox);

        resizeByCount_checkBox = new QCheckBox(ConfigsForm);
        resizeByCount_checkBox->setObjectName(QString::fromUtf8("resizeByCount_checkBox"));
        resizeByCount_checkBox->setFont(font);

        verticalLayout->addWidget(resizeByCount_checkBox);

        volumeView_GBox = new QGroupBox(ConfigsForm);
        volumeView_GBox->setObjectName(QString::fromUtf8("volumeView_GBox"));
        volumeView_GBox->setFont(font);
        volumeView_GBox->setAlignment(Qt::AlignCenter);
        gridLayout = new QGridLayout(volumeView_GBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dialView_checkBox = new QCheckBox(volumeView_GBox);
        dialView_checkBox->setObjectName(QString::fromUtf8("dialView_checkBox"));
        dialView_checkBox->setFont(font);
        dialView_checkBox->setTristate(false);

        gridLayout->addWidget(dialView_checkBox, 0, 0, 1, 1);

        sliderView_checkBox = new QCheckBox(volumeView_GBox);
        sliderView_checkBox->setObjectName(QString::fromUtf8("sliderView_checkBox"));
        sliderView_checkBox->setFont(font);

        gridLayout->addWidget(sliderView_checkBox, 0, 1, 1, 1);

        dialVolume = new QDial(volumeView_GBox);
        dialVolume->setObjectName(QString::fromUtf8("dialVolume"));
        dialVolume->setMinimumSize(QSize(60, 60));
        dialVolume->setMaximumSize(QSize(60, 60));
        dialVolume->setAutoFillBackground(false);
        dialVolume->setMaximum(100);
        dialVolume->setValue(50);
        dialVolume->setOrientation(Qt::Horizontal);
        dialVolume->setNotchTarget(10.000000000000000);
        dialVolume->setNotchesVisible(true);

        gridLayout->addWidget(dialVolume, 1, 0, 1, 1);

        sliderVolume = new QSlider(volumeView_GBox);
        sliderVolume->setObjectName(QString::fromUtf8("sliderVolume"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sliderVolume->sizePolicy().hasHeightForWidth());
        sliderVolume->setSizePolicy(sizePolicy);
        sliderVolume->setMinimumSize(QSize(60, 60));
        sliderVolume->setMaximumSize(QSize(60, 60));
        sliderVolume->setMaximum(100);
        sliderVolume->setValue(50);
        sliderVolume->setOrientation(Qt::Vertical);
        sliderVolume->setTickPosition(QSlider::TicksAbove);
        sliderVolume->setTickInterval(10);

        gridLayout->addWidget(sliderVolume, 1, 1, 1, 1);


        verticalLayout->addWidget(volumeView_GBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        accept_btn = new QPushButton(ConfigsForm);
        accept_btn->setObjectName(QString::fromUtf8("accept_btn"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(accept_btn->sizePolicy().hasHeightForWidth());
        accept_btn->setSizePolicy(sizePolicy1);
        accept_btn->setMinimumSize(QSize(80, 25));
        QPalette palette;
        QLinearGradient gradient(0, 0, 0, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(144, 238, 144, 255));
        gradient.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(243, 243, 243, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        QLinearGradient gradient1(0, 0, 0, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(144, 238, 144, 255));
        gradient1.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush2(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QLinearGradient gradient2(0, 0, 0, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(144, 238, 144, 255));
        gradient2.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush3(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        QLinearGradient gradient3(0, 0, 0, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(144, 238, 144, 255));
        gradient3.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush4(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        QLinearGradient gradient4(0, 0, 0, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(144, 238, 144, 255));
        gradient4.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush5(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        QLinearGradient gradient5(0, 0, 0, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(144, 238, 144, 255));
        gradient5.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush6(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        QLinearGradient gradient6(0, 0, 0, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(144, 238, 144, 255));
        gradient6.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush7(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        QBrush brush8(QColor(120, 120, 120, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        QLinearGradient gradient7(0, 0, 0, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(144, 238, 144, 255));
        gradient7.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush9(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        QLinearGradient gradient8(0, 0, 0, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(144, 238, 144, 255));
        gradient8.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush10(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        accept_btn->setPalette(palette);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        accept_btn->setFont(font1);
        accept_btn->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 lightgreen, stop: 1 green);\n"
"    border-color: #008000;\n"
"    border-style: inset;\n"
"    border-width: 3px;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover \n"
"{\n"
"	  border-style: outset;\n"
"}\n"
"\n"
"QPushButton:flat \n"
"{\n"
"    border: none; \n"
"}\n"
"\n"
"QPushButton:default \n"
"{\n"
"    border-color: #008000;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 royalblue, stop: 1 dodgerblue);\n"
"    border-style: inset;\n"
"}"));

        horizontalLayout_4->addWidget(accept_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(ConfigsForm);
        QObject::connect(accept_btn, SIGNAL(clicked()), ConfigsForm, SLOT(acceptSlot()));
        QObject::connect(dialView_checkBox, SIGNAL(toggled(bool)), ConfigsForm, SLOT(changeDialViewSlot(bool)));
        QObject::connect(sliderView_checkBox, SIGNAL(toggled(bool)), ConfigsForm, SLOT(changeSliderViewSlot(bool)));

        QMetaObject::connectSlotsByName(ConfigsForm);
    } // setupUi

    void retranslateUi(QDialog *ConfigsForm)
    {
        ConfigsForm->setWindowTitle(QCoreApplication::translate("ConfigsForm", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        addNewTrackToPlaylist_ChBox->setText(QCoreApplication::translate("ConfigsForm", "\320\224\320\276\320\261\320\260\320\262\320\273\321\217\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \321\202\321\200\320\265\320\272 \320\262 \321\201\321\200\320\260\320\267\321\203 \320\262 \321\201\320\277\320\270\321\201\320\276\320\272 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217", nullptr));
        resizeByCount_checkBox->setText(QCoreApplication::translate("ConfigsForm", "\320\237\320\276\320\264\321\201\321\202\321\200\320\260\320\270\320\262\320\260\321\202\321\214 \320\262\320\265\321\200\321\202\320\270\320\272\320\260\320\273\321\214\320\275\321\213\320\271 \321\200\320\260\320\267\320\274\320\265\321\200 \320\277\320\276\320\264 \321\207\320\270\321\201\320\273\320\276 \320\260\321\203\320\264\320\270\320\276\320\264\320\276\321\200\320\276\320\266\320\265\320\272", nullptr));
        volumeView_GBox->setTitle(QCoreApplication::translate("ConfigsForm", "\320\222\320\270\320\264 \321\200\320\265\320\263\321\203\320\273\321\217\321\202\320\276\321\200\320\260 \320\263\321\200\320\276\320\274\320\272\320\276\321\201\321\202\320\270", nullptr));
        dialView_checkBox->setText(QCoreApplication::translate("ConfigsForm", "\320\232\321\200\321\203\321\202\320\270\320\273\320\272\320\260", nullptr));
        sliderView_checkBox->setText(QCoreApplication::translate("ConfigsForm", "\320\237\320\276\320\273\320\267\321\203\320\275\320\276\320\272", nullptr));
        accept_btn->setText(QCoreApplication::translate("ConfigsForm", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigsForm: public Ui_ConfigsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGSFORM_H
