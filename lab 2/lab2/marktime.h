#ifndef MARKTIME_H
#define MARKTIME_H
#include <QTimer>
#include <QDialog>
#include <QTime>
#include "alarm.h"

namespace Ui {
class MarkTime;
}

class MarkTime : public QDialog
{
    Q_OBJECT

public:
    explicit MarkTime(QWidget *parent = nullptr);
    ~MarkTime();

private slots:
    void on_Start_timemark_clicked();
    void Mark_time();

    void on_Stop_button_clicked();

    void on_timeEdit_userTimeChanged(const QTime &time);

    void on_Go_Alarm_clicked();

    void on_Go_Stopwatch_clicked();

private:
    Ui::MarkTime *ui;
    QTimer *mark_timer;
    int minutes, seconds, hours;
    QTime timing{QTime(0,0,0)};
};

#endif // MARKTIME_H
