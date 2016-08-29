#include<QApplication>
#include <QtGui>
#include <QtCore>
#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget *myWindow = new QWidget;
    myWindow->setWindowTitle("My App");
    QGridLayout *layout = new QGridLayout;

    QLabel *label1 = new QLabel("<b>Name:</b>");
    QLineEdit *txtName = new QLineEdit;

    QLabel *label2 = new QLabel("<b>Name:</b>");
    QLineEdit *txtName2 = new QLineEdit;
    QLabel *label3 = new QLabel("<b>Name:</b>");
    QLineEdit *txtName3 = new QLineEdit;

    layout->addWidget(label1, 0, 0);
    layout->addWidget(txtName, 0, 1);

    layout->addWidget(label2, 1, 0);
    layout->addWidget(txtName2, 1, 1);
    layout->addWidget(label3, 2, 0);
    layout->addWidget(txtName3, 2, 1);

    QPushButton *button1 = new QPushButton("OK");

    layout->addWidget(button1,4 ,0 , 1, 2);

    myWindow->setLayout(layout);

    myWindow->show();
    return app.exec();
}
