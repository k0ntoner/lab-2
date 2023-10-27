#include "alarm.h"
#include "ui_alarm.h"
#include <QTime>
#include <QTimer>
#include "QMessageBox"
#include <QDateTime>
Alarm::Alarm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Alarm)
{
    ui->setupUi(this);
    current_time=new QTimer(this);
    connect( current_time, SIGNAL(timeout()), this,SLOT(current_data()));
    current_time->start(1000);
    QDateTime currentDateTime = QDateTime::currentDateTime();
    currentTime = currentDateTime.time();
    currentDate = currentDateTime.date();
    ui->label_3->setText(currentTime.toString("hh:mm:ss"));
    ui->label->setText(currentDate.toString("yyyy-MM-dd"));
}

Alarm::~Alarm()
{
    delete ui;
}

void Alarm::on_timeEdit_userTimeChanged(const QTime &time)
{
    cloack1=ui->timeEdit->time();
    if(currentTime ==cloack1){
        QMessageBox::information(this, "Mark Timer", "WAKE UP");
    }
}


void Alarm::on_timeEdit_2_userTimeChanged(const QTime &time)
{
    cloack2=ui->timeEdit_2->time();
    if(currentTime ==cloack2){
        QMessageBox::information(this, "Mark Timer", "WAKE UP");
    }
}


void Alarm::on_timeEdit_3_userTimeChanged(const QTime &time)
{
    cloack3=ui->timeEdit_3->time();
    if(currentTime ==cloack3){
        QMessageBox::information(this, "Mark Timer", "WAKE UP");
    }
}


void Alarm::on_timeEdit_4_userTimeChanged(const QTime &time)
{
    cloack4=ui->timeEdit_4->time();
    if(currentTime ==cloack4){
        QMessageBox::information(this, "Mark Timer", "WAKE UP");
    }
}


void Alarm::on_timeEdit_5_userTimeChanged(const QTime &time)
{
    cloack5=ui->timeEdit_5->time();
    if(currentTime ==cloack5){
        QMessageBox::information(this, "Mark Timer", "WAKE UP");
    }
}

void Alarm::current_data()
{
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QTime currentTime = currentDateTime.time();
    QDate currentDate = currentDateTime.date();
    ui->label_3->setText(currentTime.toString("hh:mm:ss"));
    ui->label->setText(currentDate.toString("yyyy-MM-dd"));

    if(currentTime.second() ==cloack1.second() && currentTime.hour() ==cloack1.hour() && currentTime.minute() ==cloack1.minute()){
        QMessageBox::information(this, "Mark Timer", "WAKE UP");
    }
    if(currentTime.second() ==cloack2.second() && currentTime.hour() ==cloack2.hour() && currentTime.minute() ==cloack2.minute()){
        QMessageBox::information(this, "Mark Timer", "WAKE UP");
    }
    if(currentTime.second() ==cloack3.second() && currentTime.hour() ==cloack3.hour() && currentTime.minute() ==cloack3.minute()){
        QMessageBox::information(this, "Mark Timer", "WAKE UP");
    }
    if(currentTime.second() ==cloack4.second() && currentTime.hour() ==cloack4.hour() && currentTime.minute() ==cloack4.minute()){
        QMessageBox::information(this, "Mark Timer", "WAKE UP");
    }
    if(currentTime.second() ==cloack5.second() && currentTime.hour() ==cloack5.hour() && currentTime.minute() ==cloack5.minute()){
        QMessageBox::information(this, "Mark Timer", "WAKE UP");
    }
}


void Alarm::on_pushButton_clicked()
{
    close();
}

