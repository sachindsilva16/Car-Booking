#include "addcar.h"
#include "ui_addcar.h"
#include "qfile.h"
#include "qtextstream.h"
#include  "qdebug.h"
#include "QIODevice"
#include "QVector"
#include "QMessageBox"

addCar::addCar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addCar)
{
    ui->setupUi(this);
    ui->carTypeWidgetList->addItem("Mini");
    ui->carTypeWidgetList->addItem("Sedan");
    ui->carTypeWidgetList->addItem("SUV");
    ui->carTypeWidgetList->addItem("Premium");



}

addCar::~addCar()
{
    delete ui;
}

void addCar::on_addCarButtonInAddCar_clicked()
{
    // Using queue vector to store the entered data
    QVector<QString> carData;

    if(ui->carNoLineEdit->text()==""||ui->brandLineEdit->text()==""||ui->fareLineEdit->text()==""){
        QMessageBox::information(0,"Warning!","Please fill up all details");
    } else {
        carData.append(ui->carNoLineEdit->text());
        carData.append(ui->brandLineEdit->text());
        carData.append(ui->fareLineEdit->text());

    //    Creating pointer for listwidget type
        QListWidgetItem *selectedCarType = ui->carTypeWidgetList->currentItem();

        carData.append(selectedCarType->text());

    // Store a car data in a file, using file handling

        QFile file("carData.txt");

        if(file.open(QIODevice::Append | QIODevice::Text)){

            QTextStream stream(&file);
            // Create source and destination source stream so that I can store it in "carData.txt" file.
            for(int i=0;i<carData.size();i++){

                stream << carData[i]<<" "; //
                // Pass all the data
            }

            stream << "\n";
        }

        file.close();

        QMessageBox::information(0,"Success","Your car has been added successfully");

        qDebug() << "Data has been written into file successfully";

        addCar::close();
    }



}


void addCar::on_exitAddCarButton_clicked()
{
    addCar::close();
}

