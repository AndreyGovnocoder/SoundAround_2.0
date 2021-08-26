/********************************************************************************
** Form generated from reading UI file 'TrackDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKDIALOG_H
#define UI_TRACKDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TrackDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QFrame *trackPath_frame;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *addFile_btn;
    QLabel *head_lbl;
    QFrame *nameAndTags_frame;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *name_gBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *name_lineEdit;
    QHBoxLayout *tagsHBox;
    QGroupBox *tracksTags_gBox;
    QVBoxLayout *verticalLayout;
    QListWidget *tracksTags_listWidget;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QToolButton *addTagToTrack_btn;
    QToolButton *addTagToAllTags_btn;
    QToolButton *toolButton_3;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *allTags_gBox;
    QVBoxLayout *verticalLayout_2;
    QListWidget *allTags_listWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *ok_btn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cancel_btn;

    void setupUi(QDialog *TrackDialog)
    {
        if (TrackDialog->objectName().isEmpty())
            TrackDialog->setObjectName(QString::fromUtf8("TrackDialog"));
        TrackDialog->setWindowModality(Qt::WindowModal);
        TrackDialog->resize(476, 430);
        TrackDialog->setMouseTracking(false);
        TrackDialog->setAcceptDrops(false);
        verticalLayout_4 = new QVBoxLayout(TrackDialog);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        trackPath_frame = new QFrame(TrackDialog);
        trackPath_frame->setObjectName(QString::fromUtf8("trackPath_frame"));
        trackPath_frame->setEnabled(true);
        trackPath_frame->setFrameShape(QFrame::StyledPanel);
        trackPath_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(trackPath_frame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(20, 0, 0, 0);
        addFile_btn = new QToolButton(trackPath_frame);
        addFile_btn->setObjectName(QString::fromUtf8("addFile_btn"));
        addFile_btn->setEnabled(true);
        addFile_btn->setMinimumSize(QSize(35, 35));
        addFile_btn->setMaximumSize(QSize(35, 35));
        addFile_btn->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/SoundAround/images/addAudio32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        addFile_btn->setIcon(icon);
        addFile_btn->setIconSize(QSize(26, 26));
        addFile_btn->setToolButtonStyle(Qt::ToolButtonIconOnly);
        addFile_btn->setAutoRaise(false);

        horizontalLayout_2->addWidget(addFile_btn);

        head_lbl = new QLabel(trackPath_frame);
        head_lbl->setObjectName(QString::fromUtf8("head_lbl"));
        head_lbl->setEnabled(true);
        QFont font;
        font.setPointSize(10);
        head_lbl->setFont(font);
        head_lbl->setAcceptDrops(true);
        head_lbl->setStyleSheet(QString::fromUtf8(""));
        head_lbl->setScaledContents(true);
        head_lbl->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(head_lbl);


        verticalLayout_4->addWidget(trackPath_frame);

        nameAndTags_frame = new QFrame(TrackDialog);
        nameAndTags_frame->setObjectName(QString::fromUtf8("nameAndTags_frame"));
        nameAndTags_frame->setEnabled(true);
        nameAndTags_frame->setFrameShape(QFrame::StyledPanel);
        nameAndTags_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(nameAndTags_frame);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        name_gBox = new QGroupBox(nameAndTags_frame);
        name_gBox->setObjectName(QString::fromUtf8("name_gBox"));
        name_gBox->setEnabled(true);
        name_gBox->setFont(font);
        name_gBox->setAcceptDrops(false);
        horizontalLayout = new QHBoxLayout(name_gBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        name_lineEdit = new QLineEdit(name_gBox);
        name_lineEdit->setObjectName(QString::fromUtf8("name_lineEdit"));
        name_lineEdit->setEnabled(true);
        name_lineEdit->setAcceptDrops(false);

        horizontalLayout->addWidget(name_lineEdit);


        verticalLayout_5->addWidget(name_gBox);

        tagsHBox = new QHBoxLayout();
        tagsHBox->setSpacing(6);
        tagsHBox->setObjectName(QString::fromUtf8("tagsHBox"));
        tracksTags_gBox = new QGroupBox(nameAndTags_frame);
        tracksTags_gBox->setObjectName(QString::fromUtf8("tracksTags_gBox"));
        tracksTags_gBox->setEnabled(true);
        tracksTags_gBox->setFont(font);
        tracksTags_gBox->setAcceptDrops(false);
        verticalLayout = new QVBoxLayout(tracksTags_gBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tracksTags_listWidget = new QListWidget(tracksTags_gBox);
        tracksTags_listWidget->setObjectName(QString::fromUtf8("tracksTags_listWidget"));
        tracksTags_listWidget->setEnabled(true);
        tracksTags_listWidget->setAcceptDrops(false);
        tracksTags_listWidget->setFrameShape(QFrame::StyledPanel);
        tracksTags_listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tracksTags_listWidget->setProperty("showDropIndicator", QVariant(false));
        tracksTags_listWidget->setDragEnabled(false);
        tracksTags_listWidget->setDragDropOverwriteMode(false);
        tracksTags_listWidget->setDragDropMode(QAbstractItemView::DragOnly);
        tracksTags_listWidget->setDefaultDropAction(Qt::IgnoreAction);
        tracksTags_listWidget->setAlternatingRowColors(false);
        tracksTags_listWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tracksTags_listWidget->setMovement(QListView::Snap);
        tracksTags_listWidget->setWordWrap(true);

        verticalLayout->addWidget(tracksTags_listWidget);


        tagsHBox->addWidget(tracksTags_gBox);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        addTagToTrack_btn = new QToolButton(nameAndTags_frame);
        addTagToTrack_btn->setObjectName(QString::fromUtf8("addTagToTrack_btn"));
        addTagToTrack_btn->setEnabled(true);
        addTagToTrack_btn->setMinimumSize(QSize(30, 30));
        addTagToTrack_btn->setMaximumSize(QSize(30, 30));
        addTagToTrack_btn->setAcceptDrops(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/SoundAround/images/arrow-99-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        addTagToTrack_btn->setIcon(icon1);
        addTagToTrack_btn->setIconSize(QSize(24, 24));
        addTagToTrack_btn->setAutoRaise(true);

        verticalLayout_3->addWidget(addTagToTrack_btn);

        addTagToAllTags_btn = new QToolButton(nameAndTags_frame);
        addTagToAllTags_btn->setObjectName(QString::fromUtf8("addTagToAllTags_btn"));
        addTagToAllTags_btn->setEnabled(true);
        addTagToAllTags_btn->setMinimumSize(QSize(30, 30));
        addTagToAllTags_btn->setMaximumSize(QSize(30, 30));
        addTagToAllTags_btn->setAcceptDrops(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/SoundAround/images/arrow-34-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        addTagToAllTags_btn->setIcon(icon2);
        addTagToAllTags_btn->setIconSize(QSize(24, 24));
        addTagToAllTags_btn->setAutoRaise(true);

        verticalLayout_3->addWidget(addTagToAllTags_btn);

        toolButton_3 = new QToolButton(nameAndTags_frame);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setEnabled(true);
        toolButton_3->setMinimumSize(QSize(30, 30));
        toolButton_3->setMaximumSize(QSize(30, 30));
        toolButton_3->setAcceptDrops(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/SoundAround/images/plus-2-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon3);
        toolButton_3->setIconSize(QSize(24, 24));
        toolButton_3->setAutoRaise(true);

        verticalLayout_3->addWidget(toolButton_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        tagsHBox->addLayout(verticalLayout_3);

        allTags_gBox = new QGroupBox(nameAndTags_frame);
        allTags_gBox->setObjectName(QString::fromUtf8("allTags_gBox"));
        allTags_gBox->setEnabled(true);
        allTags_gBox->setFont(font);
        allTags_gBox->setAcceptDrops(false);
        verticalLayout_2 = new QVBoxLayout(allTags_gBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        allTags_listWidget = new QListWidget(allTags_gBox);
        allTags_listWidget->setObjectName(QString::fromUtf8("allTags_listWidget"));
        allTags_listWidget->setEnabled(true);
        allTags_listWidget->setAcceptDrops(false);
        allTags_listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        allTags_listWidget->setProperty("showDropIndicator", QVariant(false));
        allTags_listWidget->setDragEnabled(false);
        allTags_listWidget->setDragDropOverwriteMode(false);
        allTags_listWidget->setDragDropMode(QAbstractItemView::DragOnly);
        allTags_listWidget->setDefaultDropAction(Qt::IgnoreAction);
        allTags_listWidget->setAlternatingRowColors(false);
        allTags_listWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        allTags_listWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
        allTags_listWidget->setMovement(QListView::Snap);
        allTags_listWidget->setProperty("isWrapping", QVariant(false));
        allTags_listWidget->setModelColumn(0);
        allTags_listWidget->setWordWrap(true);
        allTags_listWidget->setSortingEnabled(false);

        verticalLayout_2->addWidget(allTags_listWidget);


        tagsHBox->addWidget(allTags_gBox);


        verticalLayout_5->addLayout(tagsHBox);


        verticalLayout_4->addWidget(nameAndTags_frame);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        ok_btn = new QPushButton(TrackDialog);
        ok_btn->setObjectName(QString::fromUtf8("ok_btn"));
        ok_btn->setEnabled(true);
        ok_btn->setMinimumSize(QSize(80, 25));
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
        ok_btn->setPalette(palette);
        ok_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 lightgreen, stop: 1 green);\n"
"    border-color: #008000;\n"
"    border-style: solid;\n"
"    border-width: 3px;\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; \n"
"}\n"
"QPushButton:default {\n"
"    border-color: #008000;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 royalblue, stop: 1 dodgerblue);\n"
"    border-style: inset;\n"
"}"));

        horizontalLayout_4->addWidget(ok_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        cancel_btn = new QPushButton(TrackDialog);
        cancel_btn->setObjectName(QString::fromUtf8("cancel_btn"));
        cancel_btn->setEnabled(true);
        cancel_btn->setMinimumSize(QSize(80, 25));
        QPalette palette1;
        QLinearGradient gradient9(0, 0, 0, 1);
        gradient9.setSpread(QGradient::PadSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0, QColor(144, 238, 144, 255));
        gradient9.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush11(gradient9);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        QLinearGradient gradient10(0, 0, 0, 1);
        gradient10.setSpread(QGradient::PadSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(0, QColor(144, 238, 144, 255));
        gradient10.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush12(gradient10);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush12);
        QLinearGradient gradient11(0, 0, 0, 1);
        gradient11.setSpread(QGradient::PadSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(0, QColor(144, 238, 144, 255));
        gradient11.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush13(gradient11);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush13);
        QLinearGradient gradient12(0, 0, 0, 1);
        gradient12.setSpread(QGradient::PadSpread);
        gradient12.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient12.setColorAt(0, QColor(144, 238, 144, 255));
        gradient12.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush14(gradient12);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        QLinearGradient gradient13(0, 0, 0, 1);
        gradient13.setSpread(QGradient::PadSpread);
        gradient13.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient13.setColorAt(0, QColor(144, 238, 144, 255));
        gradient13.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush15(gradient13);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush15);
        QLinearGradient gradient14(0, 0, 0, 1);
        gradient14.setSpread(QGradient::PadSpread);
        gradient14.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient14.setColorAt(0, QColor(144, 238, 144, 255));
        gradient14.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush16(gradient14);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush16);
        QLinearGradient gradient15(0, 0, 0, 1);
        gradient15.setSpread(QGradient::PadSpread);
        gradient15.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient15.setColorAt(0, QColor(144, 238, 144, 255));
        gradient15.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush17(gradient15);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        QLinearGradient gradient16(0, 0, 0, 1);
        gradient16.setSpread(QGradient::PadSpread);
        gradient16.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient16.setColorAt(0, QColor(144, 238, 144, 255));
        gradient16.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush18(gradient16);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush18);
        QLinearGradient gradient17(0, 0, 0, 1);
        gradient17.setSpread(QGradient::PadSpread);
        gradient17.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient17.setColorAt(0, QColor(144, 238, 144, 255));
        gradient17.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush19(gradient17);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush19);
        cancel_btn->setPalette(palette1);
        cancel_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 lightgreen, stop: 1 green);\n"
"    border-color: #008000;\n"
"    border-style: solid;\n"
"    border-width: 3px;\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:flat {\n"
"    border: none; \n"
"}\n"
"QPushButton:default {\n"
"    border-color: #008000;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #c82029, stop: 1 #f52735);\n"
"    border-style: inset;\n"
"}"));

        horizontalLayout_4->addWidget(cancel_btn);


        verticalLayout_4->addLayout(horizontalLayout_4);


        retranslateUi(TrackDialog);
        QObject::connect(addFile_btn, SIGNAL(clicked()), TrackDialog, SLOT(addFileSlot()));
        QObject::connect(addTagToTrack_btn, SIGNAL(clicked()), TrackDialog, SLOT(addTagToTrackSlot()));
        QObject::connect(addTagToAllTags_btn, SIGNAL(clicked()), TrackDialog, SLOT(addTagToBackSlot()));
        QObject::connect(toolButton_3, SIGNAL(clicked()), TrackDialog, SLOT(addNewTagSlot()));
        QObject::connect(cancel_btn, SIGNAL(clicked()), TrackDialog, SLOT(close()));
        QObject::connect(allTags_listWidget, SIGNAL(itemClicked(QListWidgetItem*)), TrackDialog, SLOT(allTagsItemClickedSlot()));
        QObject::connect(tracksTags_listWidget, SIGNAL(itemClicked(QListWidgetItem*)), TrackDialog, SLOT(trackTagsItemClickedSlot()));
        QObject::connect(ok_btn, SIGNAL(clicked()), TrackDialog, SLOT(acceptSlot()));

        QMetaObject::connectSlotsByName(TrackDialog);
    } // setupUi

    void retranslateUi(QDialog *TrackDialog)
    {
        TrackDialog->setWindowTitle(QCoreApplication::translate("TrackDialog", "TrackDialog", nullptr));
#if QT_CONFIG(tooltip)
        addFile_btn->setToolTip(QCoreApplication::translate("TrackDialog", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\243\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\321\203\321\202\321\214 \320\272 \320\260\321\203\320\264\320\270\320\276\321\204\320\260\320\271\320\273\321\203</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        addFile_btn->setText(QCoreApplication::translate("TrackDialog", "...", nullptr));
        head_lbl->setText(QCoreApplication::translate("TrackDialog", "\320\237\320\265\321\200\320\265\321\202\320\260\321\211\320\270 \321\202\321\200\321\215\320\272  \320\270\320\273\320\270 \321\203\320\272\320\260\320\266\320\270 \320\277\321\203\321\202\321\214 \320\272 \321\202\321\200\321\215\320\272\321\203", nullptr));
        name_gBox->setTitle(QCoreApplication::translate("TrackDialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\202\321\200\320\265\320\272\320\260", nullptr));
#if QT_CONFIG(tooltip)
        name_lineEdit->setToolTip(QCoreApplication::translate("TrackDialog", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\202\321\200\320\265\320\272\320\260, \320\272\320\276\321\202\320\276\321\200\320\276\320\265 \320\261\321\203\320\264\320\265\321\202 \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\260\321\202\321\214\321\201\321\217 \320\262 \321\201\320\277\320\270\321\201\320\272\320\265 \321\202\321\200\320\265\320\272\320\276\320\262</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tracksTags_gBox->setTitle(QCoreApplication::translate("TrackDialog", "\320\242\320\265\320\263\320\270 \321\202\321\200\320\265\320\272\320\260", nullptr));
#if QT_CONFIG(tooltip)
        tracksTags_listWidget->setToolTip(QCoreApplication::translate("TrackDialog", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\227\320\260\320\266\320\260\320\262 </span><span style=\" font-size:10pt; font-weight:600;\">Ctrl </span><span style=\" font-size:10pt;\">\320\274\320\276\320\266\320\275\320\276 \320\262\321\213\320\264\320\265\320\273\320\270\321\202\321\214 \320\275\320\265\321\201\320\272\320\276\320\273\321\214\320\272\320\276 \321\202\320\265\320\263\320\276\320\262.</span></p><p><span style=\" font-size:10pt; font-weight:600;\">Ctrl+A -</span><span style=\" font-size:10pt;\"> \320\262\321\213\320\264\320\265\320\273\320\270\321\202\321\214 \320\262\321\201\320\265 \321\202\320\265\320\263\320\270</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        addTagToTrack_btn->setToolTip(QCoreApplication::translate("TrackDialog", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\320\265\320\263 \320\262 \321\202\321\200\320\265\320\272</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        addTagToTrack_btn->setText(QCoreApplication::translate("TrackDialog", "<", nullptr));
#if QT_CONFIG(tooltip)
        addTagToAllTags_btn->setToolTip(QCoreApplication::translate("TrackDialog", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\243\320\261\321\200\320\260\321\202\321\214 \321\202\320\265\320\263 \320\270\320\267 \321\202\321\200\320\265\320\272\320\260</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        addTagToAllTags_btn->setText(QCoreApplication::translate("TrackDialog", ">", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_3->setToolTip(QCoreApplication::translate("TrackDialog", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \321\202\320\265\320\263</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_3->setText(QCoreApplication::translate("TrackDialog", "+", nullptr));
        allTags_gBox->setTitle(QCoreApplication::translate("TrackDialog", "\320\222\321\201\320\265 \321\202\320\265\320\263\320\270", nullptr));
#if QT_CONFIG(tooltip)
        allTags_listWidget->setToolTip(QCoreApplication::translate("TrackDialog", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\227\320\260\320\266\320\260\320\262 </span><span style=\" font-size:10pt; font-weight:600;\">Ctrl </span><span style=\" font-size:10pt;\">\320\274\320\276\320\266\320\275\320\276 \320\262\321\213\320\264\320\265\320\273\320\270\321\202\321\214 \320\275\320\265\321\201\320\272\320\276\320\273\321\214\320\272\320\276 \321\202\320\265\320\263\320\276\320\262.</span></p><p><span style=\" font-size:10pt; font-weight:600;\">Ctrl+A -</span><span style=\" font-size:10pt;\"> \320\262\321\213\320\264\320\265\320\273\320\270\321\202\321\214 \320\262\321\201\320\265 \321\202\320\265\320\263\320\270</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        ok_btn->setText(QCoreApplication::translate("TrackDialog", "\320\236\320\272", nullptr));
        cancel_btn->setText(QCoreApplication::translate("TrackDialog", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrackDialog: public Ui_TrackDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKDIALOG_H
