#ifndef ORDERSWINDOW_H
#define ORDERSWINDOW_H

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>

#include <QDialog>

namespace Ui {
class OrdersWindow;
}

class OrdersWindow : public QDialog
{
    Q_OBJECT

public:
    explicit OrdersWindow(QWidget *parent = nullptr);
    ~OrdersWindow();

signals:
    void mainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::OrdersWindow *ui;
    QSqlDatabase db;
    QSqlQuery *query;
    QSqlRelationalTableModel *model;
};

#endif // ORDERSWINDOW_H
