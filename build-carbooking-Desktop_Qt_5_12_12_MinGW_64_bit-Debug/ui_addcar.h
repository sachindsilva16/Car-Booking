/********************************************************************************
** Form generated from reading UI file 'addcar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCAR_H
#define UI_ADDCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addCar
{
public:
    QPushButton *addCarButton;
    QPushButton *exitButton;
    QPushButton *bookCarButton;
    QLabel *label;
    QLabel *mainMenuTitle;
    QLabel *addCarLabel;
    QLineEdit *brandLineEdit;
    QLineEdit *carNoLineEdit;
    QPushButton *addCarButtonInAddCar;
    QLabel *carNoLabel;
    QPushButton *exitAddCarButton;
    QLabel *brandLabel;
    QLabel *carTypeLabel;
    QListWidget *carTypeWidgetList;
    QLabel *fareLabel;
    QLineEdit *fareLineEdit;

    void setupUi(QDialog *addCar)
    {
        if (addCar->objectName().isEmpty())
            addCar->setObjectName(QString::fromUtf8("addCar"));
        addCar->resize(517, 369);
        addCarButton = new QPushButton(addCar);
        addCarButton->setObjectName(QString::fromUtf8("addCarButton"));
        addCarButton->setGeometry(QRect(880, 280, 111, 31));
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
        exitButton = new QPushButton(addCar);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(790, 430, 81, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Monolisa Trial"));
        exitButton->setFont(font1);
        exitButton->setStyleSheet(QString::fromUtf8("font-size:14px;\n"
"font-weight:medium;\n"
"border-radius:10px;\n"
"background-color:white;\n"
"color:black;\n"
"font-family:\"Monolisa Trial\";"));
        bookCarButton = new QPushButton(addCar);
        bookCarButton->setObjectName(QString::fromUtf8("bookCarButton"));
        bookCarButton->setGeometry(QRect(880, 330, 111, 31));
        bookCarButton->setFont(font1);
        bookCarButton->setStyleSheet(QString::fromUtf8("font-size:14px;\n"
"font-weight:medium;\n"
"border-radius:10px;\n"
"background-color:orange;\n"
"color:black;\n"
"font-family:\"Monolisa Trial\";"));
        label = new QLabel(addCar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-220, -10, 911, 381));
        label->setPixmap(QPixmap(QString::fromUtf8("../car-bg.png")));
        mainMenuTitle = new QLabel(addCar);
        mainMenuTitle->setObjectName(QString::fromUtf8("mainMenuTitle"));
        mainMenuTitle->setGeometry(QRect(690, 180, 211, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MonoLisa Trial"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        mainMenuTitle->setFont(font2);
        mainMenuTitle->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-weight:bold;"));
        addCarLabel = new QLabel(addCar);
        addCarLabel->setObjectName(QString::fromUtf8("addCarLabel"));
        addCarLabel->setGeometry(QRect(170, 10, 211, 71));
        addCarLabel->setFont(font2);
        addCarLabel->setStyleSheet(QString::fromUtf8("color:orange;\n"
"font-weight:bold;"));
        brandLineEdit = new QLineEdit(addCar);
        brandLineEdit->setObjectName(QString::fromUtf8("brandLineEdit"));
        brandLineEdit->setGeometry(QRect(330, 120, 161, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("MonoLisa Trial"));
        font3.setPointSize(10);
        brandLineEdit->setFont(font3);
        brandLineEdit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-radius:10px;\n"
"border:2px solid white;\n"
"color:black;"));
        brandLineEdit->setEchoMode(QLineEdit::Normal);
        carNoLineEdit = new QLineEdit(addCar);
        carNoLineEdit->setObjectName(QString::fromUtf8("carNoLineEdit"));
        carNoLineEdit->setGeometry(QRect(330, 80, 161, 31));
        carNoLineEdit->setFont(font3);
        carNoLineEdit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-radius:10px;\n"
"border:2px solid white;\n"
"color:black;\n"
""));
        addCarButtonInAddCar = new QPushButton(addCar);
        addCarButtonInAddCar->setObjectName(QString::fromUtf8("addCarButtonInAddCar"));
        addCarButtonInAddCar->setGeometry(QRect(390, 300, 81, 31));
        addCarButtonInAddCar->setFont(font);
        addCarButtonInAddCar->setStyleSheet(QString::fromUtf8("font-size:14px;\n"
"font-weight:bold;\n"
"border-radius:10px;\n"
"background-color:green;\n"
"color:white;\n"
"font-family:\"Monolisa Trial\";"));
        carNoLabel = new QLabel(addCar);
        carNoLabel->setObjectName(QString::fromUtf8("carNoLabel"));
        carNoLabel->setGeometry(QRect(230, 80, 91, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("MonoLisa Trial"));
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        carNoLabel->setFont(font4);
        carNoLabel->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-weight:bold;"));
        exitAddCarButton = new QPushButton(addCar);
        exitAddCarButton->setObjectName(QString::fromUtf8("exitAddCarButton"));
        exitAddCarButton->setGeometry(QRect(280, 300, 81, 31));
        exitAddCarButton->setFont(font1);
        exitAddCarButton->setStyleSheet(QString::fromUtf8("font-size:14px;\n"
"font-weight:medium;\n"
"border-radius:10px;\n"
"background-color:white;\n"
"color:black;\n"
"font-family:\"Monolisa Trial\";"));
        brandLabel = new QLabel(addCar);
        brandLabel->setObjectName(QString::fromUtf8("brandLabel"));
        brandLabel->setGeometry(QRect(230, 120, 91, 31));
        brandLabel->setFont(font4);
        brandLabel->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-weight:bold;"));
        carTypeLabel = new QLabel(addCar);
        carTypeLabel->setObjectName(QString::fromUtf8("carTypeLabel"));
        carTypeLabel->setGeometry(QRect(230, 170, 91, 31));
        carTypeLabel->setFont(font4);
        carTypeLabel->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-weight:bold;"));
        carTypeWidgetList = new QListWidget(addCar);
        carTypeWidgetList->setObjectName(QString::fromUtf8("carTypeWidgetList"));
        carTypeWidgetList->setGeometry(QRect(330, 170, 161, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("MonoLisa Trial"));
        carTypeWidgetList->setFont(font5);
        carTypeWidgetList->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-radius:10px;\n"
"border:2px solid white;\n"
"color:black;"));
        fareLabel = new QLabel(addCar);
        fareLabel->setObjectName(QString::fromUtf8("fareLabel"));
        fareLabel->setGeometry(QRect(230, 230, 91, 31));
        fareLabel->setFont(font4);
        fareLabel->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-weight:bold;"));
        fareLineEdit = new QLineEdit(addCar);
        fareLineEdit->setObjectName(QString::fromUtf8("fareLineEdit"));
        fareLineEdit->setGeometry(QRect(330, 230, 161, 31));
        fareLineEdit->setFont(font3);
        fareLineEdit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-radius:10px;\n"
"border:2px solid white;\n"
"color:white;"));
        fareLineEdit->setEchoMode(QLineEdit::Normal);

        retranslateUi(addCar);

        QMetaObject::connectSlotsByName(addCar);
    } // setupUi

    void retranslateUi(QDialog *addCar)
    {
        addCar->setWindowTitle(QApplication::translate("addCar", "Dialog", nullptr));
        addCarButton->setText(QApplication::translate("addCar", "Add Car", nullptr));
        exitButton->setText(QApplication::translate("addCar", "Exit", nullptr));
        bookCarButton->setText(QApplication::translate("addCar", "Book Car", nullptr));
        label->setText(QString());
        mainMenuTitle->setText(QApplication::translate("addCar", "Main Menu", nullptr));
        addCarLabel->setText(QApplication::translate("addCar", "Add Car", nullptr));
        carNoLineEdit->setText(QString());
        addCarButtonInAddCar->setText(QApplication::translate("addCar", "Add Car", nullptr));
        carNoLabel->setText(QApplication::translate("addCar", "Car No.", nullptr));
        exitAddCarButton->setText(QApplication::translate("addCar", "Exit", nullptr));
        brandLabel->setText(QApplication::translate("addCar", "Brand", nullptr));
        carTypeLabel->setText(QApplication::translate("addCar", "Car Type", nullptr));
        fareLabel->setText(QApplication::translate("addCar", "Fare", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addCar: public Ui_addCar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCAR_H
