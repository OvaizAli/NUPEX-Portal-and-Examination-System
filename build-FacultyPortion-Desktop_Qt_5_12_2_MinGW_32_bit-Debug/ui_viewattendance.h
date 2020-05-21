/********************************************************************************
** Form generated from reading UI file 'viewattendance.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWATTENDANCE_H
#define UI_VIEWATTENDANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewAttendance
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *course;
    QLabel *label_2;
    QLineEdit *section;
    QPushButton *pushButton;
    QTableView *tableView;

    void setupUi(QDialog *ViewAttendance)
    {
        if (ViewAttendance->objectName().isEmpty())
            ViewAttendance->setObjectName(QString::fromUtf8("ViewAttendance"));
        ViewAttendance->resize(485, 346);
        layoutWidget = new QWidget(ViewAttendance);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 60, 139, 151));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        course = new QLineEdit(layoutWidget);
        course->setObjectName(QString::fromUtf8("course"));

        verticalLayout->addWidget(course);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        section = new QLineEdit(layoutWidget);
        section->setObjectName(QString::fromUtf8("section"));

        verticalLayout->addWidget(section);

        pushButton = new QPushButton(ViewAttendance);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 240, 93, 28));
        tableView = new QTableView(ViewAttendance);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(200, 60, 256, 192));

        retranslateUi(ViewAttendance);

        QMetaObject::connectSlotsByName(ViewAttendance);
    } // setupUi

    void retranslateUi(QDialog *ViewAttendance)
    {
        ViewAttendance->setWindowTitle(QApplication::translate("ViewAttendance", "Dialog", nullptr));
        label->setText(QApplication::translate("ViewAttendance", "Course", nullptr));
        label_2->setText(QApplication::translate("ViewAttendance", "Section", nullptr));
        pushButton->setText(QApplication::translate("ViewAttendance", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewAttendance: public Ui_ViewAttendance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWATTENDANCE_H
