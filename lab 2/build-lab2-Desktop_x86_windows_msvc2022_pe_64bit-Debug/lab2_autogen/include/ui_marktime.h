/********************************************************************************
** Form generated from reading UI file 'marktime.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKTIME_H
#define UI_MARKTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MarkTime
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *Go_Stopwatch;
    QPushButton *Go_Alarm;
    QTimeEdit *timeEdit;
    QPushButton *Start_timemark;
    QPushButton *Stop_button;

    void setupUi(QDialog *MarkTime)
    {
        if (MarkTime->objectName().isEmpty())
            MarkTime->setObjectName("MarkTime");
        MarkTime->resize(175, 164);
        verticalLayout = new QVBoxLayout(MarkTime);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        Go_Stopwatch = new QPushButton(MarkTime);
        Go_Stopwatch->setObjectName("Go_Stopwatch");

        gridLayout->addWidget(Go_Stopwatch, 0, 0, 1, 1);

        Go_Alarm = new QPushButton(MarkTime);
        Go_Alarm->setObjectName("Go_Alarm");

        gridLayout->addWidget(Go_Alarm, 1, 0, 1, 1);

        timeEdit = new QTimeEdit(MarkTime);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setTime(QTime(0, 0, 0));

        gridLayout->addWidget(timeEdit, 2, 0, 1, 1);

        Start_timemark = new QPushButton(MarkTime);
        Start_timemark->setObjectName("Start_timemark");

        gridLayout->addWidget(Start_timemark, 3, 0, 1, 1);

        Stop_button = new QPushButton(MarkTime);
        Stop_button->setObjectName("Stop_button");

        gridLayout->addWidget(Stop_button, 4, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(MarkTime);

        QMetaObject::connectSlotsByName(MarkTime);
    } // setupUi

    void retranslateUi(QDialog *MarkTime)
    {
        MarkTime->setWindowTitle(QCoreApplication::translate("MarkTime", "Dialog", nullptr));
        Go_Stopwatch->setText(QCoreApplication::translate("MarkTime", "Stopwatch", nullptr));
        Go_Alarm->setText(QCoreApplication::translate("MarkTime", "Alarm Cloack", nullptr));
        Start_timemark->setText(QCoreApplication::translate("MarkTime", "Start", nullptr));
        Stop_button->setText(QCoreApplication::translate("MarkTime", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MarkTime: public Ui_MarkTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKTIME_H
