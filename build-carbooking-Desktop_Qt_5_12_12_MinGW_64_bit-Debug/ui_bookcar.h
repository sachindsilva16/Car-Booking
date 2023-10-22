/********************************************************************************
** Form generated from reading UI file 'bookcar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKCAR_H
#define UI_BOOKCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_bookCar
{
public:
    QLabel *label;
    QLabel *bookCarTitle;
    QPushButton *bookCarButton;
    QPushButton *bookCarExitButton;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLineEdit *ageLineEdit;
    QLabel *ageLabel;
    QRadioButton *maleRadioButton;
    QRadioButton *femaleRadioButton;
    QLineEdit *pickupLineEdit;
    QLabel *pickupLabel;
    QLineEdit *destinationLineEdit;
    QLabel *destinationLabel;
    QLabel *selectCarLabel;
    QListWidget *selectedCarListWidget;

    void setupUi(QDialog *bookCar)
    {
        if (bookCar->objectName().isEmpty())
            bookCar->setObjectName(QString::fromUtf8("bookCar"));
        bookCar->resize(535, 373);
        label = new QLabel(bookCar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-240, 0, 911, 381));
        label->setPixmap(QPixmap(QString::fromUtf8("../car-bg.png")));
        bookCarTitle = new QLabel(bookCar);
        bookCarTitle->setObjectName(QString::fromUtf8("bookCarTitle"));
        bookCarTitle->setGeometry(QRect(180, 0, 211, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("MonoLisa Trial"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        bookCarTitle->setFont(font);
        bookCarTitle->setStyleSheet(QString::fromUtf8("color:black;\n"
""));
        bookCarButton = new QPushButton(bookCar);
        bookCarButton->setObjectName(QString::fromUtf8("bookCarButton"));
        bookCarButton->setGeometry(QRect(50, 250, 101, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Monolisa Trial"));
        font1.setBold(true);
        font1.setWeight(75);
        bookCarButton->setFont(font1);
        bookCarButton->setStyleSheet(QString::fromUtf8("font-size:14px;\n"
"font-weight:bold;\n"
"border-radius:10px;\n"
"background-color:green;\n"
"color:white;\n"
"font-family:\"Monolisa Trial\";"));
        bookCarExitButton = new QPushButton(bookCar);
        bookCarExitButton->setObjectName(QString::fromUtf8("bookCarExitButton"));
        bookCarExitButton->setGeometry(QRect(50, 300, 101, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Monolisa Trial"));
        bookCarExitButton->setFont(font2);
        bookCarExitButton->setStyleSheet(QString::fromUtf8("font-size:14px;\n"
"font-weight:medium;\n"
"border-radius:10px;\n"
"background-color:white;\n"
"color:black;\n"
"font-family:\"Monolisa Trial\";"));
        nameLabel = new QLabel(bookCar);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(220, 70, 91, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("MonoLisa Trial"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        nameLabel->setFont(font3);
        nameLabel->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-weight:bold;"));
        nameLineEdit = new QLineEdit(bookCar);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(330, 70, 161, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("MonoLisa Trial"));
        font4.setPointSize(10);
        nameLineEdit->setFont(font4);
        nameLineEdit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-radius:10px;\n"
"border:2px solid white;\n"
"color:white;\n"
""));
        ageLineEdit = new QLineEdit(bookCar);
        ageLineEdit->setObjectName(QString::fromUtf8("ageLineEdit"));
        ageLineEdit->setGeometry(QRect(330, 110, 161, 31));
        ageLineEdit->setFont(font4);
        ageLineEdit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-radius:10px;\n"
"border:2px solid white;\n"
"color:white;\n"
""));
        ageLabel = new QLabel(bookCar);
        ageLabel->setObjectName(QString::fromUtf8("ageLabel"));
        ageLabel->setGeometry(QRect(220, 110, 91, 31));
        ageLabel->setFont(font3);
        ageLabel->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-weight:bold;"));
        maleRadioButton = new QRadioButton(bookCar);
        maleRadioButton->setObjectName(QString::fromUtf8("maleRadioButton"));
        maleRadioButton->setGeometry(QRect(220, 150, 84, 19));
        maleRadioButton->setStyleSheet(QString::fromUtf8("font-family:\"MonoLisa Trial\";\n"
"font-size:14px;\n"
"color:black;"));
        femaleRadioButton = new QRadioButton(bookCar);
        femaleRadioButton->setObjectName(QString::fromUtf8("femaleRadioButton"));
        femaleRadioButton->setGeometry(QRect(320, 150, 111, 19));
        femaleRadioButton->setStyleSheet(QString::fromUtf8("font-family:\"MonoLisa Trial\";\n"
"font-size:14px;\n"
"color:black;"));
        pickupLineEdit = new QLineEdit(bookCar);
        pickupLineEdit->setObjectName(QString::fromUtf8("pickupLineEdit"));
        pickupLineEdit->setGeometry(QRect(360, 180, 161, 31));
        pickupLineEdit->setFont(font4);
        pickupLineEdit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-radius:10px;\n"
"border:2px solid white;\n"
"color:white;\n"
""));
        pickupLabel = new QLabel(bookCar);
        pickupLabel->setObjectName(QString::fromUtf8("pickupLabel"));
        pickupLabel->setGeometry(QRect(220, 180, 131, 31));
        pickupLabel->setFont(font3);
        pickupLabel->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-weight:bold;"));
        destinationLineEdit = new QLineEdit(bookCar);
        destinationLineEdit->setObjectName(QString::fromUtf8("destinationLineEdit"));
        destinationLineEdit->setGeometry(QRect(360, 220, 161, 31));
        destinationLineEdit->setFont(font4);
        destinationLineEdit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-radius:10px;\n"
"border:2px solid white;\n"
"color:white;\n"
""));
        destinationLabel = new QLabel(bookCar);
        destinationLabel->setObjectName(QString::fromUtf8("destinationLabel"));
        destinationLabel->setGeometry(QRect(220, 220, 131, 31));
        destinationLabel->setFont(font3);
        destinationLabel->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-weight:bold;"));
        selectCarLabel = new QLabel(bookCar);
        selectCarLabel->setObjectName(QString::fromUtf8("selectCarLabel"));
        selectCarLabel->setGeometry(QRect(220, 260, 131, 31));
        selectCarLabel->setFont(font3);
        selectCarLabel->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-weight:bold;"));
        selectedCarListWidget = new QListWidget(bookCar);
        selectedCarListWidget->setObjectName(QString::fromUtf8("selectedCarListWidget"));
        selectedCarListWidget->setGeometry(QRect(360, 260, 161, 101));
        selectedCarListWidget->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-radius:10px;\n"
"border:2px solid white;\n"
"color:white;\n"
""));

        retranslateUi(bookCar);

        QMetaObject::connectSlotsByName(bookCar);
    } // setupUi

    void retranslateUi(QDialog *bookCar)
    {
        bookCar->setWindowTitle(QApplication::translate("bookCar", "Dialog", nullptr));
        label->setText(QString());
        bookCarTitle->setText(QApplication::translate("bookCar", "Book Car", nullptr));
        bookCarButton->setText(QApplication::translate("bookCar", "Book Car", nullptr));
        bookCarExitButton->setText(QApplication::translate("bookCar", "Exit", nullptr));
        nameLabel->setText(QApplication::translate("bookCar", "Name", nullptr));
        nameLineEdit->setText(QString());
        ageLineEdit->setText(QString());
        ageLabel->setText(QApplication::translate("bookCar", "Age", nullptr));
        maleRadioButton->setText(QApplication::translate("bookCar", "Male", nullptr));
        femaleRadioButton->setText(QApplication::translate("bookCar", "Female", nullptr));
        pickupLineEdit->setText(QString());
        pickupLabel->setText(QApplication::translate("bookCar", "Pickup point", nullptr));
        destinationLineEdit->setText(QString());
        destinationLabel->setText(QApplication::translate("bookCar", "Destination", nullptr));
        selectCarLabel->setText(QApplication::translate("bookCar", "Select car", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bookCar: public Ui_bookCar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKCAR_H
