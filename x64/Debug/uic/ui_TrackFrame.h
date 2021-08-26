/********************************************************************************
** Form generated from reading UI file 'TrackFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKFRAME_H
#define UI_TRACKFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrackFrame
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *track_GBox;
    QVBoxLayout *verticalLayout_3;
    QFrame *topFrame;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *tracks_CBox;
    QSpacerItem *horizontalSpacer_7;
    QFrame *closeBtn_frame;
    QVBoxLayout *verticalLayout_2;
    QToolButton *close_btn;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QFrame *playerControl_frame;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *playerControl_HBox;
    QFrame *positionSlider_frame;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *currTimeLbl;
    QSlider *timeLine;
    QLabel *totalTimeLbl;
    QFrame *horizontal_frame;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *stop_btn;
    QToolButton *playPause_btn;
    QToolButton *loopBtn;
    QSpinBox *pauseRangeStart;
    QSpinBox *pauseRangeEnd;
    QSpacerItem *horizontalSpacer_2;
    QFrame *tags_frame;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *tags_CBox;
    QDial *dialVolume;
    QSlider *sliderVolume;
    QVBoxLayout *verticalLayout_4;
    QToolButton *muteBtn;
    QLabel *volumeValueLbl;

    void setupUi(QWidget *TrackFrame)
    {
        if (TrackFrame->objectName().isEmpty())
            TrackFrame->setObjectName(QString::fromUtf8("TrackFrame"));
        TrackFrame->resize(457, 114);
        TrackFrame->setMinimumSize(QSize(457, 114));
        TrackFrame->setMaximumSize(QSize(457, 114));
        TrackFrame->setWindowOpacity(1.000000000000000);
        TrackFrame->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(TrackFrame);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        track_GBox = new QGroupBox(TrackFrame);
        track_GBox->setObjectName(QString::fromUtf8("track_GBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(track_GBox->sizePolicy().hasHeightForWidth());
        track_GBox->setSizePolicy(sizePolicy);
        track_GBox->setMinimumSize(QSize(300, 0));
        track_GBox->setMaximumSize(QSize(16777215, 300));
        track_GBox->setAutoFillBackground(false);
        track_GBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"   border: 1px solid transparent;\n"
"}"));
        track_GBox->setAlignment(Qt::AlignCenter);
        track_GBox->setFlat(true);
        verticalLayout_3 = new QVBoxLayout(track_GBox);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        topFrame = new QFrame(track_GBox);
        topFrame->setObjectName(QString::fromUtf8("topFrame"));
        topFrame->setMinimumSize(QSize(0, 20));
        topFrame->setMaximumSize(QSize(16777215, 30));
        topFrame->setFrameShape(QFrame::StyledPanel);
        topFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(topFrame);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        tracks_CBox = new QComboBox(topFrame);
        tracks_CBox->setObjectName(QString::fromUtf8("tracks_CBox"));
        sizePolicy.setHeightForWidth(tracks_CBox->sizePolicy().hasHeightForWidth());
        tracks_CBox->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        tracks_CBox->setFont(font);
        tracks_CBox->setMouseTracking(false);
        tracks_CBox->setTabletTracking(false);
        tracks_CBox->setFocusPolicy(Qt::StrongFocus);
        tracks_CBox->setContextMenuPolicy(Qt::NoContextMenu);
        tracks_CBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 2px outset #909090;\n"
"    border-radius: 6px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"}\n"
"\n"
"/* QComboBox gets the \"on\" state when the popup is open */\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #D3D3D3, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #E1E1E1);\n"
"}\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px"
                        ";\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; /* just a single line */\n"
