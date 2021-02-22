#include "third.h"
#include "ui_third.h"
#include <QMessageBox>

Third::Third(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Third)
{
    ui->setupUi(this);
    ui->checkBox->setChecked(true);
}

Third::~Third()
{
    delete ui;
}

void Third::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked())
        QMessageBox::information(this,"title","jason");
    if(ui->radioButton_2->isChecked())
        QMessageBox::information(this,"title","Jeremy");
}

void Third::on_checkBox_stateChanged(int arg1)
{
    if(ui->checkBox->isChecked()){
        QMessageBox::information(this,"title","yes,u like it");
    }else{
        QMessageBox::information(this,"title","no,u do not like it");
    }
}
