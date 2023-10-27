#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secondwindow.h"
#include "marktime.h"
#include "alarm.h"
#include <QTimer>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void Timer_slot();
    void on_Pause_Button_clicked();

    void on_Clear_Button_clicked();

    void on_Circle_Button_clicked();

    void on_MarkTime_clicked();

    void on_AlarmCloak_clicked();

private:
    Ui::MainWindow *ui;
    Secondwindow *second;
    MarkTime *marktime;
    Alarm *alarm;
    QTimer *timer;
    int minutes, seconds, ms,minutes_2,seconds_2,ms_2;
    bool pause_start=false;
};
#endif // MAINWINDOW_H
