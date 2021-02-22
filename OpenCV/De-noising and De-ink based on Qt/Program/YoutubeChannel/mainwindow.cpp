#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secdialog.h"
#include <QMessageBox>
#include <QDebug>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    /*in the construct method,we can initialize something*/
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Resources/img/main.JPG");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    /*the second part is the ratio*/
    ui->statusBar->addPermanentWidget(ui->label,1);
    ui->statusBar->addPermanentWidget(ui->progressBar,3);
}

MainWindow::~MainWindow()
{
    delete ui;
}
/* 1.QMessageBox Tururial
void MainWindow::on_pushButton_clicked()
{
    // void about
    // StandardButton critical  ;the icon is different
    // StandardButton information
    // StandardButton question
    // StandardButton warning
    QMessageBox::about(this,"My Title","This is my custom message");
    QMessageBox::critical(this,"My Title","This is my custom message");
    QMessageBox::information(this,"My Title","This is my custom message");
    QMessageBox::StandardButton reply = QMessageBox::question(this,"My Title","This is my custom message",
                          QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes){
        QApplication::quit();
    } else{
        qDebug() << "No is clicked";  //debug message
    }
}

   2.open other interface file
void MainWindow::on_pushButton_clicked()
{
    hide(); //hide the main window
    SecDialog secDeialog;     //or declared in the head file of mainwindow.cpp
    secDeialog.setModal(true);
    secDeialog.exec();
}

 3. fetch the string type character
void MainWindow::on_pushButton_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_psw->text();
    if(username == "test" && password == "test"){
        QMessageBox::information(this,"Login","Login successfully");
        //hide(); //hide the main window
        //ui->statusBar->showMessage("Login Successfully",5000);  //5 sec
        ui->label->setText(username);
        SecDialog secDeialog;     //or declared in the head file of mainwindow.cpp
        secDeialog.setModal(true);
        secDeialog.exec();
    }else{
        QMessageBox::warning(this,"Login","Username or Password is wrong");
    }
}
*/
