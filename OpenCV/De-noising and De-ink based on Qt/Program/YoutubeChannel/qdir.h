#ifndef QDIR_H
#define QDIR_H

#include <QDialog>

namespace Ui {
class Qdir;
}

class Qdir : public QDialog
{
    Q_OBJECT

public:
    explicit Qdir(QWidget *parent = 0);
    ~Qdir();

private:
    Ui::Qdir *ui;
};

#endif // QDIR_H
