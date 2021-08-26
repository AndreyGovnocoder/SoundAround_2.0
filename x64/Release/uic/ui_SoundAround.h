/********************************************************************************
** Form generated from reading UI file 'SoundAround.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOUNDAROUND_H
#define UI_SOUNDAROUND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SoundAroundClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *showHideTracksTable_btn;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QFrame *trackTable_frame;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *tags_CBox;
    QSpacerItem *horizontalSpacer;
    QScrollArea *trackList_scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QTableWidget *tracks_table;
    QFrame *playList_frame;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *addNewTrackBtn;
    QPushButton *addFrameToList_btn;
    QPushButton *clean_btn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *stopAll_btn;
    QToolButton *muteAll_btn;
    QScrollArea *playlist_scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFrame *tracks_frame;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *trackList_VBox;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *SoundAroundClass)
    {
        if (SoundAroundClass->objectName().isEmpty())
            SoundAroundClass->setObjectName(QString::fromUtf8("SoundAroundClass"));
        SoundAroundClass->resize(795, 485);
        SoundAroundClass->setMinimumSize(QSize(0, 218));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(204, 240, 210, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(229, 247, 232, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(102, 120, 105, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(136, 160, 140, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        SoundAroundClass->setPalette(palette);
        centralWidget = new QWidget(SoundAroundClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        showHideTracksTable_btn = new QToolButton(centralWidget);
        showHideTracksTable_btn->setObjectName(QString::fromUtf8("showHideTracksTable_btn"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(showHideTracksTable_btn->sizePolicy().hasHeightForWidth());
        showHideTracksTable_btn->setSizePolicy(sizePolicy);
        showHideTracksTable_btn->setMinimumSize(QSize(20, 0));
        showHideTracksTable_btn->setMaximumSize(QSize(20, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/SoundAround/images/arrow-93-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        showHideTracksTable_btn->setIcon(icon);
        showHideTracksTable_btn->setIconSize(QSize(32, 32));
        showHideTracksTable_btn->setAutoRepeat(false);
        showHideTracksTable_btn->setAutoExclusive(true);
        showHideTracksTable_btn->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        showHideTracksTable_btn->setAutoRaise(true);

        horizontalLayout_2->addWidget(showHideTracksTable_btn);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        trackTable_frame = new QFrame(centralWidget);
        trackTable_frame->setObjectName(QString::fromUtf8("trackTable_frame"));
        trackTable_frame->setFrameShape(QFrame::StyledPanel);
        trackTable_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(trackTable_frame);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        tags_CBox = new QComboBox(trackTable_frame);
        tags_CBox->setObjectName(QString::fromUtf8("tags_CBox"));
        tags_CBox->setMinimumSize(QSize(103, 28));
        tags_CBox->setStyleSheet(QString::fromUtf8("QComboBox \n"
"{\n"
"    border: 2px inset #909090;\n"
"	border-color: rgb(0, 128, 0);\n"
"    border-radius: 6px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"	background-color: rgb(240, 255, 240);\n"
"    selection-background-color: darkgray;\n"
"}\n"
"\n"
"QComboBox:hover\n"
"{\n"
"	border-style: outset;\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable \n"
"{\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"}\n"
"\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on \n"
"{\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #D3D3D3, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #E1E1E1);\n"
"}\n"
"\n"
"QComboBox:on \n"
"{ \n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"QComboBox::drop-d"
                        "own \n"
"{\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid;\n"
"    border-top-right-radius: 3px; \n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"QComboBox::down-arrow \n"
"{\n"
"	image: url(:/SoundAround/images/arrow-216-12.png);\n"
"}\n"
"\n"
"QComboBox::down-arrow:on \n"
"{ \n"
"    top: 1px;\n"
"    left: 1px;\n"
"}"));
        tags_CBox->setEditable(true);

        horizontalLayout_3->addWidget(tags_CBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout_3);

        trackList_scrollArea = new QScrollArea(trackTable_frame);
        trackList_scrollArea->setObjectName(QString::fromUtf8("trackList_scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(trackList_scrollArea->sizePolicy().hasHeightForWidth());
        trackList_scrollArea->setSizePolicy(sizePolicy1);
        trackList_scrollArea->setMinimumSize(QSize(0, 0));
        trackList_scrollArea->setFrameShape(QFrame::NoFrame);
        trackList_scrollArea->setFrameShadow(QFrame::Raised);
        trackList_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 232, 401));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tracks_table = new QTableWidget(scrollAreaWidgetContents_2);
        if (tracks_table->columnCount() < 4)
            tracks_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tracks_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/SoundAround/images/note-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        QFont font;
        font.setPointSize(8);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        __qtablewidgetitem1->setFont(font);
        __qtablewidgetitem1->setIcon(icon1);
        tracks_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/SoundAround/images/timer-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        QFont font1;
        font1.setPointSize(7);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        __qtablewidgetitem2->setFont(font1);
        __qtablewidgetitem2->setIcon(icon2);
        tracks_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/SoundAround/images/tag-2-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        __qtablewidgetitem3->setFont(font);
        __qtablewidgetitem3->setIcon(icon3);
        tracks_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tracks_table->setObjectName(QString::fromUtf8("tracks_table"));
        sizePolicy1.setHeightForWidth(tracks_table->sizePolicy().hasHeightForWidth());
        tracks_table->setSizePolicy(sizePolicy1);
        tracks_table->setMinimumSize(QSize(0, 0));
        QPalette palette1;
        QBrush brush8(QColor(0, 128, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        tracks_table->setPalette(palette1);
        tracks_table->setFocusPolicy(Qt::ClickFocus);
        tracks_table->setContextMenuPolicy(Qt::CustomContextMenu);
        tracks_table->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 128, 0);\n"
"border: 0px"));
        tracks_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tracks_table->setTabKeyNavigation(false);
        tracks_table->setAlternatingRowColors(true);
        tracks_table->setSelectionMode(QAbstractItemView::SingleSelection);
        tracks_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        tracks_table->setTextElideMode(Qt::ElideLeft);
        tracks_table->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tracks_table->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tracks_table->horizontalHeader()->setVisible(true);
        tracks_table->horizontalHeader()->setCascadingSectionResizes(true);
        tracks_table->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tracks_table->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tracks_table);

        trackList_scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_6->addWidget(trackList_scrollArea);


        horizontalLayout->addWidget(trackTable_frame);

        playList_frame = new QFrame(centralWidget);
        playList_frame->setObjectName(QString::fromUtf8("playList_frame"));
        playList_frame->setMinimumSize(QSize(511, 0));
        playList_frame->setMaximumSize(QSize(511, 16777215));
        playList_frame->setFrameShape(QFrame::StyledPanel);
        playList_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(playList_frame);
        verticalLayout_5->setSpacing(7);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(9, 9, 9, 9);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        addNewTrackBtn = new QPushButton(playList_frame);
        addNewTrackBtn->setObjectName(QString::fromUtf8("addNewTrackBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(addNewTrackBtn->sizePolicy().hasHeightForWidth());
        addNewTrackBtn->setSizePolicy(sizePolicy2);
        addNewTrackBtn->setMinimumSize(QSize(28, 28));
        addNewTrackBtn->setMaximumSize(QSize(28, 28));
        addNewTrackBtn->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"     border: 2px inset #8f8f91;\n"
"	 border-color: rgb(0, 128, 0);\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
" }\n"
"\n"
"QPushButton:hover \n"
"{\n"
"	 border: 2px outset #8f8f91;\n"
"	 border-color: rgb(0, 128, 0);\n"
"}\n"
"\n"
" QPushButton:pressed \n"
"{\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"	border-style: inset;\n"
" }\n"
"\n"
" QPushButton:flat \n"
"{\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default\n"
" {\n"
"     border-color: navy;\n"
" }"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/SoundAround/images/add-new-track-32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        addNewTrackBtn->setIcon(icon4);
        addNewTrackBtn->setIconSize(QSize(16, 16));
        addNewTrackBtn->setFlat(false);

        horizontalLayout_4->addWidget(addNewTrackBtn);

        addFrameToList_btn = new QPushButton(playList_frame);
        addFrameToList_btn->setObjectName(QString::fromUtf8("addFrameToList_btn"));
        sizePolicy2.setHeightForWidth(addFrameToList_btn->sizePolicy().hasHeightForWidth());
        addFrameToList_btn->setSizePolicy(sizePolicy2);
        addFrameToList_btn->setMinimumSize(QSize(28, 28));
        addFrameToList_btn->setMaximumSize(QSize(28, 28));
        addFrameToList_btn->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"     border: 2px inset #8f8f91;\n"
"	 border-color: rgb(0, 128, 0);\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
" }\n"
"\n"
"QPushButton:hover \n"
"{\n"
"	 border: 2px outset #8f8f91;\n"
"	 border-color: rgb(0, 128, 0);\n"
"}\n"
"\n"
" QPushButton:pressed \n"
"{\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"	border-style: inset;\n"
" }\n"
"\n"
" QPushButton:flat \n"
"{\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default\n"
" {\n"
"     border-color: navy;\n"
" }"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/SoundAround/images/add-to-list-32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        addFrameToList_btn->setIcon(icon5);
        addFrameToList_btn->setIconSize(QSize(16, 16));
        addFrameToList_btn->setFlat(false);

        horizontalLayout_4->addWidget(addFrameToList_btn);

        clean_btn = new QPushButton(playList_frame);
        clean_btn->setObjectName(QString::fromUtf8("clean_btn"));
        sizePolicy2.setHeightForWidth(clean_btn->sizePolicy().hasHeightForWidth());
        clean_btn->setSizePolicy(sizePolicy2);
        clean_btn->setMinimumSize(QSize(28, 28));
        clean_btn->setMaximumSize(QSize(28, 28));
        clean_btn->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"     border: 2px inset #8f8f91;\n"
"	 border-color: rgb(0, 128, 0);\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
" }\n"
"\n"
"QPushButton:hover \n"
"{\n"
"	 border: 2px outset #8f8f91;\n"
"	 border-color: rgb(0, 128, 0);\n"
"}\n"
"\n"
" QPushButton:pressed \n"
"{\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"	border-style: inset;\n"
" }\n"
"\n"
" QPushButton:flat \n"
"{\n"
"     border: none; \n"
" }\n"
"\n"
" QPushButton:default\n"
" {\n"
"     border-color: navy;\n"
" }"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/SoundAround/images/clean-32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        clean_btn->setIcon(icon6);
        clean_btn->setIconSize(QSize(16, 16));

        horizontalLayout_4->addWidget(clean_btn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        stopAll_btn = new QPushButton(playList_frame);
        stopAll_btn->setObjectName(QString::fromUtf8("stopAll_btn"));
        stopAll_btn->setMinimumSize(QSize(28, 28));
        stopAll_btn->setMaximumSize(QSize(28, 28));
        stopAll_btn->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"     border: 2px inset #8f8f91;\n"
"	 border-color: rgb(0, 128, 0);\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
" }\n"
"\n"
"QPushButton:hover \n"
"{\n"
"	 border-style: outset;\n"
"}\n"
"\n"
" QPushButton:pressed \n"
"{\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"	border-style: inset;\n"
" }\n"
"\n"
" QPushButton:checked \n"
"{\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/SoundAround/images/stop-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopAll_btn->setIcon(icon7);
        stopAll_btn->setIconSize(QSize(16, 16));

        horizontalLayout_4->addWidget(stopAll_btn);

        muteAll_btn = new QToolButton(playList_frame);
        muteAll_btn->setObjectName(QString::fromUtf8("muteAll_btn"));
        muteAll_btn->setMinimumSize(QSize(28, 28));
        muteAll_btn->setMaximumSize(QSize(28, 28));
        muteAll_btn->setStyleSheet(QString::fromUtf8("QToolButton \n"
"{\n"
"     border: 2px inset #8f8f91;\n"
"	 border-color: rgb(0, 128, 0);\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
" }\n"
"\n"
"QToolButton:hover \n"
"{\n"
"	 border-style: outset;\n"
"}\n"
"\n"
" QToolButton:pressed \n"
"{\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"	border-style: inset;\n"
" }\n"
"\n"
" QToolButton:checked \n"
"{\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/SoundAround/images/volume-up-4-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon8.addFile(QString::fromUtf8(":/SoundAround/images/mute-2-32.png"), QSize(), QIcon::Normal, QIcon::On);
        muteAll_btn->setIcon(icon8);
        muteAll_btn->setIconSize(QSize(16, 16));
        muteAll_btn->setCheckable(true);

        horizontalLayout_4->addWidget(muteAll_btn);


        verticalLayout_5->addLayout(horizontalLayout_4);

        playlist_scrollArea = new QScrollArea(playList_frame);
        playlist_scrollArea->setObjectName(QString::fromUtf8("playlist_scrollArea"));
        sizePolicy.setHeightForWidth(playlist_scrollArea->sizePolicy().hasHeightForWidth());
        playlist_scrollArea->setSizePolicy(sizePolicy);
        playlist_scrollArea->setMinimumSize(QSize(0, 0));
        playlist_scrollArea->setMaximumSize(QSize(493, 16777215));
        playlist_scrollArea->setAutoFillBackground(true);
        playlist_scrollArea->setFrameShape(QFrame::Panel);
        playlist_scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        playlist_scrollArea->setWidgetResizable(true);
        playlist_scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 489, 398));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tracks_frame = new QFrame(scrollAreaWidgetContents);
        tracks_frame->setObjectName(QString::fromUtf8("tracks_frame"));
        tracks_frame->setFrameShape(QFrame::StyledPanel);
        tracks_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(tracks_frame);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        trackList_VBox = new QVBoxLayout();
        trackList_VBox->setSpacing(15);
        trackList_VBox->setObjectName(QString::fromUtf8("trackList_VBox"));
        trackList_VBox->setSizeConstraint(QLayout::SetMaximumSize);
        trackList_VBox->setContentsMargins(-1, 0, -1, -1);

        verticalLayout_7->addLayout(trackList_VBox);


        verticalLayout_2->addWidget(tracks_frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        playlist_scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_5->addWidget(playlist_scrollArea);


        horizontalLayout->addWidget(playList_frame);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_3);

        SoundAroundClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SoundAroundClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 795, 24));
        menuBar->setMinimumSize(QSize(40, 0));
        menuBar->setMaximumSize(QSize(16777215, 40));
        menuBar->setStyleSheet(QString::fromUtf8("QMenuBar {\n"
"	background-color: qlineargradient(spread:pad, x1:0.477, y1:1, x2:0.483, y2:0, stop:0 rgba(157, 208, 157, 255), stop:1 rgba(219, 255, 211, 255));\n"
"    /* background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                       stop:0 #dedede, stop:1 darkgray);*/\n"
" }\n"
"\n"
" QMenuBar::item {\n"
"     spacing: 20px; /* \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273 \320\274\320\265\320\266\320\264\321\203 \320\277\321\203\320\275\320\272\321\202\320\260\320\274\320\270 \320\274\320\265\320\275\321\216 */\n"
"     padding: 4px ;\n"
"     background: transparent;\n"
"     border-radius: 4px;\n"
" }\n"
"\n"
" QMenuBar::item:selected {\n"
"    border-color: #008000;\n"
"	background: qlineargradient(spread:pad, x1:1, y1:0.568, x2:0, y2:0, stop:0 rgba(75, 158, 75, 255), stop:1 rgba(255, 255, 255, 255));\n"
" }\n"
"\n"
" QMenuBar::item:pressed {\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0.586, stop:0 rgba(75, 158, 7"
                        "5, 255), stop:1 rgba(255, 255, 255, 255));\n"
