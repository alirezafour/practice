#include "widget.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QStringList list {"hi",
                     "alireza",
                     "alirezafour",
                     "test",
                     "another test",
                     "eee",
                     "ooo",
                     "hahaa",
                     "set",
                     "get"};
    Widget w(list);
    w.show();

    return a.exec();
}
