/********************************************************************************
** Form generated from reading UI file 'alarm.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALARM_H
#define UI_ALARM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Alarm
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QFormLayout *formLayout;
    QTimeEdit *timeEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_3;
    QTimeEdit *timeEdit_2;
    QTimeEdit *timeEdit_3;
    QTimeEdit *timeEdit_4;
    QTimeEdit *timeEdit_5;

    void setupUi(QDialog *Alarm)
    {
        if (Alarm->objectName().isEmpty())
            Alarm->setObjectName("Alarm");
        Alarm->resize(256, 290);
        verticalLayout_2 = new QVBoxLayout(Alarm);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(Alarm);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        timeEdit = new QTimeEdit(Alarm);
        timeEdit->setObjectName("timeEdit");

        formLayout->setWidget(0, QFormLayout::LabelRole, timeEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(Alarm);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        label_3 = new QLabel(Alarm);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        timeEdit_2 = new QTimeEdit(Alarm);
        timeEdit_2->setObjectName("timeEdit_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, timeEdit_2);

        timeEdit_3 = new QTimeEdit(Alarm);
        timeEdit_3->setObjectName("timeEdit_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, timeEdit_3);

        timeEdit_4 = new QTimeEdit(Alarm);
        timeEdit_4->setObjectName("timeEdit_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, timeEdit_4);

        timeEdit_5 = new QTimeEdit(Alarm);
        timeEdit_5->setObjectName("timeEdit_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, timeEdit_5);


        verticalLayout->addLayout(formLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Alarm);

        QMetaObject::connectSlotsByName(Alarm);
    } // setupUi

    void retranslateUi(QDialog *Alarm)
    {
        Alarm->setWindowTitle(QCoreApplication::translate("Alarm", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Alarm", "StopWatch", nullptr));
        label->setText(QCoreApplication::translate("Alarm", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Alarm", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Alarm: public Ui_Alarm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALARM_H
