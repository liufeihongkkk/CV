#include "test_filedialog.h"
#include "ui_test_filedialog.h"
#include <QFileDialog>
#include <QMessageBox>

test_fileDialog::test_fileDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::test_fileDialog)
{
    ui->setupUi(this);
}

test_fileDialog::~test_fileDialog()
{
    delete ui;
}

void test_fileDialog::on_pushButton_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this,"open a file","/home/pi");
    QMessageBox::information(this,"..",file_name);
}
