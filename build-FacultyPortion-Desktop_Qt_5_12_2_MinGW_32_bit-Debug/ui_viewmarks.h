/********************************************************************************
** Form generated from reading UI file 'viewmarks.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWMARKS_H
#define UI_VIEWMARKS_H

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

class Ui_ViewMarks
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

    void setupUi(QDialog *ViewMarks)
    {
        if (ViewMarks->objectName().isEmpty())
            ViewMarks->setObjectName(QString::fromUtf8("ViewMarks"));
        ViewMarks->resize(551, 393);
        layoutWidget = new QWidget(ViewMarks);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 60, 139, 151));
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

        pushButton = new QPushButton(ViewMarks);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 240, 93, 28));
        tableView = new QTableView(ViewMarks);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(180, 40, 361, 301));

        retranslateUi(ViewMarks);

        QMetaObject::connectSlotsByName(ViewMarks);
    } // setupUi

    void retranslateUi(QDialog *ViewMarks)
    {
        ViewMarks->setWindowTitle(QApplication::translate("ViewMarks", "Dialog", nullptr));
        label->setText(QApplication::translate("ViewMarks", "Course", nullptr));
        label_2->setText(QApplication::translate("ViewMarks", "Section", nullptr));
        pushButton->setText(QApplication::translate("ViewMarks", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewMarks: public Ui_ViewMarks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWMARKS_H
