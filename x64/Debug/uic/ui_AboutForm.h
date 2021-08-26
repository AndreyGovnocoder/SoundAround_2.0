/********************************************************************************
** Form generated from reading UI file 'AboutForm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTFORM_H
#define UI_ABOUTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_15;
    QLabel *headName_lbl;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_19;
    QLabel *versionHead_lbl;
    QLabel *versionValue_lbl;
    QSpacerItem *horizontalSpacer_20;
    QLabel *desctiption_lbl;
    QFrame *line;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_21;
    QHBoxLayout *horizontalLayout_18;
    QLabel *goose_lbl;
    QLabel *dev_lbl;
    QSpacerItem *horizontalSpacer_22;
    QHBoxLayout *horizontalLayout_19;
    QLabel *info_lbl;
    QLineEdit *mail_lineEdit;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *imageLogo_lbl;
    QLabel *copyright_lbl;
    QHBoxLayout *horizontalLayout_20;
    QSpacerItem *horizontalSpacer_25;
    QPushButton *closeButton;
    QSpacerItem *horizontalSpacer_26;

    void setupUi(QDialog *AboutForm)
    {
        if (AboutForm->objectName().isEmpty())
            AboutForm->setObjectName(QString::fromUtf8("AboutForm"));
        AboutForm->resize(605, 473);
        AboutForm->setMinimumSize(QSize(605, 473));
        AboutForm->setMaximumSize(QSize(605, 473));
        verticalLayout = new QVBoxLayout(AboutForm);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        headName_lbl = new QLabel(AboutForm);
        headName_lbl->setObjectName(QString::fromUtf8("headName_lbl"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(headName_lbl->sizePolicy().hasHeightForWidth());
        headName_lbl->setSizePolicy(sizePolicy);
        headName_lbl->setMinimumSize(QSize(272, 160));
        headName_lbl->setMaximumSize(QSize(16777215, 160));
        headName_lbl->setPixmap(QPixmap(QString::fromUtf8(":/SoundAround/images/name.png")));
        headName_lbl->setScaledContents(false);
        headName_lbl->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(headName_lbl);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_19);

        versionHead_lbl = new QLabel(AboutForm);
        versionHead_lbl->setObjectName(QString::fromUtf8("versionHead_lbl"));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(15);
        versionHead_lbl->setFont(font);
        versionHead_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_16->addWidget(versionHead_lbl);

        versionValue_lbl = new QLabel(AboutForm);
        versionValue_lbl->setObjectName(QString::fromUtf8("versionValue_lbl"));
        versionValue_lbl->setFont(font);

        horizontalLayout_16->addWidget(versionValue_lbl);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_20);


        verticalLayout->addLayout(horizontalLayout_16);

        desctiption_lbl = new QLabel(AboutForm);
        desctiption_lbl->setObjectName(QString::fromUtf8("desctiption_lbl"));
        sizePolicy.setHeightForWidth(desctiption_lbl->sizePolicy().hasHeightForWidth());
        desctiption_lbl->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(12);
        desctiption_lbl->setFont(font1);
        desctiption_lbl->setWordWrap(true);

        verticalLayout->addWidget(desctiption_lbl);

        line = new QFrame(AboutForm);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_12 = new QLabel(AboutForm);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_17->addWidget(label_12);

        horizontalSpacer_21 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_21);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        goose_lbl = new QLabel(AboutForm);
        goose_lbl->setObjectName(QString::fromUtf8("goose_lbl"));
        goose_lbl->setMinimumSize(QSize(53, 40));
        goose_lbl->setMaximumSize(QSize(53, 40));
        goose_lbl->setPixmap(QPixmap(QString::fromUtf8(":/SoundAround/images/goose.png")));
        goose_lbl->setScaledContents(true);

        horizontalLayout_18->addWidget(goose_lbl);

        dev_lbl = new QLabel(AboutForm);
        dev_lbl->setObjectName(QString::fromUtf8("dev_lbl"));

        horizontalLayout_18->addWidget(dev_lbl);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_22);


        horizontalLayout_17->addLayout(horizontalLayout_18);


        verticalLayout->addLayout(horizontalLayout_17);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        info_lbl = new QLabel(AboutForm);
        info_lbl->setObjectName(QString::fromUtf8("info_lbl"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(info_lbl->sizePolicy().hasHeightForWidth());
        info_lbl->setSizePolicy(sizePolicy1);
        info_lbl->setMinimumSize(QSize(0, 0));

        horizontalLayout_19->addWidget(info_lbl);

        mail_lineEdit = new QLineEdit(AboutForm);
        mail_lineEdit->setObjectName(QString::fromUtf8("mail_lineEdit"));
        mail_lineEdit->setMinimumSize(QSize(110, 0));
        mail_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-color: rgba(255, 255, 255, 0);"));
        mail_lineEdit->setReadOnly(true);

        horizontalLayout_19->addWidget(mail_lineEdit);


        verticalLayout->addLayout(horizontalLayout_19);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        frame = new QFrame(AboutForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(587, 0));
        frame->setMaximumSize(QSize(587, 16777215));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        imageLogo_lbl = new QLabel(frame);
        imageLogo_lbl->setObjectName(QString::fromUtf8("imageLogo_lbl"));
        sizePolicy1.setHeightForWidth(imageLogo_lbl->sizePolicy().hasHeightForWidth());
        imageLogo_lbl->setSizePolicy(sizePolicy1);
        imageLogo_lbl->setMinimumSize(QSize(30, 30));
        imageLogo_lbl->setMaximumSize(QSize(30, 30));
        imageLogo_lbl->setPixmap(QPixmap(QString::fromUtf8(":/SoundAround/images/logo-512-2.png")));
        imageLogo_lbl->setScaledContents(true);
        imageLogo_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(imageLogo_lbl);

        copyright_lbl = new QLabel(frame);
        copyright_lbl->setObjectName(QString::fromUtf8("copyright_lbl"));
        copyright_lbl->setMinimumSize(QSize(190, 0));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(10);
        copyright_lbl->setFont(font2);
        copyright_lbl->setFrameShape(QFrame::NoFrame);
        copyright_lbl->setLineWidth(0);
        copyright_lbl->setTextFormat(Qt::RichText);
        copyright_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        copyright_lbl->setWordWrap(true);
        copyright_lbl->setMargin(0);

        horizontalLayout->addWidget(copyright_lbl);


        verticalLayout->addWidget(frame);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_25);

        closeButton = new QPushButton(AboutForm);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setMinimumSize(QSize(80, 25));
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
        closeButton->setPalette(palette);
        closeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_20->addWidget(closeButton);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_26);


        verticalLayout->addLayout(horizontalLayout_20);


        retranslateUi(AboutForm);
        QObject::connect(closeButton, SIGNAL(clicked()), AboutForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutForm);
    } // setupUi

    void retranslateUi(QDialog *AboutForm)
    {
        AboutForm->setWindowTitle(QCoreApplication::translate("AboutForm", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        headName_lbl->setText(QString());
        versionHead_lbl->setText(QCoreApplication::translate("AboutForm", "\320\222\320\265\321\200\321\201\320\270\321\217:", nullptr));
        versionValue_lbl->setText(QCoreApplication::translate("AboutForm", "2.0", nullptr));
        desctiption_lbl->setText(QCoreApplication::translate("AboutForm", "<html><head/><body><p><span style=\" font-weight:600;\">SoundAround </span>\321\203\320\264\320\276\320\261\320\275\321\213\320\271, \320\275\320\265\321\201\320\273\320\276\320\266\320\275\321\213\320\271 \320\267\320\262\321\203\320\272\320\276\320\262\320\276\320\271 \320\277\321\200\320\276\320\270\320\263\321\200\321\213\320\262\320\260\321\202\320\265\320\273\321\214, \320\276\320\261\320\273\320\260\320\264\320\260\321\216\321\211\320\270\320\271 \320\277\321\200\320\276\321\201\321\202\321\213\320\274 \320\270\320\275\321\202\320\265\321\200\321\204\320\265\320\271\321\201\320\276\320\274, \320\270\320\264\320\265\320\260\320\273\321\214\320\275\320\276 \320\277\320\276\320\264\321\205\320\276\320\264\320\270\321\202 \320\264\320\273\321\217 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217 \320\267\320\262\321\203\320\272\320\276\320\262\320\276\320\271 \320\260\321\202\320\274\320\276\321\201\321\204\320\265\321\200\321\213 \320\270 \320\277\320\276\320\263\321\200\321\203\320\266\320\265"
                        "\320\275\320\270\321\217 \320\262 \321\203\320\262\320\273\320\265\320\272\320\260\321\202\320\265\320\273\321\214\320\275\321\213\320\271 \320\274\320\270\321\200 D&amp;D</p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("AboutForm", "\320\220\320\262\321\202\320\276\321\200:", nullptr));
        goose_lbl->setText(QString());
        dev_lbl->setText(QCoreApplication::translate("AboutForm", " \320\220\320\275\320\264\321\200\320\265\320\271 \320\223\321\203\320\273\320\270\320\271", nullptr));
        info_lbl->setText(QCoreApplication::translate("AboutForm", "\320\237\320\276 \320\262\320\276\320\277\321\200\320\276\321\201\320\260\320\274 \320\270 \320\277\321\200\320\265\320\264\320\273\320\276\320\266\320\265\320\275\320\270\321\217\320\274 \320\277\320\270\321\201\320\260\321\202\321\214 \320\275\320\260 \321\215\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\321\203\321\216 \320\277\320\276\321\207\321\202\321\203:  ", nullptr));
        mail_lineEdit->setText(QCoreApplication::translate("AboutForm", "elizgerd@yandex.ru", nullptr));
        imageLogo_lbl->setText(QString());
        copyright_lbl->setText(QCoreApplication::translate("AboutForm", "<html><head/><body><p>Copyright \302\251 2021 \320\220\320\275\320\264\321\200\320\265\320\271 \320\223\321\203\320\273\320\270\320\271 \320\222\321\201\320\265 \320\277\321\200\320\260\320\262\320\260 \320\267\320\260\321\211\320\270\321\211\320\265\320\275\321\213</p></body></html>", nullptr));
        closeButton->setText(QCoreApplication::translate("AboutForm", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutForm: public Ui_AboutForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTFORM_H
