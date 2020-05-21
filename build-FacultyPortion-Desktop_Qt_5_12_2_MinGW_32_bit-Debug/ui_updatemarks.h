/********************************************************************************
** Form generated from reading UI file 'updatemarks.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEMARKS_H
#define UI_UPDATEMARKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateMarks
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *course;
    QLabel *label_2;
    QLineEdit *section;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_4;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_5;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_6;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_7;

    void setupUi(QDialog *UpdateMarks)
    {
        if (UpdateMarks->objectName().isEmpty())
            UpdateMarks->setObjectName(QString::fromUtf8("UpdateMarks"));
        UpdateMarks->resize(667, 425);
        layoutWidget = new QWidget(UpdateMarks);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 139, 151));
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

        pushButton = new QPushButton(UpdateMarks);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 230, 93, 28));
        comboBox = new QComboBox(UpdateMarks);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(170, 50, 151, 41));
        pushButton_2 = new QPushButton(UpdateMarks);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 350, 93, 28));
        widget = new QWidget(UpdateMarks);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(380, 20, 141, 361));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        doubleSpinBox = new QDoubleSpinBox(widget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMaximum(15.000000000000000);
        doubleSpinBox->setValue(0.000000000000000);

        verticalLayout_2->addWidget(doubleSpinBox);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        doubleSpinBox_2 = new QDoubleSpinBox(widget);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setDecimals(1);
        doubleSpinBox_2->setMaximum(15.000000000000000);

        verticalLayout_2->addWidget(doubleSpinBox_2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        doubleSpinBox_3 = new QDoubleSpinBox(widget);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setDecimals(1);
        doubleSpinBox_3->setMaximum(5.000000000000000);

        verticalLayout_2->addWidget(doubleSpinBox_3);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);


        verticalLayout_3->addLayout(verticalLayout_2);

        doubleSpinBox_4 = new QDoubleSpinBox(widget);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setDecimals(1);
        doubleSpinBox_4->setMaximum(5.000000000000000);

        verticalLayout_3->addWidget(doubleSpinBox_4);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_3->addWidget(label_7);

        doubleSpinBox_5 = new QDoubleSpinBox(widget);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));
        doubleSpinBox_5->setDecimals(1);
        doubleSpinBox_5->setMaximum(10.000000000000000);

        verticalLayout_3->addWidget(doubleSpinBox_5);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_3->addWidget(label_8);

        doubleSpinBox_6 = new QDoubleSpinBox(widget);
        doubleSpinBox_6->setObjectName(QString::fromUtf8("doubleSpinBox_6"));
        doubleSpinBox_6->setDecimals(1);
        doubleSpinBox_6->setMaximum(10.000000000000000);

        verticalLayout_3->addWidget(doubleSpinBox_6);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_3->addWidget(label_9);

        doubleSpinBox_7 = new QDoubleSpinBox(widget);
        doubleSpinBox_7->setObjectName(QString::fromUtf8("doubleSpinBox_7"));
        doubleSpinBox_7->setDecimals(1);
        doubleSpinBox_7->setMaximum(50.000000000000000);

        verticalLayout_3->addWidget(doubleSpinBox_7);


        retranslateUi(UpdateMarks);

        QMetaObject::connectSlotsByName(UpdateMarks);
    } // setupUi

    void retranslateUi(QDialog *UpdateMarks)
    {
        UpdateMarks->setWindowTitle(QApplication::translate("UpdateMarks", "Dialog", nullptr));
        label->setText(QApplication::translate("UpdateMarks", "Course", nullptr));
        label_2->setText(QApplication::translate("UpdateMarks", "Section", nullptr));
        pushButton->setText(QApplication::translate("UpdateMarks", "Open", nullptr));
        pushButton_2->setText(QApplication::translate("UpdateMarks", "Upload", nullptr));
        label_3->setText(QApplication::translate("UpdateMarks", "MID 1", nullptr));
        label_6->setText(QApplication::translate("UpdateMarks", "MID 2", nullptr));
        label_4->setText(QApplication::translate("UpdateMarks", "Quiz 1", nullptr));
        label_5->setText(QApplication::translate("UpdateMarks", "Quiz 2", nullptr));
        label_7->setText(QApplication::translate("UpdateMarks", "Quiz 3/Project", nullptr));
        label_8->setText(QApplication::translate("UpdateMarks", "Assignment", nullptr));
        label_9->setText(QApplication::translate("UpdateMarks", "Final", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateMarks: public Ui_UpdateMarks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEMARKS_H
