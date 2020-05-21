/********************************************************************************
** Form generated from reading UI file 'mywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWINDOW_H
#define UI_MYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyWindow)
    {
        if (MyWindow->objectName().isEmpty())
            MyWindow->setObjectName(QString::fromUtf8("MyWindow"));
        MyWindow->resize(400, 300);
        centralWidget = new QWidget(MyWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 100, 93, 28));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 150, 93, 28));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 195, 181, 31));
        MyWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        MyWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MyWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MyWindow->setStatusBar(statusBar);

        retranslateUi(MyWindow);
        QObject::connect(pushButton_2, SIGNAL(clicked()), MyWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MyWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MyWindow)
    {
        MyWindow->setWindowTitle(QApplication::translate("MyWindow", "MyWindow", nullptr));
        pushButton->setText(QApplication::translate("MyWindow", "Login", nullptr));
        pushButton_2->setText(QApplication::translate("MyWindow", "Exit", nullptr));
        label->setText(QApplication::translate("MyWindow", "Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWindow: public Ui_MyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWINDOW_H
