#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include"employeeinfo.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    if(!connOpen())
    {
        ui->label->setText("Failed to open the database");
    }
    else {
        {
            ui->label->setText("Connected to open the database");
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString username,password;
    username= ui->lineEdit1->text();
    password= ui->lineEdit2->text();
    if(!connOpen())
    {
            qDebug()<<"Failed to open the database";
            return;
    }
    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from employeeinfo where eid='"+username+"'and password='"+password+"'" );
    if(qry.exec())
    {
                int count=0;
                while(qry.next())
    {
                count++;
    }
    if(count==1)
    {

       ui->label->setText("Correct");
       connClose();
       this->hide();
        Employeeinfo employeeinfo;
        employeeinfo.setModal(true);
        employeeinfo.exec();

    }
                if(count>1)
                   ui->label->setText("Duplicate");
                if(count<1)
                   ui->label->setText("not correct");


    }
}
