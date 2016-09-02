#include <QCoreApplication>
#include <QList>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //qlist is a container ( you add item to it
    QList<int> List;

    // generic

    for (int i = 0; i < 10; ++i)
    {
        List.append(i);
    }

    List.removeOne(5); //remove number 5 from List

    foreach (int mNumber, List)
    {
        qDebug() << mNumber;
    }

    return a.exec();
}