"    border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"	image: url(:/SoundAround/images/arrow-216-12.png);\n"
"}\n"
"\n"
"QComboBox::down-arrow:on { /* shift the arrow when popup is open */\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}"));
        tracks_CBox->setEditable(false);
        tracks_CBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        tracks_CBox->setIconSize(QSize(8, 8));

        horizontalLayout->addWidget(tracks_CBox);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        horizontalLayout_10->addLayout(horizontalLayout);

        closeBtn_frame = new QFrame(topFrame);
        closeBtn_frame->setObjectName(QString::fromUtf8("closeBtn_frame"));
        closeBtn_frame->setFrameShape(QFrame::StyledPanel);
        closeBtn_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(closeBtn_frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        close_btn = new QToolButton(closeBtn_frame);
        close_btn->setObjectName(QString::fromUtf8("close_btn"));
        close_btn->setMinimumSize(QSize(20, 20));
        close_btn->setMaximumSize(QSize(20, 20));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/SoundAround/images/close-window-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        close_btn->setIcon(icon);
        close_btn->setIconSize(QSize(25, 25));
        close_btn->setAutoRaise(true);

        verticalLayout_2->addWidget(close_btn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_10->addWidget(closeBtn_frame);


        verticalLayout_3->addWidget(topFrame);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        playerControl_frame = new QFrame(track_GBox);
        playerControl_frame->setObjectName(QString::fromUtf8("playerControl_frame"));
        playerControl_frame->setEnabled(true);
        horizontalLayout_7 = new QHBoxLayout(playerControl_frame);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        playerControl_HBox = new QVBoxLayout();
        playerControl_HBox->setSpacing(6);
        playerControl_HBox->setObjectName(QString::fromUtf8("playerControl_HBox"));
        positionSlider_frame = new QFrame(playerControl_frame);
        positionSlider_frame->setObjectName(QString::fromUtf8("positionSlider_frame"));
        horizontalLayout_8 = new QHBoxLayout(positionSlider_frame);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        currTimeLbl = new QLabel(positionSlider_frame);
        currTimeLbl->setObjectName(QString::fromUtf8("currTimeLbl"));
        currTimeLbl->setMinimumSize(QSize(40, 0));
        currTimeLbl->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_4->addWidget(currTimeLbl);

        timeLine = new QSlider(positionSlider_frame);
        timeLine->setObjectName(QString::fromUtf8("timeLine"));
        timeLine->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(timeLine->sizePolicy().hasHeightForWidth());
        timeLine->setSizePolicy(sizePolicy1);
        timeLine->setMinimumSize(QSize(0, 0));
        QPalette palette;
        timeLine->setPalette(palette);
        timeLine->setAutoFillBackground(false);
        timeLine->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 0px outset #008000;\n"
"	border-radius: 3px;\n"
"    height: 5px; \n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #63c143, stop:1 #75e550);\n"
"    margin: -1px 0;\n"
"	margin-top: 1.7px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #008000, stop:1 #00b600);\n"
"    border: 1.5px outset #008000;\n"
"    width: 15px;\n"
"    margin: -2px 0;\n"
"    border-radius: 4px;\n"
"}\n"
""));
        timeLine->setTracking(true);
        timeLine->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(timeLine);

        totalTimeLbl = new QLabel(positionSlider_frame);
        totalTimeLbl->setObjectName(QString::fromUtf8("totalTimeLbl"));
        totalTimeLbl->setMinimumSize(QSize(40, 0));
        totalTimeLbl->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_4->addWidget(totalTimeLbl);


        horizontalLayout_8->addLayout(horizontalLayout_4);


        playerControl_HBox->addWidget(positionSlider_frame);

        horizontal_frame = new QFrame(playerControl_frame);
        horizontal_frame->setObjectName(QString::fromUtf8("horizontal_frame"));
        horizontal_frame->setEnabled(true);
        horizontal_frame->setMinimumSize(QSize(224, 0));
        horizontal_frame->setFrameShape(QFrame::StyledPanel);
        horizontal_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(horizontal_frame);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        stop_btn = new QToolButton(horizontal_frame);
        stop_btn->setObjectName(QString::fromUtf8("stop_btn"));
        stop_btn->setMinimumSize(QSize(30, 30));
        stop_btn->setMaximumSize(QSize(30, 30));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/SoundAround/images/stop-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        stop_btn->setIcon(icon1);
        stop_btn->setIconSize(QSize(25, 24));
        stop_btn->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        stop_btn->setAutoRaise(true);

        horizontalLayout_5->addWidget(stop_btn);

        playPause_btn = new QToolButton(horizontal_frame);
        playPause_btn->setObjectName(QString::fromUtf8("playPause_btn"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(playPause_btn->sizePolicy().hasHeightForWidth());
        playPause_btn->setSizePolicy(sizePolicy2);
        playPause_btn->setMinimumSize(QSize(30, 30));
        playPause_btn->setMaximumSize(QSize(30, 30));
        playPause_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/SoundAround/images/play-6-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/SoundAround/images/pause-48.png"), QSize(), QIcon::Active, QIcon::On);
        playPause_btn->setIcon(icon2);
        playPause_btn->setIconSize(QSize(24, 24));
        playPause_btn->setCheckable(false);
        playPause_btn->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        playPause_btn->setAutoRaise(true);

        horizontalLayout_5->addWidget(playPause_btn);

        loopBtn = new QToolButton(horizontal_frame);
        loopBtn->setObjectName(QString::fromUtf8("loopBtn"));
        loopBtn->setMinimumSize(QSize(26, 26));
        loopBtn->setMaximumSize(QSize(26, 26));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/SoundAround/images/loop-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        loopBtn->setIcon(icon3);
        loopBtn->setIconSize(QSize(20, 20));
        loopBtn->setCheckable(true);
        loopBtn->setAutoRaise(true);

        horizontalLayout_5->addWidget(loopBtn);

        pauseRangeStart = new QSpinBox(horizontal_frame);
        pauseRangeStart->setObjectName(QString::fromUtf8("pauseRangeStart"));
        pauseRangeStart->setEnabled(false);
        pauseRangeStart->setMinimumSize(QSize(43, 0));
        pauseRangeStart->setMaximumSize(QSize(16777215, 26));
        QPalette palette1;
        pauseRangeStart->setPalette(palette1);
        pauseRangeStart->setFont(font);
        pauseRangeStart->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    border: 2px outset #909090;\n"
"    border-radius: 3px;\n"
"	border-width: 1px;\n"
"    padding: 1px 1px 1px 1px;\n"
"    min-width: 3em;\n"
"}\n"
""));
        pauseRangeStart->setFrame(true);
        pauseRangeStart->setAlignment(Qt::AlignCenter);
        pauseRangeStart->setButtonSymbols(QAbstractSpinBox::UpDownArrows);

        horizontalLayout_5->addWidget(pauseRangeStart);

        pauseRangeEnd = new QSpinBox(horizontal_frame);
        pauseRangeEnd->setObjectName(QString::fromUtf8("pauseRangeEnd"));
        pauseRangeEnd->setEnabled(false);
        pauseRangeEnd->setMinimumSize(QSize(43, 26));
        pauseRangeEnd->setMaximumSize(QSize(16777215, 26));
        QPalette palette2;
        pauseRangeEnd->setPalette(palette2);
        QFont font1;
        font1.setPointSize(9);
        pauseRangeEnd->setFont(font1);
        pauseRangeEnd->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    border: 2px outset #909090;\n"
