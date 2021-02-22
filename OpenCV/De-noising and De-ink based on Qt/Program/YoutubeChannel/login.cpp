#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include "wrongbook.h"
#include "gettheimage.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    QPixmap pix(":/Resources/img/login.JPG");
//int w = ui->label_login->width();
//int h = ui->label_login->height();
    ui->label_login->setPixmap(pix.scaled(300,200,Qt::KeepAspectRatio));
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
  QString username =ui->lineEdit_username->text();
  QString password =ui->lineEdit_password->text();
  if(username == "liufeihong" && password == "123456"){
      QMessageBox::information(this, "Login","Login successful");
      w = new WrongBook(this);
      w->show();
  }
  else{
      QMessageBox::warning(this, "Login","Login error");
  }
}
