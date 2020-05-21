#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QPixmap>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/logo_transparent.png");
    int w =ui->label_7->width();
    int h =ui->label_7->height();
    ui->label_7->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->statusBar->show();
    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/dell/Desktop/2nd Semester");
    if(!mydb.open())
    {
        ui->label_3->setText("Failed to open the database");
    }
    else
        {
            ui->label_3->setText("Connected to open the database");
        }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString username=ui->lineEdit->text();
    QString password=ui->lineEdit_2->text();
    if(username=="test" && password=="test")
    {
        //hide();
        //QSta::information(this,"Login","Username and Password is correct");
        //d=new Dialog(this);
        //d->show();
        ui->statusBar->showMessage("Username and Password is correct",5000);
    }
    else {
        //QMessageBox::warning(this,"Login","Username and Password is not correct");
        ui->statusBar->showMessage("Username and Password is not correct",5000);
    }
}
