#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    orderwindow = new OrdersWindow();
    //connect(orderwindow, &OrdersWindow::mainWindow, this, &MainWindow::show);
    storagewindow = new StorageWindow();
    //connect(storagewindow, &StorageWindow::mainWindow, this, &MainWindow::show);

    ui->stackedWidget->insertWidget(1, orderwindow);
    ui->stackedWidget->insertWidget(2, storagewindow);

}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    // orderwindow->show();
    // hide();
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    // storagewindow->show();
    // this->close();
}

