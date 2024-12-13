/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTableView *tableView;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_9;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(966, 471);
        tableView = new QTableView(Dialog);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(11, 11, 641, 451));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(680, 310, 80, 29));
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(810, 430, 135, 31));
        pushButton_5 = new QPushButton(Dialog);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(820, 380, 112, 29));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(810, 260, 138, 29));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(670, 260, 105, 29));
        pushButton_6 = new QPushButton(Dialog);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(840, 310, 80, 29));
        pushButton_7 = new QPushButton(Dialog);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(680, 60, 131, 29));
        pushButton_8 = new QPushButton(Dialog);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(680, 140, 131, 29));
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(680, 20, 211, 28));
        lineEdit_2 = new QLineEdit(Dialog);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(680, 100, 211, 28));
        pushButton_9 = new QPushButton(Dialog);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(660, 430, 141, 31));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "\320\236\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "\320\236\320\272\320\275\320\276 \320\261\321\203\321\205\320\263\320\260\320\273\321\202\320\265\321\200\320\270\320\270", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "\320\236\320\272\320\275\320\276 \320\262\320\276\320\267\320\262\321\200\320\260\321\202\320\260", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "\320\235\320\276\320\262\320\260\321\217 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dialog", "\320\237\320\265\321\207\320\260\321\202\321\214", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Dialog", "\320\240\320\260\321\201\321\207\321\221\321\202 \320\277\321\200\320\270\320\261\321\213\320\273\320\270", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Dialog", "\320\240\320\260\321\201\321\207\321\221\321\202 \321\200\320\260\321\201\321\205\320\276\320\264\320\276\320\262", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Dialog", "\320\236\320\272\320\275\320\276 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
