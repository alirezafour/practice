#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QStringList &string, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    model = new MyStringListModel(string, this);
    ui->setupUi(this);
    ui->listView->setModel(model);
}

Widget::~Widget()
{
    delete ui;
    delete model;
}
