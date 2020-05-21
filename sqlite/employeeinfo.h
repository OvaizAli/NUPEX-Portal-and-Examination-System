#ifndef EMPLOYEEINFO_H
#define EMPLOYEEINFO_H

#include <QDialog>

namespace Ui {
class Employeeinfo;
}

class Employeeinfo : public QDialog
{
    Q_OBJECT

public:
    explicit Employeeinfo(QWidget *parent = nullptr);
    ~Employeeinfo();

private:
    Ui::Employeeinfo *ui;
};

#endif // EMPLOYEEINFO_H
