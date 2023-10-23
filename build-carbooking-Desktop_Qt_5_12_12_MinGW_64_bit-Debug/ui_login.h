/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *loginTitle;
    QLabel *userIdLabel;
    QLabel *passwordLabel;
    QPushButton *loginButton;
    QLineEdit *userIdLineEdit;
    QPushButton *exitButton;
    QLineEdit *passwordLineEdit;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(568, 378);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-220, 0, 911, 381));
        label->setPixmap(QPixmap(QString::fromUtf8("../car-bg.png")));
        loginTitle = new QLabel(centralwidget);
        loginTitle->setObjectName(QString::fromUtf8("loginTitle"));
        loginTitle->setGeometry(QRect(310, 60, 211, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("MonoLisa Trial"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        loginTitle->setFont(font);
        loginTitle->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-weight:bold;"));
        userIdLabel = new QLabel(centralwidget);
        userIdLabel->setObjectName(QString::fromUtf8("userIdLabel"));
        userIdLabel->setGeometry(QRect(240, 150, 91, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MonoLisa Trial"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        userIdLabel->setFont(font1);
        userIdLabel->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-weight:bold;"));
        passwordLabel = new QLabel(centralwidget);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(240, 190, 101, 41));
        passwordLabel->setFont(font1);
        passwordLabel->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-weight:bold;"));
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(280, 240, 81, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Monolisa Trial"));
        font2.setBold(true);
        font2.setWeight(75);
        loginButton->setFont(font2);
        loginButton->setStyleSheet(QString::fromUtf8("font-size:14px;\n"
"font-weight:bold;\n"
"border-radius:10px;\n"
"background-color:green;\n"
"color:white;\n"
"font-family:\"Monolisa Trial\";"));
        userIdLineEdit = new QLineEdit(centralwidget);
        userIdLineEdit->setObjectName(QString::fromUtf8("userIdLineEdit"));
        userIdLineEdit->setGeometry(QRect(350, 160, 161, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("MonoLisa Trial"));
        font3.setPointSize(10);
        userIdLineEdit->setFont(font3);
        userIdLineEdit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-radius:10px;\n"
"border:2px solid white;\n"
"color:green;\n"
""));
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(370, 240, 81, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Monolisa Trial"));
        exitButton->setFont(font4);
        exitButton->setStyleSheet(QString::fromUtf8("font-size:14px;\n"
"font-weight:medium;\n"
"border-radius:10px;\n"
"background-color:white;\n"
"color:black;\n"
"font-family:\"Monolisa Trial\";"));
        passwordLineEdit = new QLineEdit(centralwidget);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(350, 200, 161, 31));
        passwordLineEdit->setFont(font3);
        passwordLineEdit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-radius:10px;\n"
"border:2px solid white;\n"
"color:green;"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        login->setCentralWidget(centralwidget);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "login", nullptr));
        label->setText(QString());
        loginTitle->setText(QApplication::translate("login", "Our Booking", nullptr));
        userIdLabel->setText(QApplication::translate("login", "USER-ID", nullptr));
        passwordLabel->setText(QApplication::translate("login", "PASSWORD", nullptr));
        loginButton->setText(QApplication::translate("login", "Login", nullptr));
        userIdLineEdit->setText(QString());
        exitButton->setText(QApplication::translate("login", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
