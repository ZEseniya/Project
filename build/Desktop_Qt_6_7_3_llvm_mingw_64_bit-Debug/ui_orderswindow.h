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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrdersWindow
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QPushButton *pushButton_2;

    void setupUi(QDialog *OrdersWindow)
    {
        if (OrdersWindow->objectName().isEmpty())
            OrdersWindow->setObjectName("OrdersWindow");
        OrdersWindow->resize(903, 737);
        pushButton = new QPushButton(OrdersWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 20, 61, 51));
        widget = new QWidget(OrdersWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(100, 20, 781, 651));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(widget);
        tableView->setObjectName("tableView");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(tableView);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(pushButton_2);


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
