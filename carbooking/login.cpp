#include "login.h"
#include "ui_login.h"
#include "QDebug"
#include "QMessageBox"

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

//            we need to call "mainmenu"

            mainMenuUi.show();

//            Now we need to close the login form, soon after the authentication.
            login::close();

        } else {
//            qDebug() << "Invalid cred ientials...!!";
            QMessageBox::information(0,"Authentication","Incorrect Password");
        }

    }
    else {
        //qDebug() << "Invalid cred ientials...!!";
            QMessageBox::information(0,"login error","Incorrect username");
         }
}

















