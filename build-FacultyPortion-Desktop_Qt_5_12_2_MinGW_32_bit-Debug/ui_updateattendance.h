/********************************************************************************
** Form generated from reading UI file 'updateattendance.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEATTENDANCE_H
#define UI_UPDATEATTENDANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateAttendance
{
public:
    QPushButton *pushButton;
    QComboBox *comboBox;
    QRadioButton *present;
    QRadioButton *absent;
    QRadioButton *leave;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *course;
    QLabel *label_2;
    QLineEdit *section;

    void setupUi(QDialog *UpdateAttendance)
    {
        if (UpdateAttendance->objectName().isEmpty())
            UpdateAttendance->setObjectName(QString::fromUtf8("UpdateAttendance"));
        UpdateAttendance->resize(663, 380);
        pushButton = new QPushButton(UpdateAttendance);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 240, 93, 28));
        comboBox = new QComboBox(UpdateAttendance);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(340, 20, 191, 51));
        present = new QRadioButton(UpdateAttendance);
        present->setObjectName(QString::fromUtf8("present"));
        present->setGeometry(QRect(340, 110, 95, 20));
        absent = new QRadioButton(UpdateAttendance);
        absent->setObjectName(QString::fromUtf8("absent"));
        absent->setGeometry(QRect(340, 150, 95, 20));
        leave = new QRadioButton(UpdateAttendance);
        leave->setObjectName(QString::fromUtf8("leave"));
        leave->setGeometry(QRect(340, 190, 95, 20));
        pushButton_2 = new QPushButton(UpdateAttendance);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 250, 93, 28));
        pushButton_3 = new QPushButton(UpdateAttendance);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(350, 330, 93, 28));
        widget = new QWidget(UpdateAttendance);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 60, 139, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        course = new QLineEdit(widget);
        course->setObjectName(QString::fromUtf8("course"));

        verticalLayout->addWidget(course);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        section = new QLineEdit(widget);
        section->setObjectName(QString::fromUtf8("section"));

        verticalLayout->addWidget(section);


        retranslateUi(UpdateAttendance);

        QMetaObject::connectSlotsByName(UpdateAttendance);
    } // setupUi

    void retranslateUi(QDialog *UpdateAttendance)
    {
        UpdateAttendance->setWindowTitle(QApplication::translate("UpdateAttendance", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("UpdateAttendance", "Open", nullptr));
        present->setText(QApplication::translate("UpdateAttendance", "P", nullptr));
        absent->setText(QApplication::translate("UpdateAttendance", "A", nullptr));
        leave->setText(QApplication::translate("UpdateAttendance", "L", nullptr));
        pushButton_2->setText(QApplication::translate("UpdateAttendance", "Mark", nullptr));
        pushButton_3->setText(QApplication::translate("UpdateAttendance", "Open", nullptr));
        label->setText(QApplication::translate("UpdateAttendance", "Course", nullptr));
        label_2->setText(QApplication::translate("UpdateAttendance", "Section", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateAttendance: public Ui_UpdateAttendance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEATTENDANCE_H
