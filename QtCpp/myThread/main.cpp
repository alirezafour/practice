#include <QCoreApplication>
#include "mythread.h"
#include <QThread>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MyThread mThread1;
    mThread1.name = "Thread1";
    mThread1.start(QThread::HighestPriority);
    MyThread mThread2;
    mThread2.name = "Thread2";
    mThread2.start();
    MyThread mThread3;
    mThread3.name = "Thread3";
    mThread3.start(QThread::LowestPriority);

    return a.exec();
}
