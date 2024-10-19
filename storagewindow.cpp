#include "storagewindow.h"
#include "ui_storagewindow.h"

StorageWindow::StorageWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StorageWindow)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE", "connection1");
    db.setDatabaseName("Database.db");
    db.open();

    model = new QSqlRelationalTableModel(this, db);
    model->setTable("Склад");
    model->select();
    ui->tableView->setModel(model);
}

StorageWindow::~StorageWindow()
{
    delete ui;
}

void StorageWindow::on_pushButton_clicked()
{
    this->close();
    emit mainWindow();
}

