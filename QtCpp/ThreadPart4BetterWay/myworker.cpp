#include "myworker.h"

MyWorker::MyWorker(QObject *parent) : QObject(parent)
{

}

void MyWorker::doSetup(QThread &cThread)
{
    connect(&cThread, SIGNAL(started()),this, SLOT(doWork()));

}

void MyWorker::doWork()
{
    for (int i = 0; i < 100; ++i)
    {
        qDebug() << i;
    }
}