"    border-radius: 3px;\n"
"	border-width: 1px;\n"
"    padding: 1px 1px 1px 1px;\n"
"    min-width: 3em;\n"
"}\n"
""));
        pauseRangeEnd->setFrame(true);
        pauseRangeEnd->setAlignment(Qt::AlignCenter);
        pauseRangeEnd->setButtonSymbols(QAbstractSpinBox::UpDownArrows);

        horizontalLayout_5->addWidget(pauseRangeEnd);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        tags_frame = new QFrame(horizontal_frame);
        tags_frame->setObjectName(QString::fromUtf8("tags_frame"));
        tags_frame->setEnabled(true);
        horizontalLayout_3 = new QHBoxLayout(tags_frame);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        tags_CBox = new QComboBox(tags_frame);
        tags_CBox->setObjectName(QString::fromUtf8("tags_CBox"));
        tags_CBox->setMinimumSize(QSize(103, 26));
        tags_CBox->setMaximumSize(QSize(16777215, 26));
        QPalette palette3;
        tags_CBox->setPalette(palette3);
        tags_CBox->setFont(font);
        tags_CBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 2px outset #909090;\n"
"    border-radius: 6px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"}\n"
"\n"
"/* QComboBox gets the \"on\" state when the popup is open */\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #D3D3D3, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #E1E1E1);\n"
"}\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px"
                        ";\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; /* just a single line */\n"
