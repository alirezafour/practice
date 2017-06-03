#include "mythread.h"
#include <QMutex>

MyThread::MyThread(QObject *parent) :
    QThread(parent)
{
    this->Stop = false;
}

void MyThread::run()
{
    for (int i = 0; i < 100000; ++i) {
        QMutex mutex;
        mutex.lock();
        if (this->Stop) {
            mutex.unlock();
            break;
        }
        mutex.unlock();
        this-msleep(100);

        emit NumberChanged(i);
    }
}

