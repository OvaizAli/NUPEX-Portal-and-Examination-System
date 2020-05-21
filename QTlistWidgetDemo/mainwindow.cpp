#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/img/Button-512.png"),"Mark");
    ui->listWidget->addItem(item);
    //ui->listWidget->addItem("John");
    //ui->listWidget->addItem("Ali");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //QMessageBox::information(this,"Title",ui->listWidget->currentItem()->text());
    ui->listWidget->currentItem()->setForeground(Qt::red);
}
