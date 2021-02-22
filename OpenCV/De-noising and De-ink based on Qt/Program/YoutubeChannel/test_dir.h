#ifndef TEST_DIR_H
#define TEST_DIR_H

#include <QDialog>

namespace Ui {
class test_Dir;
}

class test_Dir : public QDialog
{
    Q_OBJECT

public:
    explicit test_Dir(QWidget *parent = 0);
    ~test_Dir();

private slots:
    void on_pushButton_clicked();

private:
    Ui::test_Dir *ui;
};

#endif // TEST_DIR_H
