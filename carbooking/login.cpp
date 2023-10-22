#include "login.h"
#include "ui_login.h"
#include "QDebug"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}


void login::on_exitButton_clicked()
{
    QApplication ::exit(); // This will terminate/ close the application.

    //QApplication --> is a class that manages the GUI application control-flow.
}


void login::on_loginButton_clicked()
{
    QString userId = ui->userIdLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if(userId == "admin"){ // currently, we will be hard coding for the testing purpose.

        if(password == "admin123"){
            qDebug() << "Login Successfull";
        } else {
            qDebug() << "Invalid credientials...!!";
        }

    }
}

















