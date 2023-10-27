#ifndef ALARM_H
#define ALARM_H

#include <QDialog>
#include <QTime>
#include <QTimer>
namespace Ui {
class Alarm;
}

class Alarm : public QDialog
{
    Q_OBJECT

public:
    explicit Alarm(QWidget *parent = nullptr);
    ~Alarm();

private slots:
    void on_timeEdit_userTimeChanged(const QTime &time);

    void on_timeEdit_2_userTimeChanged(const QTime &time);

    void on_timeEdit_3_userTimeChanged(const QTime &time);

    void on_timeEdit_4_userTimeChanged(const QTime &time);

    void on_timeEdit_5_userTimeChanged(const QTime &time);
    void current_data();

    void on_pushButton_clicked();

private:
    Ui::Alarm *ui;
    QTimer *current_time;
    QTime cloack1,cloack2,cloack3,cloack4,cloack5;
    QTime currentTime;
    QDate currentDate;
};

#endif // ALARM_H
