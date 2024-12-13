#include "dialogvs.h"
#include "ui_dialogvs.h"
#include "QSqlError"
#include "QMessageBox"
#include "dialogdocprint.h"

DialogVS::DialogVS(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogVS)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    dbglobal = QSqlDatabase::addDatabase("QSQLITE");

    // глобальная бд
    dbglobal.setHostName(""); // хост бд
    dbglobal.setDatabaseName(""); // имя
    dbglobal.setUserName(""); // имя user бд
    dbglobal.setPassword(""); // пароль
    db.setDatabaseName("./BD.db");

    bool connected = dbglobal.open();
    if (!connected) {
        QMessageBox::critical( // Диалог с сообщением об ошибке.
            parent,                      // Родительский виджет.
            QObject::tr("Database Error"),   // Заголовок.
            dbglobal.lastError().text());          // Текст сообщения.
        qDebug("no open global");
        //return false;  //Вернуть признак неудачного подключения.
    }else{
        qDebug("open global");
        query = new QSqlQuery(dbglobal);
        query->exec("create table Vozr(IDArUserAr TEXT, Number TEXT, NameInstr TEXT, Prise INTEGER, UslVZ TEXT);");
        query->exec("create table Rem(IDVozrRemAr TEXT,Number TEXT,Neispr TEXT,DataRem TEXT,Prise INTEGER);");
        model = new QSqlTableModel(this, dbglobal);
        modelSER = new QSqlTableModel(this, dbglobal);
        model->setTable("Vozr");
        model->select();

        modelSER->setTable("Rem");
        modelSER->select();

        ui->tableView->setModel(model);
        ui->tableView_2->setModel(modelSER);

    }
    // проверка локальной бд
    if (db.open()) {
        qDebug("open localhost");
        query = new QSqlQuery(db);
        query->exec("create table Vozr(IDArUserAr TEXT, Number TEXT, NameInstr TEXT, Prise INTEGER, UslVZ TEXT);");
        query->exec("create table Rem(IDVozrRemAr TEXT,Number TEXT,Neispr TEXT,DataRem TEXT,Prise INTEGER);");
        model = new QSqlTableModel(this, db);
        modelSER = new QSqlTableModel(this, db);
        model->setTable("Vozr");
        model->select();

        modelSER->setTable("Rem");
        modelSER->select();

        ui->tableView->setModel(model);
        ui->tableView_2->setModel(modelSER);

    } else {
        qDebug("no open localhost");
    }

}

DialogVS::~DialogVS()
{
    delete ui;
}

void DialogVS::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}


void DialogVS::on_tableView_2_clicked(const QModelIndex &index)
{
    row2 = index.row();
}


void DialogVS::on_pushButton_2_clicked()
{
    model->removeRow(row);
}


void DialogVS::on_pushButton_5_clicked()
{
    modelSER->removeRow(row2);
}


void DialogVS::on_pushButton_clicked()
{
    model->insertRow(model->rowCount());
}


void DialogVS::on_pushButton_4_clicked()
{
    modelSER->insertRow(modelSER->rowCount());
}


void DialogVS::on_pushButton_3_clicked()
{
    modelSER->select();
    model->select();
}


void DialogVS::on_pushButton_6_clicked()
{
    DialogDocPrint dialogPrint;
    //close();
    dialogPrint.setModal(true);
    dialogPrint.exec();
}

