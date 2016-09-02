#include <QCoreApplication>
#include <QThread>
#include "myworker.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QThread cThread;
    MyWorker cWorker;

    cWorker.doSetup(cThread);
    cWorker.moveToThread(&cThread);
    cThread.start();

    return a.exec();
}
