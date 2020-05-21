#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem(QIcon(":/rec/img/Button-512.png"),"Mark");
    ui->comboBox->addItem(QIcon(":/rec/img/close_button_2-512.png"),"Jhon");
    ui->comboBox->addItem(QIcon(":/rec/img/open-file-icon.png"),"Ali");
}

MainWindow::~MainWindow()
{
    delete ui;
}
