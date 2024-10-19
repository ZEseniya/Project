#ifndef STORAGEWINDOW_H
#define STORAGEWINDOW_H

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>

#include <QDialog>

namespace Ui {
class StorageWindow;
}

class StorageWindow : public QDialog
{
    Q_OBJECT

public:
    explicit StorageWindow(QWidget *parent = nullptr);
    ~StorageWindow();

signals:
    void mainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::StorageWindow *ui;
    QSqlDatabase db;
    QSqlQuery *query;
    QSqlRelationalTableModel *model;
};

#endif // STORAGEWINDOW_H
