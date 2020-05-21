/********************************************************************************
** Form generated from reading UI file 'employeeinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEINFO_H
#define UI_EMPLOYEEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Employeeinfo
{
public:

    void setupUi(QDialog *Employeeinfo)
    {
        if (Employeeinfo->objectName().isEmpty())
            Employeeinfo->setObjectName(QString::fromUtf8("Employeeinfo"));
        Employeeinfo->resize(400, 300);

        retranslateUi(Employeeinfo);

        QMetaObject::connectSlotsByName(Employeeinfo);
    } // setupUi

    void retranslateUi(QDialog *Employeeinfo)
    {
        Employeeinfo->setWindowTitle(QApplication::translate("Employeeinfo", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Employeeinfo: public Ui_Employeeinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEINFO_H
