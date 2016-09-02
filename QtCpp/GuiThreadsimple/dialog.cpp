#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    mThread = new MyThread(this);
    connect(mThread, SIGNAL(NumberChanged(int)), this, SLOT(onNumberChanged(int)));

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::onNumberChanged(int Number)
{
    ui->label->setText(QString::number(Number));
}

void Dialog::on_pushButton_Start_clicked()
{
    //start btn
    mThread->Stop = false;
    mThread->start();

}

void Dialog::on_pushButton_Stop_clicked()
{
    //stop btn
    mThread->Stop = true;

}
