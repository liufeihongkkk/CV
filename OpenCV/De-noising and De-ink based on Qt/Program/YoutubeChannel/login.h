#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "gettheimage.h"
#include "wrongbook.h"

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_pushButton_clicked();
    
private:
    Ui::login *ui;
    WrongBook *w;
};

#endif // LOGIN_H
