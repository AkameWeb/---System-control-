#include "dialogbg.h"
#include "ui_dialogbg.h"
#include "QSqlError"
#include "QMessageBox"
#include "dialogdocprint.h"

DialogBG::DialogBG(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogBG)
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
        query = new QSqlQuery(dbglobal);
        query->exec("CREATE TABLE Instr(NameInst TEXT, Sostoin TEXT, godV TEXT, garantia TEXT,Position TEXT);");
        query->exec("CREATE TABLE ArUser(FIO TEXT,Phone TEXT,NameInst TEXT,INNOrgan TEXT,SerNum TEXT,prise INTEGER);");
        model = new QSqlTableModel(this, dbglobal);
        modelUSER = new QSqlTableModel(this, dbglobal);
        model->setTable("Instr");
        model->select();

        modelUSER->setTable("ArUser");
        modelUSER->select();

        ui->tableView->setModel(model);
        ui->tableView_2->setModel(modelUSER);
    }
    // проверка локальной бд
    if (db.open()) {
        qDebug("open localhost");

        query = new QSqlQuery(db);
        query->exec("CREATE TABLE Instr(NameInst TEXT, Sostoin TEXT, godV TEXT, garantia TEXT,Position TEXT);");
        query->exec("CREATE TABLE ArUser(FIO TEXT,Phone TEXT,NameInst TEXT,INNOrgan TEXT,SerNum TEXT,prise INTEGER);");
        model = new QSqlTableModel(this, db);
        modelUSER = new QSqlTableModel(this, db);
        model->setTable("Instr");
        model->select();

        modelUSER->setTable("ArUser");
        modelUSER->select();

        ui->tableView->setModel(model);
        ui->tableView_2->setModel(modelUSER);
    } else {
        qDebug("no open localhost");
    }

}

DialogBG::~DialogBG()
{
    delete ui;
}

void DialogBG::on_tableView_2_clicked(const QModelIndex &index)
{
    row = index.row();
}

void DialogBG::on_pushButton_clicked()
{
    modelUSER->insertRow(modelUSER->rowCount());
}

void DialogBG::on_pushButton_2_clicked()
{
    modelUSER->removeRow(row);
}

void DialogBG::on_pushButton_3_clicked()
{
    modelUSER->select();
}

void DialogBG::on_pushButton_4_clicked()
{
    DialogDocPrint dialogPrint;
    //close();
    dialogPrint.setModal(true);
    dialogPrint.exec();
}