"	/*background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 66, 0, 255), stop:1 rgba(255, 255, 255, 255));*/\n"
" }"));
        menuBar->setDefaultUp(false);
        menuBar->setNativeMenuBar(false);
        SoundAroundClass->setMenuBar(menuBar);

        retranslateUi(SoundAroundClass);
        QObject::connect(addNewTrackBtn, SIGNAL(clicked()), SoundAroundClass, SLOT(addTrackSlot()));
        QObject::connect(tags_CBox, SIGNAL(currentIndexChanged(QString)), SoundAroundClass, SLOT(filterByTagSlot()));
        QObject::connect(showHideTracksTable_btn, SIGNAL(clicked()), SoundAroundClass, SLOT(showHideTracksTableSlot()));
        QObject::connect(addFrameToList_btn, SIGNAL(clicked()), SoundAroundClass, SLOT(addEmptyTrackFrameSlot()));
        QObject::connect(clean_btn, SIGNAL(clicked()), SoundAroundClass, SLOT(cleanTrackFramesListSlot()));
        QObject::connect(stopAll_btn, SIGNAL(clicked()), SoundAroundClass, SLOT(stopAllSlot()));
        QObject::connect(muteAll_btn, SIGNAL(toggled(bool)), SoundAroundClass, SLOT(muteAllSlot(bool)));

        addNewTrackBtn->setDefault(false);
        addFrameToList_btn->setDefault(false);


        QMetaObject::connectSlotsByName(SoundAroundClass);
    } // setupUi

    void retranslateUi(QMainWindow *SoundAroundClass)
    {
        SoundAroundClass->setWindowTitle(QCoreApplication::translate("SoundAroundClass", "SoundAround", nullptr));
        showHideTracksTable_btn->setText(QString());
#if QT_CONFIG(tooltip)
        tags_CBox->setToolTip(QCoreApplication::translate("SoundAroundClass", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\244\320\270\320\273\321\214\321\202\321\200 \320\277\320\276 \321\202\320\265\320\263\320\260\320\274</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem = tracks_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SoundAroundClass", "_id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tracks_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SoundAroundClass", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tracks_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SoundAroundClass", "\320\224\320\273\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tracks_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SoundAroundClass", "\320\242\321\215\320\263\320\270", nullptr));
#if QT_CONFIG(tooltip)
        addNewTrackBtn->setToolTip(QCoreApplication::translate("SoundAroundClass", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \321\202\321\200\320\265\320\272</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        addNewTrackBtn->setText(QString());
#if QT_CONFIG(tooltip)
        addFrameToList_btn->setToolTip(QCoreApplication::translate("SoundAroundClass", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\321\203\321\201\321\202\321\203\321\216 \320\260\321\203\320\264\320\270\320\276\320\264\320\276\321\200\320\276\320\266\320\272\321\203</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        addFrameToList_btn->setText(QString());
#if QT_CONFIG(tooltip)
        clean_btn->setToolTip(QCoreApplication::translate("SoundAroundClass", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\202\320\265\320\272\321\203\321\211\320\270\320\271 \321\201\320\277\320\270\321\201\320\276\320\272 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        clean_btn->setText(QString());
#if QT_CONFIG(tooltip)
        stopAll_btn->setToolTip(QCoreApplication::translate("SoundAroundClass", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\236\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\320\265 \320\262\321\201\320\265\321\205 \320\260\321\203\320\264\320\270\320\276\320\264\320\276\321\200\320\276\320\266\320\265\320\272</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        stopAll_btn->setText(QString());
#if QT_CONFIG(tooltip)
        muteAll_btn->setToolTip(QCoreApplication::translate("SoundAroundClass", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\236\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214/\320\262\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \320\267\320\262\321\203\320\272 \320\275\320\260 \320\262\321\201\320\265\321\205 \320\260\321\203\320\264\320\270\320\276\320\264\320\276\321\200\320\276\320\266\320\272\320\260\321\205</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        muteAll_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SoundAroundClass: public Ui_SoundAroundClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOUNDAROUND_H
