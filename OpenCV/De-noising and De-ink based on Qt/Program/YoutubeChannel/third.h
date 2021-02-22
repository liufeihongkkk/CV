#ifndef THIRD_H
#define THIRD_H

#include <QDialog>

namespace Ui {
class Third;
}

class Third : public QDialog
{
    Q_OBJECT

public:
    explicit Third(QWidget *parent = 0);
    ~Third();

private slots:
    void on_pushButton_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::Third *ui;
};

#endif // THIRD_H
