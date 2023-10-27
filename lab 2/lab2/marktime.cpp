#include "marktime.h"
#include "ui_marktime.h"
#include <QTime>
#include <QTimer>
#include "QMessageBox"
MarkTime::MarkTime(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MarkTime)

{
    ui->setupUi(this);
    ui->timeEdit->setDisplayFormat("hh:mm:ss");
    timing=ui->timeEdit->time();
    seconds=timing.second();
    minutes=timing.minute();
    hours=timing.hour();
    mark_timer =new QTimer(this);
    connect(mark_timer, SIGNAL(timeout()), this,SLOT(Mark_time()));

}


MarkTime::~MarkTime()
{
    delete ui;
}




void MarkTime::on_Start_timemark_clicked()
{
    mark_timer->start(1000);
}

void MarkTime::Mark_time()
{
    seconds=timing.second();
    minutes=timing.minute();
    hours=timing.hour();
    if(seconds==0 && minutes==0 && hours==0){
        mark_timer->stop();
        QMessageBox::information(this, "Mark Timer", "WAKE UP");
    }
    if(minutes==0 && seconds==0){
        hours--;
        minutes=60;
    }
    if(seconds==0){
        minutes--;
        seconds=60;
    }
    seconds--;
    timing.setHMS(hours, minutes, seconds);

    ui->timeEdit->setTime(timing);


}

void MarkTime::on_Stop_button_clicked()
{
    mark_timer->stop();

}



void MarkTime::on_timeEdit_userTimeChanged(const QTime &time)
{
    timing=ui->timeEdit->time();
}


void MarkTime::on_Go_Alarm_clicked()
{
    close();
    Alarm cloak;
    cloak.setModal(true);
    cloak.exec();
}


void MarkTime::on_Go_Stopwatch_clicked()
{
    close();
}

