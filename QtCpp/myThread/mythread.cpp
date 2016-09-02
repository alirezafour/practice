#include "mythread.h"
#include <QDebug>

MyThread::MyThread()
{


}

void MyThread::run()
{
    qDebug() << "Running " << this->name;
    for (int i = 0; i < 1000; ++i)
    {
        if (this->stop)
        {
            break;
        }
        qDebug() << this->name << QString::number(i);
    }
}

