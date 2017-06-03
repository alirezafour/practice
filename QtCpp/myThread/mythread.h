#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>
#include <QMutex>


class MyThread : public QThread
{
public:

    MyThread();
    void run();
    QString name;
    bool stop;
};

#endif // MYTHREAD_H
