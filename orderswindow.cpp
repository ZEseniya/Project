#include "orderswindow.h"
#include "ui_orderswindow.h"

OrdersWindow::OrdersWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::OrdersWindow)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Database.db");
    db.open();

    model = new QSqlRelationalTableModel(this, db);
    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    model->setTable("Заказы");
    model->select();
    ui->tableView->setModel(model);
}

OrdersWindow::~OrdersWindow()
{

    delete ui;
}

void OrdersWindow::on_pushButton_clicked()
{
    model->insertRow(model->rowCount());
}

