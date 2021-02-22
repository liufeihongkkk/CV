#ifndef TEST_QFILE_H
#define TEST_QFILE_H

#include <QDialog>

namespace Ui {
class test_qfile;
}

class test_qfile : public QDialog
{
    Q_OBJECT

public:
    explicit test_qfile(QWidget *parent = 0);
    ~test_qfile();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::test_qfile *ui;
};

#endif // TEST_QFILE_H
