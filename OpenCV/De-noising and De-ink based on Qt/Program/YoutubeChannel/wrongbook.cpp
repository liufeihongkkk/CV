#include "wrongbook.h"
#include "ui_wrongbook.h"
#include "http_network.h"
#include <QPixmap>
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QDesktopServices>
#include <QUrl>
#include <QProcess>
#include <camera.h>

WrongBook::WrongBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WrongBook)
{
    ui->setupUi(this);
    QPixmap pix(":/Resources/img/main.JPG");
/*
    int w = ui->label->width();
    int h = ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));*/
    ui->label->setPixmap(pix.scaled(300,400,Qt::KeepAspectRatio));
//setStyleSheet("background-color:#FFFF77"); //set the color of bg
}

WrongBook::~WrongBook()
{
    delete ui;
}
/*Open from the folder:*/
void WrongBook::on_pushButton_clicked()
{
    flag=0;
    /*only get the image file name*/
    file_name =QFileDialog::getOpenFileName(this,"open a file","/home/pi/YoutubeChannel");
    QMessageBox::warning(this,"the route of the image",file_name);
}

/*Set The Camera Position:*/
void WrongBook::on_pushButton_2_clicked()
{
    flag=1;
    file_name ="/home/pi/YoutubeChannel/get_image/screenShot/initial.jpg";
    camera c;
    c.setModal(true);
    c.exec();
    //system("luvcview -s 1080x720");

}

void WrongBook::on_pushButton_3_clicked()
{
//system("sudo scrot -s /home/pi/YoutubeChannel/get_image/screenShot/initial.jpg");
//file_name ="/home/pi/YoutubeChannel/get_image/screenShot/initial.jpg";
    screenShot s;
    s.setModal(true);
    s.exec();
}
/*This is the method of removing mass*/
void WrongBook::on_pushButton_4_clicked()
{
    if(flag==0){
    QString s="cp ";
    QString t="";
    s+=file_name;
    s+=" /home/pi/YoutubeChannel/remove_mass/Other_Method/old.jpg";
    system(s.toStdString().data());
//system("");
    /*the key element is the "target"*/
    t+="cd /home/pi/YoutubeChannel/remove_mass/Other_Method ; ./target";
    system(t.toStdString().data());
//system("");
    }
    else{
        QString s="cp ";
        QString t="";
        s+=file_name;
        s+=" /home/pi/YoutubeChannel/remove_mass/old.jpg";
        system(s.toStdString().data());
    //system("");
        /*the key element is the "target"*/
        t+="cd /home/pi/YoutubeChannel/remove_mass/; ./target";
        system(t.toStdString().data());
    }
}
/*Remove the red color:*/
void WrongBook::on_pushButton_5_clicked()
{
    /*first ,judge the image resources:*/
    if(flag==0){
        QString s="cp ";
        QString t="";
        s+=" /home/pi/YoutubeChannel/remove_mass/Other_Method/new.png";
        s+=" /home/pi/YoutubeChannel/remove/old.png";
        system(s.toStdString().data());
        t+="cd /home/pi/YoutubeChannel/remove ; ./target";
        system(t.toStdString().data());
    }   /*The camera's flag represents 1*/
    else{
        QString s="cp ";
        QString t="";
        s+=file_name;
        s+=" /home/pi/YoutubeChannel/remove/Camera_red/old.jpg";
        system(s.toStdString().data());
        t+="cd /home/pi/YoutubeChannel/remove/Camera_red/ ; ./target";
        system(t.toStdString().data());
    }

}

void WrongBook::on_pushButton_7_clicked()
{
    QString s="cp ";
    title=QFileDialog::getOpenFileName(this,"open a file","/home/pi/YoutubeChannel");
    s+=title;
    s+=" /home/pi/YoutubeChannel/recognize/title.png";
    system(s.toStdString().data());
    system("cd /home/pi/YoutubeChannel/recognize/;sudo python recognize.py");

    QFile file("/home/pi/YoutubeChannel/recognize/1.txt");
    if(!file.open(QFile::ReadOnly|QFile::Text)){
        QMessageBox::warning(this,"title","file is not open");
    }
    QTextStream in(&file);
    QString text =in.readAll();
    ui->plainTextEdit->setPlainText(text);
}

void WrongBook::on_pushButton_8_clicked()
{
//QDesktopServices::openUrl(QUrl("/home/pi/YoutubeChannel/remove/after.png", QUrl::TolerantMode));
   QDesktopServices::openUrl(QUrl("/home/pi/YoutubeChannel", QUrl::TolerantMode));
}

void WrongBook::on_pushButton_9_clicked()
{
    QDesktopServices::openUrl(QUrl("/home/pi/YoutubeChannel/model/model.odg", QUrl::TolerantMode));
}
/*search the web resource pic*/
void WrongBook::on_pushButton_6_clicked()
{
    system("cd /home/pi/YoutubeChannel/build-net_workAccessManager-unknown_448c59-Debug;./net_workAccessManager");
}
/*Remove the Blue color*/
void WrongBook::on_pushButton_10_clicked()
{
    if(flag==1){
        QString s="cp ";
        QString t="";
        s+=file_name;
        s+=" /home/pi/YoutubeChannel/remove/Camera_red/blue/old.jpg";
        system(s.toStdString().data());
        t+="cd /home/pi/YoutubeChannel/remove/Camera_red/blue/ ; ./target";
        system(t.toStdString().data());
    }else{
        QString t="";
        t+="cd /home/pi/YoutubeChannel/remove/remove_blue; ./target";
        system(t.toStdString().data());
    }
}
