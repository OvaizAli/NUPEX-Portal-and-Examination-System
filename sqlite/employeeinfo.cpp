#include "employeeinfo.h"
#include "ui_employeeinfo.h"

Employeeinfo::Employeeinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Employeeinfo)
{
    ui->setupUi(this);
}

Employeeinfo::~Employeeinfo()
{
    delete ui;
}
