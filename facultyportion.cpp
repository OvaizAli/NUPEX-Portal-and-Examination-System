#include "facultyportion.h"
#include "ui_facultyportion.h"

FacultyPortion::FacultyPortion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FacultyPortion)
{
    ui->setupUi(this);
}

FacultyPortion::~FacultyPortion()
{
    delete ui;
}

void FacultyPortion::on_pushButton_clicked()
{

}
