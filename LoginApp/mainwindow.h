#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"dialog.h"
#include <QMainWindow>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Dialog *d;
};

#endif // MAINWINDOW_H
