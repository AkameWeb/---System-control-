#include "dialog.h"
#include "ui_dialog.h"
#include "dialogbg.h"
#include "dialogvs.h"
#include "dialogsotr.h"
#include "QSqlError"
#include "QMessageBox"
#include "QPainter"
#include "QPrintDialog"
#include "QPrinter"


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    dbglobal = QSqlDatabase::addDatabase("QSQLITE");

    // глобальная бд
    dbglobal.setHostName("localhost"); // хост бд
    dbglobal.setDatabaseName("mydb1"); // имя
    dbglobal.setUserName("root"); // имя user бд
    dbglobal.setPassword("mypassword"); // пароль

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
        // создание таблицы локальной бд
        query = new QSqlQuery(dbglobal);
        query->exec("CREATE TABLE Instr(NameInst TEXT, Sostoin TEXT, godV TEXT, garantia TEXT, "
                    "Position TEXT);");

        model = new QSqlTableModel(this, dbglobal);
        model->setTable("Instr");
        model->select();

        ui->tableView->setModel(model);

    }
    // проверка локальной бд
    if (db.open()) {
        qDebug("open localhost");
        // создание таблицы локальной бд
        query = new QSqlQuery(db);
        query->exec("CREATE TABLE Instr(NameInst TEXT, Sostoin TEXT, godV TEXT, garantia TEXT, "
                    "Position TEXT);");
        model = new QSqlTableModel(this, db);
        model->setTable("Instr");
        model->select();
        ui->tableView->setModel(model);
    } else {
        qDebug("no open localhost");
    }


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}


void Dialog::on_pushButton_clicked()
{
    model->insertRow(model->rowCount());
}


void Dialog::on_pushButton_2_clicked()
{
    model->removeRow(row);
}


void Dialog::on_pushButton_3_clicked()
{
    model->select();
}


void Dialog::on_pushButton_4_clicked()
{
    DialogBG dialogbg;
    close();
    dialogbg.setModal(true);
    dialogbg.exec();
}


void Dialog::on_pushButton_5_clicked()
{
    DialogVS dialogvs;
    close();
    dialogvs.setModal(true);
    dialogvs.exec();
}


void Dialog::on_pushButton_6_clicked()
{
    QPrinter printer;
    QPrintDialog dialog(&printer, this);
    if(dialog.exec() == QDialog::Accepted){
        QPainter painter(&printer);
        ui->tableView->render(&painter);

    }
}


void Dialog::on_pushButton_9_clicked()
{
    DialogSotr sotr;
    sotr.setModal(true);
    sotr.exec();
}


void Dialog::on_pushButton_7_clicked()
{
    bool connected = dbglobal.open();
    if (connected) {

        QSqlQuery query;
        QString sweg= "Select Sum(prise) From ArUser;";

        query.exec(sweg);
        while (query.next())    {
            ui->lineEdit->setText(query.value(0).toString());
            break;
        }

    }

    else {

        QSqlQuery query;
        QString sweg= "Select Sum(prise) From ArUser;";

        query.exec(sweg);
        while (query.next())    {
            ui->lineEdit->setText(query.value(0).toString());
            break;
        }
    }

}


void Dialog::on_pushButton_8_clicked()
{
    bool connected = dbglobal.open();
    if (connected) {

        QSqlQuery query;
        QString sweg= "Select Sum(Prise) From Vozr;";

        query.exec(sweg);
        while (query.next())    {
            ui->lineEdit_2->setText(query.value(0).toString());
            break;
        }

    }

    else{

        QSqlQuery query;
        QString sweg= "Select Sum(Prise) From Vorz;";

        query.exec(sweg);
        while (query.next())    {
            ui->lineEdit_2->setText(query.value(0).toString());
            break;
        }
    }
}

