#include "gettheimage.h"
#include "ui_gettheimage.h"
#include <QPixmap>
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QDesktopServices>
#include <QUrl>
#include <QProcess>

GetTheImage::GetTheImage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GetTheImage)
{
    ui->setupUi(this);
    ui->setupUi(this);
    QPixmap pix(":/Resources/img/main.JPG");
    ui->label_getimage->setPixmap(pix.scaled(500,300,Qt::KeepAspectRatio));
}

GetTheImage::~GetTheImage()
{
    delete ui;
}

void GetTheImage::on_pushButton_clicked()
{
    //only get the image file name
    file_name =QFileDialog::getOpenFileName(this,"open a file","/home/pi/YoutubeChannel");
    QMessageBox::warning(this,"the route of the image",file_name);
}

void GetTheImage::on_pushButton_2_clicked()
{
    system("luvcview -s 1080x720");
}

void GetTheImage::on_pushButton_3_clicked()
{
    system("sudo scrot -s /home/pi/YoutubeChannel/get_image/screenShot/initial.jpg");
    file_name ="/home/pi/YoutubeChannel/get_image/screenShot/initial.jpg";
}
