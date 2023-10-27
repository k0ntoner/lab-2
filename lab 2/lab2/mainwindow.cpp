#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
#include <QTimer>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ms=0;
    minutes=0;
    seconds=0;
    ms_2=0;
    minutes_2=0;
    seconds_2=0;
    timer =new QTimer(this);
    connect(timer, SIGNAL(timeout()), this,SLOT(Timer_slot()));

}

MainWindow::~MainWindow()
{
    delete ui;

}



void MainWindow::on_pushButton_clicked()
{
    QMessageBox::StandardButton Click= QMessageBox::question(this, "Close Window","Do u wona close window?", QMessageBox::Yes | QMessageBox::No);
    if(Click ==QMessageBox::Yes){
        QApplication::quit();
    }
}





void MainWindow::Timer_slot()
{
    ms++;
    if(ms==1000){
        seconds++;
        ms=0;
    }
    if(seconds==60){
        minutes++;
        seconds=0;
    }
    ui->ms->setText(QString::number(ms));
    ui->seconds->setText(QString::number(seconds));
    ui->minutes->setText(QString::number(minutes));
}


void MainWindow::on_Pause_Button_clicked()
{
    if(pause_start==true){
        ui->Pause_Button->setText("Start");
        timer->stop();
        pause_start=false;
        return;
    }
    if(pause_start==false){
        ui->Pause_Button->setText("Pause");
        timer->start(1);
        pause_start=true;
        return;
    }
}


void MainWindow::on_Clear_Button_clicked()
{
    timer->stop();
    ms=0;
    minutes=0;
    seconds=0;
    ui->ms->setText(QString::number(ms));
    ui->seconds->setText(QString::number(seconds));
    ui->minutes->setText(QString::number(minutes));
    ui->Pause_Button->setText("Start");
    pause_start=false;
}


void MainWindow::on_Circle_Button_clicked()
{
    ms_2=ms;
    minutes_2=minutes;
    seconds_2=seconds;
    ui->ms_8->setText(QString::number(ms_2));
    ui->seconds_8->setText(QString::number(seconds_2));
    ui->minutes_8->setText(QString::number(minutes_2));
}


void MainWindow::on_MarkTime_clicked()
{

    marktime =new MarkTime(this);
    marktime->show();
}


void MainWindow::on_AlarmCloak_clicked()
{
    alarm=new Alarm(this);
    alarm->show();
}

