#include "mythread.h"
#include <QtCore>
MyThread::MyThread(QObject *parent) :
    QThread(parent)
{

}

void MyThread::run(){
    for(int i=0; i<10000;i++){
        QMutex mutex;
        mutex.lock();
        if(this->stop) break;
        mutex.unlock();

        emit camera(i);

        this->msleep(1000);
    }
}
