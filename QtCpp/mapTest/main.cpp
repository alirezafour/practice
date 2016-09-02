#include <QCoreApplication>
#include <QDebug>
#include <QMap>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // skip-list-base dictionary <<has Key value for each Item>>
    QMap<int, QString> Employee;

    Employee.insert(1, "Alireza");
    Employee.insert(2, "Mohamad");
    Employee.insert(3, "Sorosh");
    Employee.insert(4, "Sasan");


    foreach (int i, Employee.keys())
    {
        qDebug() << Employee[i];

    }

    QMapIterator<int, QString> Iter(Employee);

    while(Iter.hasNext())
    {
        Iter.next();
        qDebug() << Iter.key() << " = " << Iter.value();
    }



    return a.exec();
}
