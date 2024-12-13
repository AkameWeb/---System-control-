/********************************************************************************
** Form generated from reading UI file 'dialogsotr.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSOTR_H
#define UI_DIALOGSOTR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DialogSotr
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *DialogSotr)
    {
        if (DialogSotr->objectName().isEmpty())
            DialogSotr->setObjectName("DialogSotr");
        DialogSotr->resize(769, 431);
        tableView = new QTableView(DialogSotr);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 10, 571, 411));
        pushButton = new QPushButton(DialogSotr);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(640, 190, 111, 29));
        pushButton_2 = new QPushButton(DialogSotr);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(670, 150, 83, 29));
        pushButton_3 = new QPushButton(DialogSotr);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(590, 50, 171, 31));
        pushButton_4 = new QPushButton(DialogSotr);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(590, 10, 171, 31));

        retranslateUi(DialogSotr);

        QMetaObject::connectSlotsByName(DialogSotr);
    } // setupUi

    void retranslateUi(QDialog *DialogSotr)
    {
        DialogSotr->setWindowTitle(QCoreApplication::translate("DialogSotr", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogSotr", "\320\235\320\276\320\262\320\260\321\217 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DialogSotr", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("DialogSotr", "\320\236\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", nullptr));
        pushButton_4->setText(QCoreApplication::translate("DialogSotr", "\320\237\320\265\321\207\320\260\321\202\321\214 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSotr: public Ui_DialogSotr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSOTR_H
