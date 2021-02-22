#include "test_qfile.h"
#include "ui_test_qfile.h"
#include "QFile"
#include "QTextStream"
#include <QMessageBox>
#include <QFileDialog>

test_qfile::test_qfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::test_qfile)
{
    ui->setupUi(this);
}

test_qfile::~test_qfile()
{
    delete ui;
}

void test_qfile::on_pushButton_clicked()
{
    QString file_name =QFileDialog::getOpenFileName(this,"open a file","/home/pi");
    QFile file(file_name);
    if(!file.open(QFile::WriteOnly|QFile::Text)){ //here will call for the file
        QMessageBox::warning(this,"title","file is not open");
    }
    QTextStream out(&file);
    QString text =ui->plainTextEdit->toPlainText();
    out<<text;
    file.flush();
    file.close();
}

void test_qfile::on_pushButton_2_clicked()
{
    QFile file("/home/pi/myfile.txt");
    if(!file.open(QFile::ReadOnly|QFile::Text)){ //here will call for the file
        QMessageBox::warning(this,"title","file is not open");
    }
    QTextStream in(&file);
    QString text =in.readAll();
    ui->plainTextEdit->setPlainText(text);

    file.close();
}
