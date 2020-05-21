#ifndef FACULTYPORTION_H
#define FACULTYPORTION_H

#include <QDialog>

namespace Ui {
class FacultyPortion;
}

class FacultyPortion : public QDialog
{
    Q_OBJECT

public:
    explicit FacultyPortion(QWidget *parent = nullptr);
    ~FacultyPortion();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FacultyPortion *ui;
};

#endif // FACULTYPORTION_H
