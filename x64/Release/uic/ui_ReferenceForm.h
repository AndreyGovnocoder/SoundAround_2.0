/********************************************************************************
** Form generated from reading UI file 'ReferenceForm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REFERENCEFORM_H
#define UI_REFERENCEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReferenceForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *addTrack_lbl;
    QLabel *editTrack_lbl;
    QLabel *removeTrack_lbl;
    QLabel *addTrackToPlaylist_lbl;
    QLabel *cleanPlaylist_lbl;
    QLabel *loopPlayTracks_lbl;
    QLabel *tagsFilter_lbl;
    QLabel *configs_lbl;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ReferenceForm)
    {
        if (ReferenceForm->objectName().isEmpty())
            ReferenceForm->setObjectName(QString::fromUtf8("ReferenceForm"));
        ReferenceForm->resize(700, 306);
        ReferenceForm->setMinimumSize(QSize(700, 250));
        ReferenceForm->setMaximumSize(QSize(700, 16777215));
        verticalLayout_2 = new QVBoxLayout(ReferenceForm);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(4, 4, 0, 4);
        frame = new QFrame(ReferenceForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 0));
        frame->setMaximumSize(QSize(16777215, 16777215));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(frame);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/SoundAround/images/add-new-track-16x16.png"), QSize(), QIcon::Normal, QIcon::Off);
        QBrush brush(QColor(46, 91, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QBrush brush1(QColor(46, 91, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        QFont font;
        font.setPointSize(10);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font);
        __qlistwidgetitem->setBackground(brush1);
        __qlistwidgetitem->setForeground(brush);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/SoundAround/images/edit-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        QBrush brush2(QColor(46, 91, 0, 255));
        brush2.setStyle(Qt::NoBrush);
        QBrush brush3(QColor(46, 91, 0, 255));
        brush3.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setFont(font);
        __qlistwidgetitem1->setBackground(brush3);
        __qlistwidgetitem1->setForeground(brush2);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/SoundAround/images/delete-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        QBrush brush4(QColor(46, 91, 0, 255));
        brush4.setStyle(Qt::NoBrush);
        QBrush brush5(QColor(46, 91, 0, 255));
        brush5.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setFont(font);
        __qlistwidgetitem2->setBackground(brush5);
        __qlistwidgetitem2->setForeground(brush4);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/SoundAround/images/add-to-list-16x16.png"), QSize(), QIcon::Normal, QIcon::Off);
        QBrush brush6(QColor(46, 91, 0, 255));
        brush6.setStyle(Qt::NoBrush);
        QBrush brush7(QColor(46, 91, 0, 255));
        brush7.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setFont(font);
        __qlistwidgetitem3->setBackground(brush7);
        __qlistwidgetitem3->setForeground(brush6);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/SoundAround/images/clean-16x16.png"), QSize(), QIcon::Normal, QIcon::Off);
        QBrush brush8(QColor(46, 91, 0, 255));
        brush8.setStyle(Qt::NoBrush);
        QBrush brush9(QColor(46, 91, 0, 255));
        brush9.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setFont(font);
        __qlistwidgetitem4->setBackground(brush9);
        __qlistwidgetitem4->setForeground(brush8);
        __qlistwidgetitem4->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/SoundAround/images/loop-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        QBrush brush10(QColor(46, 91, 0, 255));
        brush10.setStyle(Qt::NoBrush);
        QBrush brush11(QColor(46, 91, 0, 255));
        brush11.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget);
        __qlistwidgetitem5->setFont(font);
        __qlistwidgetitem5->setBackground(brush11);
        __qlistwidgetitem5->setForeground(brush10);
        __qlistwidgetitem5->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/SoundAround/images/tag-2-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        QBrush brush12(QColor(46, 91, 0, 255));
        brush12.setStyle(Qt::NoBrush);
        QBrush brush13(QColor(46, 91, 0, 255));
        brush13.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget);
        __qlistwidgetitem6->setFont(font);
        __qlistwidgetitem6->setBackground(brush13);
        __qlistwidgetitem6->setForeground(brush12);
        __qlistwidgetitem6->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/SoundAround/images/cog-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        QBrush brush14(QColor(46, 91, 0, 255));
        brush14.setStyle(Qt::NoBrush);
        QBrush brush15(QColor(46, 91, 0, 255));
        brush15.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget);
        __qlistwidgetitem7->setFont(font);
        __qlistwidgetitem7->setBackground(brush15);
        __qlistwidgetitem7->setForeground(brush14);
        __qlistwidgetitem7->setIcon(icon7);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(255, 0));
        listWidget->setMaximumSize(QSize(250, 16777215));
        QPalette palette;
        QBrush brush16(QColor(255, 255, 255, 0));
        brush16.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush16);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush16);
        QBrush brush17(QColor(240, 240, 240, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        listWidget->setPalette(palette);
        listWidget->setFrameShape(QFrame::Box);
        listWidget->setFrameShadow(QFrame::Sunken);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setProperty("showDropIndicator", QVariant(false));
        listWidget->setDragEnabled(false);
        listWidget->setDragDropOverwriteMode(false);
        listWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
        listWidget->setDefaultDropAction(Qt::CopyAction);
        listWidget->setAlternatingRowColors(false);
        listWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        listWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        listWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget->setMovement(QListView::Static);
        listWidget->setProperty("isWrapping", QVariant(true));
        listWidget->setResizeMode(QListView::Fixed);
        listWidget->setLayoutMode(QListView::Batched);
        listWidget->setSpacing(1);
        listWidget->setViewMode(QListView::ListMode);
        listWidget->setUniformItemSizes(false);
        listWidget->setWordWrap(true);
        listWidget->setSelectionRectVisible(true);
        listWidget->setItemAlignment(Qt::AlignLeading);

        verticalLayout_3->addWidget(listWidget);


        horizontalLayout_2->addLayout(verticalLayout_3);

        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush16);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush16);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        scrollArea->setPalette(palette1);
        scrollArea->setFrameShape(QFrame::Box);
        scrollArea->setFrameShadow(QFrame::Sunken);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -498, 410, 2292));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addTrack_lbl = new QLabel(scrollAreaWidgetContents);
        addTrack_lbl->setObjectName(QString::fromUtf8("addTrack_lbl"));
        addTrack_lbl->setWordWrap(true);

        verticalLayout->addWidget(addTrack_lbl);

        editTrack_lbl = new QLabel(scrollAreaWidgetContents);
        editTrack_lbl->setObjectName(QString::fromUtf8("editTrack_lbl"));
        editTrack_lbl->setWordWrap(true);

        verticalLayout->addWidget(editTrack_lbl);

        removeTrack_lbl = new QLabel(scrollAreaWidgetContents);
        removeTrack_lbl->setObjectName(QString::fromUtf8("removeTrack_lbl"));
        removeTrack_lbl->setWordWrap(true);

        verticalLayout->addWidget(removeTrack_lbl);

        addTrackToPlaylist_lbl = new QLabel(scrollAreaWidgetContents);
        addTrackToPlaylist_lbl->setObjectName(QString::fromUtf8("addTrackToPlaylist_lbl"));
        addTrackToPlaylist_lbl->setWordWrap(true);

        verticalLayout->addWidget(addTrackToPlaylist_lbl);

        cleanPlaylist_lbl = new QLabel(scrollAreaWidgetContents);
        cleanPlaylist_lbl->setObjectName(QString::fromUtf8("cleanPlaylist_lbl"));
        cleanPlaylist_lbl->setWordWrap(true);

        verticalLayout->addWidget(cleanPlaylist_lbl);

        loopPlayTracks_lbl = new QLabel(scrollAreaWidgetContents);
        loopPlayTracks_lbl->setObjectName(QString::fromUtf8("loopPlayTracks_lbl"));
        loopPlayTracks_lbl->setWordWrap(true);

        verticalLayout->addWidget(loopPlayTracks_lbl);

        tagsFilter_lbl = new QLabel(scrollAreaWidgetContents);
        tagsFilter_lbl->setObjectName(QString::fromUtf8("tagsFilter_lbl"));
        tagsFilter_lbl->setWordWrap(true);

        verticalLayout->addWidget(tagsFilter_lbl);

        configs_lbl = new QLabel(scrollAreaWidgetContents);
        configs_lbl->setObjectName(QString::fromUtf8("configs_lbl"));
        configs_lbl->setWordWrap(true);

        verticalLayout->addWidget(configs_lbl);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_2->addWidget(scrollArea);


        verticalLayout_2->addWidget(frame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(ReferenceForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(80, 25));
        pushButton->setMaximumSize(QSize(80, 25));
        QPalette palette2;
        QLinearGradient gradient(0, 0, 0, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(144, 238, 144, 255));
        gradient.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush18(gradient);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush18);
        QBrush brush19(QColor(243, 243, 243, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush19);
        QLinearGradient gradient1(0, 0, 0, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(144, 238, 144, 255));
        gradient1.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush20(gradient1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush20);
        QLinearGradient gradient2(0, 0, 0, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(144, 238, 144, 255));
        gradient2.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush21(gradient2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush21);
        QLinearGradient gradient3(0, 0, 0, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(144, 238, 144, 255));
        gradient3.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush22(gradient3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush22);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush19);
        QLinearGradient gradient4(0, 0, 0, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(144, 238, 144, 255));
        gradient4.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush23(gradient4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush23);
        QLinearGradient gradient5(0, 0, 0, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(144, 238, 144, 255));
        gradient5.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush24(gradient5);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush24);
        QLinearGradient gradient6(0, 0, 0, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(144, 238, 144, 255));
        gradient6.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush25(gradient6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush25);
        QBrush brush26(QColor(120, 120, 120, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush26);
        QLinearGradient gradient7(0, 0, 0, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(144, 238, 144, 255));
        gradient7.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush27(gradient7);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush27);
        QLinearGradient gradient8(0, 0, 0, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(144, 238, 144, 255));
        gradient8.setColorAt(1, QColor(0, 128, 0, 255));
        QBrush brush28(gradient8);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush28);
        pushButton->setPalette(palette2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 lightgreen, stop: 1 green);\n"
"    border-color: #008000;\n"
"    border-style: inset;\n"
"    border-width: 3px;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:flat \n"
"{\n"
"    border: none; \n"
"}\n"
"\n"
"QPushButton:hover \n"
"{\n"
"	  border-style: outset;\n"
"}\n"
"\n"
"QPushButton:default \n"
"{\n"
"    border-color: #008000;\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #c82029, stop: 1 #f52735);\n"
"    border-style: inset;\n"
"}"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(ReferenceForm);
        QObject::connect(pushButton, SIGNAL(clicked()), ReferenceForm, SLOT(close()));
        QObject::connect(listWidget, SIGNAL(clicked(QModelIndex)), ReferenceForm, SLOT(itemActivated(QModelIndex)));

        QMetaObject::connectSlotsByName(ReferenceForm);
    } // setupUi

    void retranslateUi(QDialog *ReferenceForm)
    {
        ReferenceForm->setWindowTitle(QCoreApplication::translate("ReferenceForm", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("ReferenceForm", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\275\320\276\320\262\320\276\320\263\320\276 \321\202\321\200\320\265\320\272\320\260", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("ReferenceForm", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \321\202\321\200\320\265\320\272\320\260", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("ReferenceForm", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \321\202\321\200\320\265\320\272\320\260", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("ReferenceForm", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\202\321\200\320\265\320\272\320\260 \320\262 \321\201\320\277\320\270\321\201\320\276\320\272 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("ReferenceForm", "\320\236\321\207\320\270\321\201\321\202\320\272\320\260 \321\201\320\277\320\270\321\201\320\272\320\260 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("ReferenceForm", "\320\227\320\260\321\206\320\270\320\272\320\273\320\270\320\262\320\260\320\275\320\270\320\265 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("ReferenceForm", "\320\242\320\265\320\263\320\270                            ", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("ReferenceForm", "\320\235\320\260\321\201\321\202\321\200\320\276\320\272\320\270", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        addTrack_lbl->setText(QCoreApplication::translate("ReferenceForm", "<html><head/><body><p align=\"justify\"><span style=\" font-size:12pt; font-weight:600;\">\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\275\320\276\320\262\320\276\320\263\320\276 \321\202\321\200\320\265\320\272\320\260</span></p><p align=\"justify\"><span style=\" font-size:11pt;\">\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \321\202\321\200\320\265\320\272 \320\274\320\276\320\266\320\275\320\276 \320\264\320\262\321\203\320\274\321\217 \321\201\320\277\320\276\321\201\320\276\320\261\320\260\320\274\320\270:</span></p><p align=\"justify\"><span style=\" font-size:11pt;\">1) \320\222\321\213\320\267\320\262\320\260\321\202\321\214 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\320\265 \321\202\321\200\320\265\320\272\320\276\320\262 \320\272\320\276\320\275\321\202\320\265\320\272\321\201\321\202\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\277\321\200\320\260\320\262\320\276\320"
                        "\271 \320\272\320\275\320\276\320\277\320\272\320\276\320\271 \320\274\321\213\321\210\320\270 \320\270 \320\262\321\213\320\261\321\200\320\260\321\202\321\214 </span><img src=\":/SoundAround/images/add-new-track-16x16.png\"/><span style=\" font-size:11pt; font-style:italic;\">&quot;\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214&quot;</span><span style=\" font-size:11pt;\"> ;</span></p><p align=\"justify\"><span style=\" font-size:11pt;\">2) \320\235\320\260\320\266\320\260\321\202\321\214 \320\272\320\275\320\276\320\277\320\272\321\203 </span><img src=\":/SoundAround/images/add-new-track-16x16.png\"/><span style=\" font-size:11pt; font-style:italic;\">&quot;\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \321\202\321\200\320\265\320\272&quot;</span><span style=\" font-size:11pt;\"> .</span></p><p align=\"justify\"><span style=\" font-size:11pt;\">\320\237\320\276\321\201\320\273\320\265 \321\215\321\202\320\276\320\263\320\276 \320\276"
                        "\321\202\320\272\321\200\320\276\320\265\321\202\321\201\321\217 \320\264\320\270\320\260\320\273\320\276\320\263\320\276\320\262\320\276\320\265 \320\276\320\272\320\275\320\276, \320\262 \320\272\320\276\321\202\320\276\321\200\320\276\320\274 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \320\273\320\270\320\261\320\276 \320\277\320\265\321\200\320\265\321\202\320\260\321\211\320\270\321\202\321\214 \320\264\320\276\320\261\320\260\320\262\320\273\321\217\320\265\320\274\321\213\320\271 \321\202\321\200\320\265\320\272 \320\262 \320\276\320\272\320\275\320\276, \320\273\320\270\320\261\320\276 \321\203\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\321\203\321\202\321\214 \320\272 \321\202\321\200\320\265\320\272\321\203, \320\275\320\260\320\266\320\260\320\262 \320\272\320\275\320\276\320\277\320\272\321\203 </span><img src=\":/SoundAround/images/addAudio16x16.png\"/><span style=\" font-size:11pt; font-style:italic;\"> &quot;\320\243\320\272\320\260\320\267\320"
                        "\260\321\202\321\214 \320\277\321\203\321\202\321\214 \320\272 \320\260\321\203\320\264\320\270\320\276\321\204\320\260\320\271\320\273\321\203&quot;</span><span style=\" font-size:11pt;\"> . \320\227\320\260\321\202\320\265\320\274 \320\275\320\260\320\264\320\276 \321\203\320\272\320\260\320\267\320\260\321\202\321\214 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\202\321\200\320\265\320\272\320\260, \321\215\321\202\320\276 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\261\321\203\320\264\320\265\321\202 \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\260\321\202\321\214\321\201\321\217 \320\262 \321\201\320\277\320\270\321\201\320\272\320\265 \320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\275\321\213\321\205 \321\202\321\200\320\265\320\272\320\276\320\262. \320\225\321\201\320\273\320\270 \321\202\321\200\320\265\320\272 \321\201 \321\202\320\260\320\272\320\270\320\274 \320\275\320\260\320\267\320\262\320\260\320\275\320\270"
                        "\320\265\320\274 \321\203\320\266\320\265 \321\201\321\203\321\211\320\265\321\201\321\202\320\262\321\203\320\265\321\202, \321\202\320\276 \320\275\320\260\320\264\320\276 \320\277\321\200\320\270\320\264\321\203\320\274\320\260\321\202\321\214 \320\264\321\200\321\203\320\263\320\276\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265. \320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\277\320\276\320\264\320\264\320\265\321\200\320\266\320\270\320\262\320\260\320\265\321\202 \321\201\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\265 \321\204\320\276\321\200\320\274\320\260\321\202\321\213: </span><span style=\" font-size:11pt; font-weight:600; font-style:italic;\">mp3, wav, ogg, ape, flac, aiff </span><span style=\" font-size:11pt;\">\320\270 \320\264\321\200\321\203\320\263\320\270\320\265.</span></p><p align=\"justify\"><span style=\" font-size:11pt; color:#ff0000;\">\320\222\320\275\320\270\320\274\320\260\320\275\320\270\320\265! </span><spa"
                        "n style=\" font-size:11pt;\">\320\237\320\276\320\273\320\265 \320\262\320\262\320\276\320\264\320\260 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\321\217 \321\202\321\200\320\265\320\272\320\260</span><span style=\" font-size:11pt; font-weight:600;\"> \320\275\320\265</span><span style=\" font-size:11pt;\"> \320\264\320\276\320\273\320\266\320\275\320\276 \320\261\321\213\321\202\321\214 \320\277\321\203\321\201\321\202\321\213\320\274! \320\230\320\275\320\260\321\207\320\265 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\275\320\265 \320\277\320\276\320\267\320\262\320\276\320\273\320\270\321\202 \320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\321\200\320\265\320\272. </span></p><p align=\"justify\"><span style=\" font-size:11pt;\">\320\237\321\200\320\270 \320\266\320\265\320\273\320\260\320\275\320\270\320\270 \320\274\320\276\320\266\320\275\320\276 \320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\265\320\276"
                        "\320\263\321\200\320\260\320\275\320\270\321\207\320\265\320\275\320\275\320\276\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\202\320\265\320\263\320\276\320\262 - \320\264\320\273\321\217 \321\215\321\202\320\276\320\263\320\276 \320\275\320\260\320\264\320\276 \320\262\321\213\320\264\320\265\320\273\320\270\321\202\321\214 \320\266\320\265\320\273\320\260\320\265\320\274\321\213\320\265 \321\202\320\265\320\263\320\270 \320\262 \320\277\321\200\320\260\320\262\320\276\320\271 \320\272\320\276\320\273\320\276\320\275\320\272\320\265 (\320\264\320\273\321\217 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\270\321\217 \320\275\320\265\321\201\320\272\320\276\320\273\321\214\320\272\320\270\321\205 \321\202\320\265\320\263\320\276\320\262 \320\267\320\260\320\266\320\260\321\202\321\214 \320\272\320\273\320\260\320\262\320\270\321\210\321\203 Ctrl) \320\270 \320\275\320\260\320\266\320\260\321\202\321\214 \321\201\320\276\320\276\321\202\320\262\320"
                        "\265\321\202\321\201\321\202\320\262\321\203\321\216\321\211\321\203\321\216 \320\272\320\275\320\276\320\277\320\272\321\203 </span><img src=\":/SoundAround/images/arrow-99-16.png\"/><span style=\" font-size:11pt;\">. \320\247\321\202\320\276 \320\261\321\213 \320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \321\202\320\265\320\263, \320\275\320\260\320\264\320\276 \320\275\320\260\320\266\320\260\321\202\321\214 \320\272\320\275\320\276\320\277\320\272\321\203 </span><img src=\":/SoundAround/images/plus-2-16.png\"/><span style=\" font-size:11pt;\"> \320\270 \320\262\320\262\320\265\321\201\321\202\320\270 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\263\320\260. </span></p><p align=\"justify\"><span style=\" font-size:11pt;\">\320\237\320\276\321\201\320\273\320\265 \320\262\321\201\320\265\321\205 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\320\271 \320\275\320\260\320\266\320\274\320\270 \320\272\320"
                        "\275\320\276\320\277\320\272\321\203 </span><span style=\" font-size:11pt; font-style:italic;\">&quot;\320\236\320\272&quot;</span><span style=\" font-size:11pt;\"> \320\270 \321\202\321\200\320\265\320\272 \320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214\321\201\321\217 \320\262 \321\201\320\277\320\270\321\201\320\276\320\272. \320\225\321\201\320\273\320\270 \320\262 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260\321\205 \320\262\320\272\320\273\321\216\321\207\320\265\320\275\320\260 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\321\203\321\216\321\211\320\260\321\217 \321\204\321\203\320\275\320\272\321\206\320\270\321\217, \321\202\320\276 \320\275\320\276\320\262\321\213\320\271 \321\202\321\200\320\265\320\272 \320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270 \320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\201\321\217 \320\262 \321\201\320\277\320\270\321\201\320"
                        "\276\320\272 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217.</span></p></body></html>", nullptr));
        editTrack_lbl->setText(QCoreApplication::translate("ReferenceForm", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \321\202\321\200\320\265\320\272\320\260</span></p><p><span style=\" font-size:11pt;\">\320\224\320\273\321\217 \321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \321\202\321\200\320\265\320\272\320\260 \320\275\320\260\320\264\320\276 \320\262\321\213\320\264\320\265\320\273\320\270\321\202\321\214 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\320\265 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\321\213\320\271 \321\202\321\200\320\265\320\272, \320\262\321\213\320\267\320\262\320\260\321\202\321\214 \320\272\320\276\320\275\321\202\320\265\320\272\321\201\321\202\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\277\321\200\320\260\320\262\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\276\320\271 \320"
                        "\274\321\213\321\210\320\270 \320\270 \320\262\321\213\320\261\321\200\320\260\321\202\321\214 </span><img src=\":/SoundAround/images/edit-16.png\"/><span style=\" font-size:11pt; font-style:italic;\">&quot;\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214&quot;</span><span style=\" font-size:11pt;\">. \320\222 \320\276\321\202\320\272\321\200\321\213\320\262\321\210\320\265\320\274\321\201\321\217 \320\264\320\270\320\260\320\273\320\276\320\263\320\276\320\262\320\276\320\274 \320\276\320\272\320\275\320\265 \320\277\321\200\320\276\320\270\320\267\320\262\320\265\321\201\321\202\320\270 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\321\213\320\265 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \320\270 \320\275\320\260\320\266\320\260\321\202\321\214 \320\272\320\275\320\276\320\277\320\272\321\203 &quot;\320\236\320\272&quot;. </span></p><p><span style=\" font-size:11pt; color:#ff0000;\">\320\222\320"
                        "\275\320\270\320\274\320\260\320\275\320\270\320\265! </span><span style=\" font-size:11pt;\">\320\237\320\276\320\273\320\265 \320\262\320\262\320\276\320\264\320\260 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\321\217 \321\202\321\200\320\265\320\272\320\260</span><span style=\" font-size:11pt; font-weight:600;\"> \320\275\320\265</span><span style=\" font-size:11pt;\"> \320\264\320\276\320\273\320\266\320\275\320\276 \320\261\321\213\321\202\321\214 \320\277\321\203\321\201\321\202\321\213\320\274! \320\230\320\275\320\260\321\207\320\265 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\275\320\265 \320\277\320\276\320\267\320\262\320\276\320\273\320\270\321\202 \321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217.</span></p></body></html>", nullptr));
        removeTrack_lbl->setText(QCoreApplication::translate("ReferenceForm", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \321\202\321\200\320\265\320\272\320\260</span></p><p><span style=\" font-size:11pt;\">\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\202\321\200\320\265\320\272 \320\274\320\276\320\266\320\275\320\276 \320\264\320\262\321\203\320\274\321\217 \321\201\320\277\320\276\321\201\320\276\320\261\320\260\320\274\320\270:</span></p><p><span style=\" font-size:11pt;\">1) \320\222\321\213\320\264\320\265\320\273\320\270\321\202\321\214 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\320\265 \320\275\321\203\320\266\320\275\321\213\320\271 \321\202\321\200\320\265\320\272, \320\262\321\213\320\267\320\262\320\260\321\202\321\214 \320\272\320\276\320\275\321\202\320\265\320\272\321\201\321\202\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\277\321\200\320\260\320\262\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\276\320\271 \320\274"
                        "\321\213\321\210\320\270 \320\270 \320\262\321\213\320\261\321\200\320\260\321\202\321\214 </span><img src=\":/SoundAround/images/delete-16.png\"/><span style=\" font-size:11pt; font-style:italic;\">&quot;\320\243\320\264\320\260\320\273\320\270\321\202\321\214&quot;</span><span style=\" font-size:11pt;\"> ;</span></p><p><span style=\" font-size:11pt;\">2) \320\222\321\213\320\264\320\265\320\273\320\270\321\202\321\214 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\320\265 \320\275\321\203\320\266\320\275\321\213\320\271 \321\202\321\200\320\265\320\272 \320\270 \320\275\320\260\320\266\320\260\321\202\321\214 \320\272\320\275\320\276\320\277\320\272\321\203 </span><span style=\" font-size:11pt; font-style:italic;\">d</span><span style=\" font-size:11pt; font-style:italic;\">elete</span><span style=\" font-size:11pt;\">.</span></p><p><span style=\" font-size:11pt;\">\320\230 \320\267\320\260\321\202\320\265\320\274 \320\277\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321"
                        "\214 \321\203\320\264\320\260\320\273\320\265\320\275\320\270\320\265. </span></p><p><span style=\" font-size:11pt; color:#ff0000;\">\320\222\320\275\320\270\320\274\320\260\320\275\320\270\320\265! </span><span style=\" font-size:11pt; color:#000000;\">\320\225\321\201\320\273\320\270 \321\202\321\200\320\265\320\272 \320\265\321\201\321\202\321\214 \320\262 \321\201\320\277\320\270\321\201\320\272\320\265 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217, \321\202\320\276 \320\265\320\263\320\276 \321\203\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\275\320\265\320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276. \320\227\320\260\320\272\321\200\320\276\320\271 \321\202\321\200\320\265\320\272 \320\262 \321\201\320\277\320\270\321\201\320\272\320\265 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217 \320\270 \320\277\320\276\320\262\321\202\320"
                        "\276\321\200\320\270 \320\277\321\200\320\276\321\206\320\265\320\264\321\203\321\200\321\203 \321\203\320\264\320\260\320\273\320\265\320\275\320\270\321\217.</span></p></body></html>", nullptr));
        addTrackToPlaylist_lbl->setText(QCoreApplication::translate("ReferenceForm", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\202\321\200\320\265\320\272\320\260 \320\262 \321\201\320\277\320\270\321\201\320\276\320\272 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217</span></p><p><span style=\" font-size:11pt;\">\320\224\320\273\321\217 \321\202\320\276\320\263\320\276 \321\207\321\202\320\276 \320\261\321\213 \320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\321\200\320\265\320\272 \320\262 \321\201\320\277\320\270\321\201\320\276\320\272 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217 \320\275\320\260\320\264\320\276 \320\262\321\213\320\267\320\262\320\260\321\202\321\214 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\320\265 \321\202\321\200\320\265\320\272\320\276\320\262 \320\272\320\276\320\275"
                        "\321\202\320\265\320\272\321\201\321\202\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\277\321\200\320\260\320\262\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\276\320\271 \320\274\321\213\321\210\320\270 \320\270 \320\262\321\213\320\261\321\200\320\260\321\202\321\214 </span><img src=\":/SoundAround/images/add-to-list-16x16.png\"/><span style=\" font-size:11pt; font-style:italic;\">&quot;\320\222 \321\201\320\277\320\270\321\201\320\276\320\272&quot;</span><span style=\" font-size:11pt;\">, \320\277\320\276\321\201\320\273\320\265 \321\215\321\202\320\276\320\263\320\276 \320\262 \321\201\320\277\320\270\321\201\320\272\320\265 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217 \320\277\320\276\321\217\320\262\320\270\321\202\321\201\321\217 \320\260\321\203\320\264\320\270\320\276\320\264\320\276\321\200\320\276\320\266\320\272\320\260 \321\201 \321\203\320\266\320\265 \320\262\321\213\320\261\321\200\320\260"
                        "\320\275\320\275\321\213\320\274 \321\202\321\200\320\265\320\272\320\276\320\274.</span></p><p><span style=\" font-size:11pt;\">\320\242\320\260\320\272\320\266\320\265, \320\274\320\276\320\266\320\275\320\276 \320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\321\203\321\201\321\202\321\203\321\216 \320\260\321\203\320\264\320\270\320\276\320\264\320\276\321\200\320\276\320\266\320\272\321\203, \320\275\320\260\320\266\320\260\320\262 \320\272\320\275\320\276\320\277\320\272\321\203 </span><img src=\":/SoundAround/images/add-to-list-16x16.png\"/><span style=\" font-size:11pt; font-style:italic;\">&quot;\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\321\203\321\201\321\202\321\203\321\216 \320\260\321\203\320\264\320\270\320\276\320\264\320\276\321\200\320\276\320\266\320\272\321\203&quot;</span><span style=\" font-size:11pt;\"> \320\270 \320\267\320\260\321\202\320\265\320\274 \320\262\321\213\320\261\321\200\320\260\321\202\321\214 \320\275\321\203\320\266\320"
                        "\275\321\213\320\271 \321\202\321\200\320\265\320\272 \320\270\320\267 \320\262\321\213\320\277\320\260\320\264\320\260\321\216\321\211\320\265\320\263\320\276 \320\274\320\265\320\275\321\216.</span></p></body></html>", nullptr));
        cleanPlaylist_lbl->setText(QCoreApplication::translate("ReferenceForm", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\320\236\321\207\320\270\321\201\321\202\320\272\320\260 \321\201\320\277\320\270\321\201\320\272\320\260 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217</span></p><p><span style=\" font-size:11pt;\">\320\247\321\202\320\276 \320\261\321\213 \321\203\320\264\320\260\320\273\320\270\321\202\321\214 </span><span style=\" font-size:11pt; font-weight:600; font-style:italic;\">\320\262\321\201\320\265</span><span style=\" font-size:11pt;\"> \321\202\321\200\320\265\320\272\320\270 \320\270\320\267 \321\201\320\277\320\270\321\201\320\272\320\260 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217 \320\264\320\276\321\201\321\202\320\260\321\202\320\276\321\207\320\275\320\276 \320\275\320\260\320\266\320\260\321\202\321\214 \320\272\320\275\320\276\320\277\320\272\321\203 </span><img src=\":/SoundAround/i"
                        "mages/clean-16x16.png\"/><span style=\" font-size:11pt;\"> &quot;\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\202\320\265\320\272\321\203\321\211\320\270\320\271 \321\201\320\277\320\270\321\201\320\276\320\272 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217&quot;. \320\242\320\276\320\263\320\264\320\260 \320\262\321\201\320\265 \320\260\321\203\320\264\320\270\320\276\320\264\320\276\321\200\320\276\320\266\320\272\320\270 \321\201 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\274\320\270 \321\202\321\200\320\265\320\272\320\260\320\274\320\270 \320\261\321\203\320\264\321\203\321\202 \321\203\320\264\320\260\320\273\320\265\320\275\321\213 \320\270\320\267 \321\201\320\277\320\270\321\201\320\272\320\260 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217.</span></p></body></html>", nullptr));
        loopPlayTracks_lbl->setText(QCoreApplication::translate("ReferenceForm", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\320\227\320\260\321\206\320\270\320\272\320\273\320\270\320\262\320\260\320\275\320\270\320\265 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217</span></p><p><span style=\" font-size:11pt;\">\320\247\321\202\320\276 \320\261\321\213 \320\267\320\260\321\206\320\270\320\272\320\273\320\270\321\202\321\214 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\320\265 \321\202\321\200\320\265\320\272\320\260 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \320\262\320\272\320\273\321\216\321\207\320\270\321\202\321\214 </span><img src=\":/SoundAround/images/loop-16.png\"/><span style=\" font-size:11pt; font-style:italic;\"> &quot;\320\227\320\260\321\206\320\270\320\272\320\273\320\270\321\202\321\214&quot;.</span></p><p><span style=\" font-size:11pt;\">\320\234\320\276\320\266\320"
                        "\275\320\276 \320\267\320\260\320\264\320\260\321\202\321\214 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\277\320\260\321\203\320\267\321\213 \320\274\320\265\320\266\320\264\321\203 \320\277\320\276\320\262\321\202\320\276\321\200\320\275\321\213\320\274 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\320\265\320\274 \320\276\321\202 \320\270 \320\264\320\276 \320\262 \321\201\320\265\320\272\321\203\320\275\320\264\320\260\321\205. \320\225\321\201\320\273\320\270 \320\275\320\260\321\207\320\260\320\273\321\214\320\275\320\276\320\265 \320\270 \320\272\320\276\320\275\320\265\321\207\320\275\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\277\320\260\321\203\320\267\321\213 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217 \320\276\320\264\320\270\320\275\320\260\320\272\320\276\320\262\321\213\320\265, \321\202"
                        "\320\276 \320\277\320\260\321\203\320\267\320\260 \320\261\321\203\320\264\320\265\321\202 \321\204\320\270\320\272\321\201\320\270\321\200\320\276\320\262\320\260\320\275\320\275\320\260\321\217 \320\270 \321\200\320\260\320\262\320\275\320\260\321\217 \321\215\321\202\320\276\320\274\321\203 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\216. \320\225\321\201\320\273\320\270 \320\262\320\262\320\265\321\201\321\202\320\270 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\276\321\202 3 \320\264\320\276 9, \321\202\320\276 \320\272\320\260\320\266\320\264\321\213\320\271 \321\200\320\260\320\267 \320\277\321\200\320\270 \320\277\320\276\320\262\321\202\320\276\321\200\320\275\320\276\320\274 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\320\270 \320\277\320\260\321\203\320\267\320\260 \320\261\321\203\320\264\320\265\321\202 \320\262\321\213\320\261\321\200\320\260\320\275\320\260 \321\201\320\273\321\203\321\207"
                        "\320\260\320\271\320\275\321\213\320\274 \320\276\320\261\321\200\320\260\320\267\320\276\320\274 \320\262 \320\264\320\270\320\260\320\277\320\260\320\267\320\276\320\275\320\265 \320\276\321\202 3 \321\201\320\265\320\272\321\203\320\275\320\264 \320\264\320\276 9 \321\201\320\265\320\272\321\203\320\275\320\264.</span></p></body></html>", nullptr));
        tagsFilter_lbl->setText(QCoreApplication::translate("ReferenceForm", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\320\242\320\265\320\263\320\270</span></p><p><span style=\" font-size:11pt;\">\320\224\320\273\321\217 \321\204\320\270\320\273\321\214\321\202\321\200\320\260\321\206\320\270\320\270 \321\201\320\277\320\270\321\201\320\272\320\260 \321\202\321\200\320\265\320\272\320\276\320\262 \320\277\320\276 \321\202\320\265\320\263\320\260\320\274 \320\264\320\276\321\201\321\202\320\260\321\202\320\276\321\207\320\275\320\276 \320\262\321\213\320\261\321\200\320\260\321\202\321\214 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\321\213\320\271 \321\202\320\265\320\263 \320\262 \320\262\321\213\320\277\320\260\320\264\320\260\321\216\321\211\320\265\320\274 \321\201\320\277\320\270\321\201\320\272\320\265, \320\275\320\260\321\205\320\276\320\264\321\217\321\211\320\270\320\271\321\201\321\217 \321\201\320\262\320\265\321\200\321\205\321\203 \321\202\320\260\320\261\320\273\320\270\321\206\321\213 \321\202\321\200\320\265\320"
                        "\272\320\276\320\262, \320\260 \320\262 \320\260\321\203\320\264\320\270\320\276\320\264\320\276\321\200\320\276\320\266\320\272\320\265 - \320\262\320\275\320\270\320\267\321\203 \320\277\320\276\320\264 \321\202\320\260\320\271\320\274\320\273\320\260\320\271\320\275\320\276\320\274. \320\237\320\276\321\201\320\273\320\265 \320\262\321\213\320\261\320\276\321\200\320\260 \321\202\320\265\320\263\320\260 \321\201\320\277\320\270\321\201\320\276\320\272 \321\202\321\200\320\265\320\272\320\276\320\262 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\320\265 \320\270\320\273\320\270 \320\262 \320\262\321\213\320\277\320\260\320\264\320\260\321\216\321\211\320\265\320\274 \321\201\320\277\320\270\321\201\320\272\320\265 \320\261\321\203\320\264\320\265\321\202 \321\201\320\276\321\201\321\202\320\276\321\217\321\202\321\214 \321\202\320\276\320\273\321\214\320\272\320\276 \320\270\320\267 \321\202\320\265\321\205 \321\202\321\200\320\265\320\272\320\276\320\262, \320\262 \320\272\320\276\321\202\320\276"
                        "\321\200\321\213\321\205 \320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\271 \321\202\320\265\320\263.</span></p></body></html>", nullptr));
        configs_lbl->setText(QCoreApplication::translate("ReferenceForm", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270</span></p><p><span style=\" font-size:11pt; font-weight:600; font-style:italic;\">\320\224\320\276\320\261\320\260\320\262\320\273\321\217\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \321\202\321\200\320\265\320\272 \321\201\321\200\320\260\320\267\321\203 \320\262 \321\201\320\277\320\270\321\201\320\276\320\272 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217:</span></p><p><span style=\" font-size:11pt;\">\320\225\321\201\320\273\320\270 \321\215\321\202\320\260 \321\204\321\203\320\275\320\272\321\206\320\270\321\217 \320\262\320\272\320\273\321\216\321\207\320\265\320\275\320\260, \321\202\320\276 \320\277\320\276\321\201\320\273\320\265 \320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\275\320\276\320\262\320\276\320\263\320\276 \321\202\321\200"
                        "\320\265\320\272\320\260, \320\276\320\275 \320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270 \320\276\320\272\320\260\320\266\320\265\321\202\321\201\321\217 \320\262 \321\201\320\277\320\270\321\201\320\272\320\265 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217. \320\237\321\200\320\270 \320\262\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\275\320\276\320\271 \321\204\321\203\320\275\320\272\321\206\320\270\320\270 \320\275\320\276\320\262\321\213\320\271 \321\202\321\200\320\265\320\272 \320\264\320\276\320\261\320\260\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \321\202\320\276\320\273\321\214\320\272\320\276 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\321\203 \321\202\321\200\320\265\320\272\320\276\320\262.</span></p><p><span style=\" font-size:11pt; font-weight:600; font-style:italic;\">\320\237\320\276\320\264\321\201\321\202\321\200\320"
                        "\260\320\270\320\262\320\260\321\202\321\214 \320\262\320\265\321\200\321\202\320\270\320\272\320\260\320\273\321\214\320\275\321\213\320\271 \321\200\320\260\320\267\320\274\320\265\321\200 \320\277\320\276\320\264 \321\207\320\270\321\201\320\273\320\276 \320\260\321\203\320\264\320\270\320\276\320\264\320\276\321\200\320\276\320\266\320\265\320\272:</span></p><p><span style=\" font-size:11pt;\">\320\225\321\201\320\273\320\270 \321\215\321\202\320\260 \321\204\321\203\320\275\320\272\321\206\320\270\321\217 \320\262\320\272\320\273\321\216\321\207\320\265\320\275\320\260, \321\202\320\276 \320\277\321\200\320\270 \320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\270 \320\260\321\203\320\264\320\270\320\276\320\264\320\276\321\200\320\276\320\266\320\272\320\270 (\320\277\321\203\321\201\321\202\320\276\320\271 \320\270\320\273\320\270 \321\201 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\274 \320\270\320\267 \321\202\320\260\320\261\320\273\320\270\321\206\321"
                        "\213 \321\202\321\200\320\265\320\272\320\276\320\274) \320\262\320\265\321\200\321\202\320\270\320\272\320\260\320\273\321\214\320\275\321\213\320\271 \321\200\320\260\320\267\320\274\320\265\321\200 \320\276\320\272\320\275\320\260 \320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270 \320\277\320\276\320\264\321\201\321\202\321\200\320\260\320\270\320\262\320\260\320\265\321\202\321\201\321\217</span><span style=\" font-family:'Times New Roman','serif'; font-size:11pt;\"/><span style=\" font-size:11pt;\"> \320\277\320\276\320\264 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\260\321\203\320\264\320\270\320\276\320\264\320\276\321\200\320\276\320\266\320\265\320\272 \320\262 \321\201\320\277\320\270\321\201\320\272\320\265 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217, \320\264\320\260\320\266\320\265 \320\265\321\201\320\273\320\270 \320\262\320"
                        "\265\321\200\321\202\320\270\320\272\320\260\320\273\321\214\320\275\321\213\320\271 \321\200\320\260\320\267\320\274\320\265\321\200 \320\276\320\272\320\275\320\260 \320\261\321\213\320\273 \320\270\320\267\320\274\320\265\320\275\321\221\320\275 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\274. \320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\260\321\203\320\264\320\270\320\276\320\264\320\276\321\200\320\276\320\266\320\265\320\272 \320\277\320\276\320\264 \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\277\320\276\320\264\321\201\321\202\321\200\320\260\320\270\320\262\320\260\320\265\321\202\321\201\321\217 \320\262\320\265\321\200\321\202\320\270\320\272\320\260\320\273\321\214\320\275\321\213\320\271 \321\200\320\260\320\267\320\274\320\265\321\200 \320\276\320\272\320\275\320\260 - 5. \320\225\321\201"
                        "\320\273\320\270 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\260\321\203\320\264\320\270\320\276\320\264\320\276\321\200\320\276\320\266\320\265\320\272 \320\277\321\200\320\265\320\262\321\213\321\210\320\260\320\265\321\202 5, \321\202\320\276 \320\262\320\272\320\273\321\216\321\207\320\260\320\265\321\202\321\201\321\217 \320\277\321\200\320\276\320\272\321\200\321\203\321\202\320\272\320\260 \320\272\320\276\320\273\321\221\321\201\320\270\320\272\320\276\320\274 \320\274\321\213\321\210\320\270.</span></p><p><span style=\" font-size:11pt; font-weight:600; font-style:italic;\">\320\222\320\270\320\264 \321\200\320\265\320\263\321\203\320\273\321\217\321\202\320\276\321\200\320\260 \320\263\321\200\320\276\320\274\320\272\320\276\321\201\321\202\320\270:</span></p><p><span style=\" font-size:11pt;\">\320\234\320\276\320\266\320\275\320\276 \320\262\321\213\320\261\321\200\320\260\321\202\321\214 \320\275\320\260\320\270\320\261\320\276\320\273\320\265\320\265 \321\203"
                        "\320\264\320\276\320\261\320\275\321\213\320\271 \320\270\320\267 \320\264\320\262\321\203\321\205 \321\200\320\265\320\263\321\203\320\273\321\217\321\202\320\276\321\200\320\276\320\262 \320\263\321\200\320\276\320\274\320\272\320\276\321\201\321\202\320\270. \320\237\320\276\321\201\320\273\320\265 \320\262\321\213\320\261\320\276\321\200\320\260 \321\200\320\265\320\263\321\203\320\273\321\217\321\202\320\276\321\200\321\213 \320\263\321\200\320\276\320\274\320\272\320\276\321\201\321\202\320\270 \320\275\320\260 \320\262\321\201\320\265\321\205 \320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\275\321\213\321\205 \320\262 \321\201\320\277\320\270\321\201\320\276\320\272 \320\262\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\321\217 \320\260\321\203\320\264\320\270\320\276\320\264\320\276\321\200\320\276\320\266\320\272\320\260\321\205 \320\277\320\276\320\274\320\265\320\275\321\217\321\216\321\202\321\201\321\217 \320\275\320\260"
                        " \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\271 \320\270 \320\272\320\260\320\266\320\264\320\260\321\217 \320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\275\320\260\321\217 \320\260\321\203\320\264\320\270\320\276\320\264\320\276\321\200\320\276\320\266\320\272\320\260 \320\261\321\203\320\264\320\265\321\202 \321\201 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\274 \321\200\320\265\320\263\321\203\320\273\321\217\321\202\320\276\321\200\320\276\320\274 \320\263\321\200\320\276\320\274\320\272\320\276\321\201\321\202\320\270</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("ReferenceForm", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReferenceForm: public Ui_ReferenceForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REFERENCEFORM_H
