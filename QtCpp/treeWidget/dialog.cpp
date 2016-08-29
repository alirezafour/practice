#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->treeWidget->setColumnCount(2);
    addRoot("Hello", "world");


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    addRoot("Hello", "world");
}

void Dialog::addRoot(QString name, QString description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
    itm->setText(0, name);
    itm->setText(1, description);
    ui->treeWidget->addTopLevelItem(itm);
    addChild(itm, "One", "Two");
    addChild(itm, "Tree", "Four");

}

void Dialog::addChild(QTreeWidgetItem *parent, QString name, QString description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    itm->setText(0, name);
    itm->setText(1, description);
    parent->addChild(itm);
}
