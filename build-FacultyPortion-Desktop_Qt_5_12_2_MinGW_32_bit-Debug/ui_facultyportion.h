/********************************************************************************
** Form generated from reading UI file 'facultyportion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACULTYPORTION_H
#define UI_FACULTYPORTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FacultyPortion
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FacultyPortion)
    {
        if (FacultyPortion->objectName().isEmpty())
            FacultyPortion->setObjectName(QString::fromUtf8("FacultyPortion"));
        FacultyPortion->resize(559, 410);
        centralWidget = new QWidget(FacultyPortion);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 100, 123, 139));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_3->addWidget(pushButton_4);

        FacultyPortion->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FacultyPortion);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 559, 26));
        FacultyPortion->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FacultyPortion);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        FacultyPortion->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FacultyPortion);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        FacultyPortion->setStatusBar(statusBar);

        retranslateUi(FacultyPortion);

        QMetaObject::connectSlotsByName(FacultyPortion);
    } // setupUi

    void retranslateUi(QMainWindow *FacultyPortion)
    {
        FacultyPortion->setWindowTitle(QApplication::translate("FacultyPortion", "FacultyPortion", nullptr));
        pushButton->setText(QApplication::translate("FacultyPortion", "Update Attendance", nullptr));
        pushButton_2->setText(QApplication::translate("FacultyPortion", "View Attendance", nullptr));
        pushButton_3->setText(QApplication::translate("FacultyPortion", "Update Marks", nullptr));
        pushButton_4->setText(QApplication::translate("FacultyPortion", "ViewMarks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FacultyPortion: public Ui_FacultyPortion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACULTYPORTION_H
