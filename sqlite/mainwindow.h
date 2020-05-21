#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#
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
    QSqlDatabase mydb;
    void connClose()
    {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen()
    {
        mydb=QSqlDatabase::addDatabase("QSQLITE");
       mydb.setDatabaseName("C:/Users/dell/Desktop/2nd Semester/Project/Employee info.db");
       if(!mydb.open())
       {
          qDebug()<<"Failed to open the database";
          return false;
       }
       else {
           {
               qDebug()<<"Connected to open the database";
               return true;
           }
       }
    }

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
