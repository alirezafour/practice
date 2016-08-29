#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    StatLabel = new QLabel(this);
    statProgress = new QProgressBar(this);

    ui->statusBar->addPermanentWidget(StatLabel);
    ui->statusBar->addPermanentWidget(statProgress, 1);
    statProgress->setTextVisible(false);
    StatLabel->setText("hello");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionDo_something_triggered()
{
    ui->statusBar->showMessage("Hello world", 2000);
    statProgress->setValue(45);
}
