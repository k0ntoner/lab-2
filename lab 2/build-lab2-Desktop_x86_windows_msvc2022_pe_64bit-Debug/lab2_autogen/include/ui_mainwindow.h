/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *minutes;
    QLabel *label_4;
    QLabel *seconds;
    QLabel *label_8;
    QLabel *ms;
    QGridLayout *gridLayout;
    QPushButton *Clear_Button;
    QPushButton *Circle_Button;
    QPushButton *Pause_Button;
    QHBoxLayout *horizontalLayout_9;
    QLabel *minutes_8;
    QLabel *label_19;
    QLabel *seconds_8;
    QLabel *label_20;
    QLabel *ms_8;
    QPushButton *AlarmCloak;
    QPushButton *MarkTime;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(312, 348);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        minutes = new QLabel(centralwidget);
        minutes->setObjectName("minutes");

        horizontalLayout_2->addWidget(minutes);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        seconds = new QLabel(centralwidget);
        seconds->setObjectName("seconds");

        horizontalLayout_2->addWidget(seconds);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");

        horizontalLayout_2->addWidget(label_8);

        ms = new QLabel(centralwidget);
        ms->setObjectName("ms");

        horizontalLayout_2->addWidget(ms);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        Clear_Button = new QPushButton(centralwidget);
        Clear_Button->setObjectName("Clear_Button");

        gridLayout->addWidget(Clear_Button, 0, 1, 1, 1);

        Circle_Button = new QPushButton(centralwidget);
        Circle_Button->setObjectName("Circle_Button");

        gridLayout->addWidget(Circle_Button, 1, 0, 1, 1);

        Pause_Button = new QPushButton(centralwidget);
        Pause_Button->setObjectName("Pause_Button");

        gridLayout->addWidget(Pause_Button, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        minutes_8 = new QLabel(centralwidget);
        minutes_8->setObjectName("minutes_8");

        horizontalLayout_9->addWidget(minutes_8);

        label_19 = new QLabel(centralwidget);
        label_19->setObjectName("label_19");

        horizontalLayout_9->addWidget(label_19);

        seconds_8 = new QLabel(centralwidget);
        seconds_8->setObjectName("seconds_8");

        horizontalLayout_9->addWidget(seconds_8);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName("label_20");

        horizontalLayout_9->addWidget(label_20);

        ms_8 = new QLabel(centralwidget);
        ms_8->setObjectName("ms_8");

        horizontalLayout_9->addWidget(ms_8);


        gridLayout_2->addLayout(horizontalLayout_9, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        AlarmCloak = new QPushButton(centralwidget);
        AlarmCloak->setObjectName("AlarmCloak");

        verticalLayout_2->addWidget(AlarmCloak);

        MarkTime = new QPushButton(centralwidget);
        MarkTime->setObjectName("MarkTime");

        verticalLayout_2->addWidget(MarkTime);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 312, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Close window", nullptr));
        minutes->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "::", nullptr));
        seconds->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "::", nullptr));
        ms->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Clear_Button->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        Circle_Button->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        Pause_Button->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        minutes_8->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "::", nullptr));
        seconds_8->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "::", nullptr));
        ms_8->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        AlarmCloak->setText(QCoreApplication::translate("MainWindow", "Alarm Cloack", nullptr));
        MarkTime->setText(QCoreApplication::translate("MainWindow", "Mark the Time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
