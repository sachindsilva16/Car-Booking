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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_bookCar
{
public:
    QLabel *label;
    QLabel *bookCarTitle;
    QPushButton *bookNowButton;
    QPushButton *bookCarExitButton;

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
        bookCarTitle->setGeometry(QRect(170, 20, 211, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("MonoLisa Trial"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        bookCarTitle->setFont(font);
        bookCarTitle->setStyleSheet(QString::fromUtf8("color:orange;\n"
"font-weight:bold;"));
        bookNowButton = new QPushButton(bookCar);
        bookNowButton->setObjectName(QString::fromUtf8("bookNowButton"));
        bookNowButton->setGeometry(QRect(370, 120, 101, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Monolisa Trial"));
        font1.setBold(true);
        font1.setWeight(75);
        bookNowButton->setFont(font1);
        bookNowButton->setStyleSheet(QString::fromUtf8("font-size:14px;\n"
"font-weight:bold;\n"
"border-radius:10px;\n"
"background-color:green;\n"
"color:white;\n"
"font-family:\"Monolisa Trial\";"));
        bookCarExitButton = new QPushButton(bookCar);
        bookCarExitButton->setObjectName(QString::fromUtf8("bookCarExitButton"));
        bookCarExitButton->setGeometry(QRect(370, 170, 101, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Monolisa Trial"));
        bookCarExitButton->setFont(font2);
        bookCarExitButton->setStyleSheet(QString::fromUtf8("font-size:14px;\n"
"font-weight:medium;\n"
"border-radius:10px;\n"
"background-color:white;\n"
"color:black;\n"
"font-family:\"Monolisa Trial\";"));

        retranslateUi(bookCar);

        QMetaObject::connectSlotsByName(bookCar);
    } // setupUi

    void retranslateUi(QDialog *bookCar)
    {
        bookCar->setWindowTitle(QApplication::translate("bookCar", "Dialog", nullptr));
        label->setText(QString());
        bookCarTitle->setText(QApplication::translate("bookCar", "Book Car", nullptr));
        bookNowButton->setText(QApplication::translate("bookCar", "Book Now", nullptr));
        bookCarExitButton->setText(QApplication::translate("bookCar", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bookCar: public Ui_bookCar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKCAR_H
