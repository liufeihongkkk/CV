#include "test_dir.h"
#include "ui_test_dir.h"
#include <QDir>
#include <QMessageBox>

test_Dir::test_Dir(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::test_Dir)
{
    ui->setupUi(this);
    QDir dir("/home/pi");
    /*
    if(dir.exists()){
        QMessageBox::information(this,"title","true");
    } else{
        QMessageBox::information(this,"title","false");
    }*/
    foreach(QFileInfo var,dir.entryInfoList()){
        if(var.isDir())   //or is file
        ui->comboBox->addItem("Dir:"+var.absoluteFilePath());
    }
}

test_Dir::~test_Dir()
{
    delete ui;
}

void test_Dir::on_pushButton_clicked()
{
    QDir dir("/home/pi/apple");
    if(dir.exists()){
        QMessageBox::information(this,"","dir exists");
    }else{
        dir.mkpath("/home/pi/apple");
    }
}
