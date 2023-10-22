/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QLabel *label;
    QPushButton *addCarButton;
    QPushButton *bookCarButton;
    QPushButton *exitButton;
    QLabel *addCarLabel;

    void setupUi(QDialog *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        MainMenu->resize(483, 295);
        label = new QLabel(MainMenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-230, 0, 911, 381));
        label->setPixmap(QPixmap(QString::fromUtf8("../car-bg.png")));
        addCarButton = new QPushButton(MainMenu);
        addCarButton->setObjectName(QString::fromUtf8("addCarButton"));
        addCarButton->setGeometry(QRect(300, 100, 111, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Monolisa Trial"));
        font.setBold(true);
        font.setWeight(75);
        addCarButton->setFont(font);
        addCarButton->setStyleSheet(QString::fromUtf8("font-size:14px;\n"
"font-weight:bold;\n"
"border-radius:10px;\n"
"background-color:green;\n"
"color:white;\n"
"font-family:\"Monolisa Trial\";"));
        bookCarButton = new QPushButton(MainMenu);
        bookCarButton->setObjectName(QString::fromUtf8("bookCarButton"));
        bookCarButton->setGeometry(QRect(300, 150, 111, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Monolisa Trial"));
        bookCarButton->setFont(font1);
        bookCarButton->setStyleSheet(QString::fromUtf8("font-size:14px;\n"
"font-weight:medium;\n"
"border-radius:10px;\n"
"background-color:orange;\n"
"color:black;\n"
"font-family:\"Monolisa Trial\";"));
        exitButton = new QPushButton(MainMenu);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(210, 250, 81, 31));
        exitButton->setFont(font1);
        exitButton->setStyleSheet(QString::fromUtf8("font-size:14px;\n"
"font-weight:medium;\n"
"border-radius:10px;\n"
"background-color:white;\n"
"color:black;\n"
"font-family:\"Monolisa Trial\";"));
        addCarLabel = new QLabel(MainMenu);
        addCarLabel->setObjectName(QString::fromUtf8("addCarLabel"));
        addCarLabel->setGeometry(QRect(140, 10, 211, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MonoLisa Trial"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        addCarLabel->setFont(font2);
        addCarLabel->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-weight:bold;"));

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QDialog *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "Dialog", nullptr));
        label->setText(QString());
        addCarButton->setText(QApplication::translate("MainMenu", "Add Car", nullptr));
        bookCarButton->setText(QApplication::translate("MainMenu", "Book Car", nullptr));
        exitButton->setText(QApplication::translate("MainMenu", "Exit", nullptr));
        addCarLabel->setText(QApplication::translate("MainMenu", "Car Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
