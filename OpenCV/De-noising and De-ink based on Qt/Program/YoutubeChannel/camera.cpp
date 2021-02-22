#include "camera.h"
#include "ui_camera.h"
#include "wrongbook.h"


camera::camera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::camera)
{
    ui->setupUi(this);
    QPixmap pix(":/Resources/img/camera.png");
    ui->label_camera->setPixmap(pix.scaled(300,200,Qt::KeepAspectRatio));
}

camera::~camera()
{
    delete ui;
}

void camera::on_pushButton_clicked()
{

//system("luvcview -s 1080x720");
    system("luvcview");

/* Other Method
  screenShot s;
  s.setModal(true);
  s.exec();*/
}
