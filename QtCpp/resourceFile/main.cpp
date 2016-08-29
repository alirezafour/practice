#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

void Write(QString FileName)
{
    QFile mFile(FileName);

    if (!mFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "Could not open file fir writing";
        return;
    }
    QTextStream out(&mFile);
    out << "Hello world!";
    mFile.close();
}

void Read(QString FileName)
{
    QFile mFile(FileName);

    if (!mFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Could not open file fir reading";
        return;
    }
    QTextStream in(&mFile);
    QString mtext = in.readAll();

    qDebug() << mtext;
    mFile.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Read(":/MyFiles/resourceFile.pro");

    return a.exec();
}
