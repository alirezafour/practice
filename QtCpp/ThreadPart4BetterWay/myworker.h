#ifndef MYWORKER_H
#define MYWORKER_H

#include <QObject>
#include <QDebug>
#include <QThread>

class MyWorker : public QObject
{
    Q_OBJECT
public:
    explicit MyWorker(QObject *parent = 0);
    void doSetup(QThread &cThread);

signals:

public slots:
    void doWork();
};

#endif // MYWORKER_H
