/********************************************************************************
** Form generated from reading UI file 'storagewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORAGEWINDOW_H
#define UI_STORAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_StorageWindow
{
public:
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QDialog *StorageWindow)
    {
        if (StorageWindow->objectName().isEmpty())
            StorageWindow->setObjectName("StorageWindow");
        StorageWindow->resize(908, 636);
        tableView = new QTableView(StorageWindow);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(110, 20, 771, 611));
        pushButton = new QPushButton(StorageWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 20, 71, 61));

        retranslateUi(StorageWindow);

        QMetaObject::connectSlotsByName(StorageWindow);
    } // setupUi

    void retranslateUi(QDialog *StorageWindow)
    {
        StorageWindow->setWindowTitle(QCoreApplication::translate("StorageWindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("StorageWindow", "<-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StorageWindow: public Ui_StorageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORAGEWINDOW_H
