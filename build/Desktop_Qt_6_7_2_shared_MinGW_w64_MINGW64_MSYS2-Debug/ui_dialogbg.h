/********************************************************************************
** Form generated from reading UI file 'dialogbg.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBG_H
#define UI_DIALOGBG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DialogBG
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QTableView *tableView;
    QLabel *label;
    QTableView *tableView_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *DialogBG)
    {
        if (DialogBG->objectName().isEmpty())
            DialogBG->setObjectName("DialogBG");
        DialogBG->resize(709, 699);
        gridLayout = new QGridLayout(DialogBG);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(DialogBG);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        tableView = new QTableView(DialogBG);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 1, 0, 1, 2);

        label = new QLabel(DialogBG);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        tableView_2 = new QTableView(DialogBG);
        tableView_2->setObjectName("tableView_2");

        gridLayout->addWidget(tableView_2, 3, 0, 1, 2);

        pushButton = new QPushButton(DialogBG);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        pushButton_2 = new QPushButton(DialogBG);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 4, 1, 1, 1);

        pushButton_3 = new QPushButton(DialogBG);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout->addWidget(pushButton_3, 5, 0, 1, 2);

        pushButton_4 = new QPushButton(DialogBG);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout->addWidget(pushButton_4, 0, 1, 1, 1);


        retranslateUi(DialogBG);

        QMetaObject::connectSlotsByName(DialogBG);
    } // setupUi

    void retranslateUi(QDialog *DialogBG)
    {
        DialogBG->setWindowTitle(QCoreApplication::translate("DialogBG", "\320\221\321\203\321\205\320\263\320\260\320\273\321\202\320\265\321\200\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("DialogBG", "\320\236\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label->setText(QCoreApplication::translate("DialogBG", "\320\220\321\200\320\265\320\275\320\264\320\276\320\264\320\260\321\202\320\265\320\273\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogBG", "\320\235\320\276\320\262\320\260\321\217 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DialogBG", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265", nullptr));
        pushButton_3->setText(QCoreApplication::translate("DialogBG", "\320\236\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        pushButton_4->setText(QCoreApplication::translate("DialogBG", "\320\237\320\265\321\207\320\260\321\202\321\214 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogBG: public Ui_DialogBG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBG_H
