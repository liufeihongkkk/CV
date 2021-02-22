#ifndef WRONGBOOK_H
#define WRONGBOOK_H

#include <QDialog>
#include "mythread.h"
#include "screenshot.h"
#include "camera.h"

namespace Ui {
class WrongBook;
}

class WrongBook : public QDialog
{
    Q_OBJECT

public:
    explicit WrongBook(QWidget *parent = 0);
    ~WrongBook();
    /*Define the whole variables*/
    QString file_name;
    QString title;
      /*The flag*/
    int flag;
private slots:
    void on_pushButton_clicked();
    /*indicate the camera*/
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::WrongBook *ui;

public slots:
};

#endif // WRONGBOOK_H
