/********************************************************************************
** Form generated from reading UI file 'orderswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERSWINDOW_H
#define UI_ORDERSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_OrdersWindow
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *OrdersWindow)
    {
        if (OrdersWindow->objectName().isEmpty())
            OrdersWindow->setObjectName("OrdersWindow");
        OrdersWindow->resize(903, 737);
        tableView = new QTableView(OrdersWindow);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(100, 20, 751, 581));
        pushButton = new QPushButton(OrdersWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 20, 61, 51));
        pushButton_2 = new QPushButton(OrdersWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 610, 751, 29));

        retranslateUi(OrdersWindow);

        QMetaObject::connectSlotsByName(OrdersWindow);
    } // setupUi

    void retranslateUi(QDialog *OrdersWindow)
    {
        OrdersWindow->setWindowTitle(QCoreApplication::translate("OrdersWindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("OrdersWindow", "<-", nullptr));
        pushButton_2->setText(QCoreApplication::translate("OrdersWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\213\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrdersWindow: public Ui_OrdersWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERSWINDOW_H
