#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    window->setWindowTitle("myWindow");

    QPushButton *btn1 = new QPushButton("One");
    QPushButton *btn2 = new QPushButton("Two");
    QPushButton *btn3 = new QPushButton("three");

    QHBoxLayout *Hlayout = new QHBoxLayout;
    QVBoxLayout *Vlayout = new QVBoxLayout;

    Vlayout->addWidget(btn1);
    Vlayout->addWidget(btn2);
    Vlayout->addWidget(btn3);

    window->setLayout(Vlayout);

//    Hlayout->addWidget(btn1);
//    Hlayout->addWidget(btn2);
//    Hlayout->addWidget(btn3);

//    window->setLayout(Hlayout);

    window->show();
    return app.exec();
}