"    border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"	image: url(:/SoundAround/images/arrow-216-12.png);\n"
"}\n"
"\n"
"QComboBox::down-arrow:on { /* shift the arrow when popup is open */\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}"));
        tags_CBox->setEditable(true);
        tags_CBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_3->addWidget(tags_CBox);


        horizontalLayout_5->addWidget(tags_frame);


        playerControl_HBox->addWidget(horizontal_frame);


        horizontalLayout_7->addLayout(playerControl_HBox);


        horizontalLayout_6->addWidget(playerControl_frame);

        dialVolume = new QDial(track_GBox);
        dialVolume->setObjectName(QString::fromUtf8("dialVolume"));
        dialVolume->setMinimumSize(QSize(60, 60));
        dialVolume->setMaximumSize(QSize(60, 60));
        dialVolume->setMaximum(100);
        dialVolume->setValue(50);
        dialVolume->setOrientation(Qt::Vertical);
        dialVolume->setWrapping(false);
        dialVolume->setNotchTarget(10.000000000000000);
        dialVolume->setNotchesVisible(true);

        horizontalLayout_6->addWidget(dialVolume);

        sliderVolume = new QSlider(track_GBox);
        sliderVolume->setObjectName(QString::fromUtf8("sliderVolume"));
        sizePolicy2.setHeightForWidth(sliderVolume->sizePolicy().hasHeightForWidth());
        sliderVolume->setSizePolicy(sizePolicy2);
        sliderVolume->setMinimumSize(QSize(60, 60));
        sliderVolume->setMaximumSize(QSize(60, 60));
        sliderVolume->setAutoFillBackground(false);
        sliderVolume->setMaximum(100);
        sliderVolume->setSingleStep(10);
        sliderVolume->setPageStep(20);
        sliderVolume->setValue(50);
        sliderVolume->setTracking(true);
        sliderVolume->setOrientation(Qt::Vertical);
        sliderVolume->setTickPosition(QSlider::TicksAbove);
        sliderVolume->setTickInterval(10);

        horizontalLayout_6->addWidget(sliderVolume);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        muteBtn = new QToolButton(track_GBox);
        muteBtn->setObjectName(QString::fromUtf8("muteBtn"));
        sizePolicy2.setHeightForWidth(muteBtn->sizePolicy().hasHeightForWidth());
        muteBtn->setSizePolicy(sizePolicy2);
        muteBtn->setMinimumSize(QSize(26, 26));
        muteBtn->setMaximumSize(QSize(26, 26));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/SoundAround/images/volume-up-4-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/SoundAround/images/mute-2-32.png"), QSize(), QIcon::Active, QIcon::On);
        muteBtn->setIcon(icon4);
        muteBtn->setIconSize(QSize(20, 20));
        muteBtn->setCheckable(true);
        muteBtn->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        muteBtn->setAutoRaise(true);

        verticalLayout_4->addWidget(muteBtn);

        volumeValueLbl = new QLabel(track_GBox);
        volumeValueLbl->setObjectName(QString::fromUtf8("volumeValueLbl"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(volumeValueLbl->sizePolicy().hasHeightForWidth());
        volumeValueLbl->setSizePolicy(sizePolicy3);
        volumeValueLbl->setMinimumSize(QSize(21, 0));
        volumeValueLbl->setMaximumSize(QSize(100, 30));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        volumeValueLbl->setFont(font2);
        volumeValueLbl->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(volumeValueLbl);


        horizontalLayout_6->addLayout(verticalLayout_4);


        verticalLayout_3->addLayout(horizontalLayout_6);


        verticalLayout->addWidget(track_GBox);


        retranslateUi(TrackFrame);
        QObject::connect(muteBtn, SIGNAL(clicked(bool)), TrackFrame, SLOT(setMuteSlot(bool)));
        QObject::connect(tracks_CBox, SIGNAL(currentIndexChanged(int)), TrackFrame, SLOT(changeTrackSlot()));
        QObject::connect(sliderVolume, SIGNAL(valueChanged(int)), TrackFrame, SLOT(changeVolumeSlot(int)));
        QObject::connect(close_btn, SIGNAL(clicked()), TrackFrame, SLOT(onCloseBtnSlot()));
        QObject::connect(loopBtn, SIGNAL(clicked(bool)), TrackFrame, SLOT(setLoopSlot(bool)));
        QObject::connect(pauseRangeStart, SIGNAL(valueChanged(int)), TrackFrame, SLOT(changePauseRangeStartSlot(int)));
        QObject::connect(timeLine, SIGNAL(sliderMoved(int)), TrackFrame, SLOT(changeSliderSlot(int)));
        QObject::connect(tags_CBox, SIGNAL(currentIndexChanged(QString)), TrackFrame, SLOT(filterByTagSlot()));
        QObject::connect(playPause_btn, SIGNAL(clicked()), TrackFrame, SLOT(playPauseSlot()));
        QObject::connect(stop_btn, SIGNAL(clicked()), TrackFrame, SLOT(toStartSlot()));
        QObject::connect(dialVolume, SIGNAL(valueChanged(int)), TrackFrame, SLOT(changeVolumeSlot(int)));

        QMetaObject::connectSlotsByName(TrackFrame);
    } // setupUi

    void retranslateUi(QWidget *TrackFrame)
    {
        TrackFrame->setWindowTitle(QCoreApplication::translate("TrackFrame", "TrackFrame", nullptr));
        track_GBox->setTitle(QString());
#if QT_CONFIG(tooltip)
        close_btn->setToolTip(QCoreApplication::translate("TrackFrame", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\202\321\200\320\265\320\272 \320\270\320\267 \321\201\320\277\320\270\321\201\320\272\320\260 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        close_btn->setText(QString());
#if QT_CONFIG(tooltip)
        currTimeLbl->setToolTip(QCoreApplication::translate("TrackFrame", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\242\320\265\320\272\321\203\321\211\320\260\321\217 \320\277\320\276\320\267\320\270\321\206\320\270\321\217 \321\202\321\200\320\265\320\272\320\260</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        currTimeLbl->setText(QCoreApplication::translate("TrackFrame", "0:00:00", nullptr));
#if QT_CONFIG(tooltip)
        totalTimeLbl->setToolTip(QCoreApplication::translate("TrackFrame", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \321\202\321\200\320\265\320\272\320\260</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        totalTimeLbl->setText(QCoreApplication::translate("TrackFrame", "0:00:00", nullptr));
#if QT_CONFIG(tooltip)
        stop_btn->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        stop_btn->setText(QString());
        playPause_btn->setText(QCoreApplication::translate("TrackFrame", "...", nullptr));
#if QT_CONFIG(tooltip)
        loopBtn->setToolTip(QCoreApplication::translate("TrackFrame", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\227\320\260\321\206\320\270\320\272\320\273\320\270\321\202\321\214</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        loopBtn->setText(QCoreApplication::translate("TrackFrame", "loop", nullptr));
#if QT_CONFIG(tooltip)
        pauseRangeStart->setToolTip(QCoreApplication::translate("TrackFrame", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\237\320\260\321\203\320\267\320\260 \320\277\320\265\321\200\320\265\320\264 \320\277\320\276\320\262\321\202\320\276\321\200\320\275\321\213\320\274 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\320\265\320\274 \321\202\321\200\320\265\320\272\320\260.</span></p><p><span style=\" font-size:10pt;\">\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 (\321\201\320\265\320\272.)</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pauseRangeEnd->setToolTip(QCoreApplication::translate("TrackFrame", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\237\320\260\321\203\320\267\320\260 \320\277\320\265\321\200\320\265\320\264 \320\277\320\276\320\262\321\202\320\276\321\200\320\275\321\213\320\274 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\320\265\320\274 \321\202\321\200\320\265\320\272\320\260.</span></p><p><span style=\" font-size:10pt;\">\320\232\320\276\320\275\320\265\321\207\320\275\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 (\321\201\320\265\320\272.)</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        tags_CBox->setToolTip(QCoreApplication::translate("TrackFrame", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\244\320\270\320\273\321\214\321\202\321\200 \320\277\320\276 \321\202\320\265\320\263\320\260\320\274</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        muteBtn->setToolTip(QCoreApplication::translate("TrackFrame", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\236\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214/\320\262\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \320\267\320\262\321\203\320\272</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        muteBtn->setText(QString());
        volumeValueLbl->setText(QCoreApplication::translate("TrackFrame", "50", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrackFrame: public Ui_TrackFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKFRAME_H
