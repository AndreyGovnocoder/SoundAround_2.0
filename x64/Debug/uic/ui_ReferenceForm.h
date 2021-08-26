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

QT_BEGIN_NAMESPACE

class Ui_ReferenceForm
{
public:

    void setupUi(QDialog *ReferenceForm)
    {
        if (ReferenceForm->objectName().isEmpty())
            ReferenceForm->setObjectName(QString::fromUtf8("ReferenceForm"));
        ReferenceForm->resize(400, 300);

        retranslateUi(ReferenceForm);

        QMetaObject::connectSlotsByName(ReferenceForm);
    } // setupUi

    void retranslateUi(QDialog *ReferenceForm)
    {
        ReferenceForm->setWindowTitle(QCoreApplication::translate("ReferenceForm", "ReferenceForm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReferenceForm: public Ui_ReferenceForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REFERENCEFORM_H
