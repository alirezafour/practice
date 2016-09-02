#include <QCoreApplication>
#include <QDebug>
#include <QLinkedList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QLinkedList<int> lLinst; //linked to next item in the list <has pointer to the next>
    //very fast for add and remove than list

    lLinst << 1 << 3 << 5;
    lLinst.append(45);

    foreach (int i, lLinst) {
        qDebug() << i;
    }


    return a.exec();
}
