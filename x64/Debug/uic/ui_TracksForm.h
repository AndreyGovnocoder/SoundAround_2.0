/********************************************************************************
** Form generated from reading UI file 'TracksForm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKSFORM_H
#define UI_TRACKSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TracksForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ok_btn;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *TracksForm)
    {
        if (TracksForm->objectName().isEmpty())
            TracksForm->setObjectName(QString::fromUtf8("TracksForm"));
        TracksForm->resize(481, 349);
        verticalLayout = new QVBoxLayout(TracksForm);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        ok_btn = new QPushButton(TracksForm);
        ok_btn->setObjectName(QString::fromUtf8("ok_btn"));

        horizontalLayout->addWidget(ok_btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TracksForm);
        QObject::connect(ok_btn, SIGNAL(clicked()), TracksForm, SLOT(deleteLater()));

        QMetaObject::connectSlotsByName(TracksForm);
    } // setupUi

    void retranslateUi(QWidget *TracksForm)
    {
        TracksForm->setWindowTitle(QCoreApplication::translate("TracksForm", "TracksForm", nullptr));
        ok_btn->setText(QCoreApplication::translate("TracksForm", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TracksForm: public Ui_TracksForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKSFORM_H
