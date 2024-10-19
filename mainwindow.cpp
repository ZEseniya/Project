#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    orderwindow = new OrdersWindow();
    connect(orderwindow, &OrdersWindow::mainWindow, this, &MainWindow::show);
    storagewindow = new StorageWindow();
    connect(storagewindow, &StorageWindow::mainWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_clicked()
{
    orderwindow->show();
    hide();
}


void MainWindow::on_pushButton_2_clicked()
{
    storagewindow->show();
    this->close();
}

