#ifndef HAPPY_H
#define HAPPY_H

#include <QDialog>

namespace Ui {
class happy;
}

class happy : public QDialog
{
    Q_OBJECT

public:
    explicit happy(QWidget *parent = 0);
    ~happy();

private:
    Ui::happy *ui;
};

#endif // HAPPY_H
