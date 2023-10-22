#include "bookcar.h"
#include "ui_bookcar.h"
#include "QFile"
#include "QIODevice"
#include "QTextStream"
#include "qdebug.h"

QVector<QString> readDataFromCarData();

bookCar::bookCar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bookCar)
{
    ui->setupUi(this);
    // We need to read the data from "carData.txt" here

    QVector<QString> carData = readDataFromCarData();

    for(int i=0;i<carData.size();i++){
        ui->selectedCarListWidget->addItem(carData[i]);
    }


}

bookCar::~bookCar()
{
    delete ui;
}

void bookCar::on_bookCarExitButton_clicked()
{
    bookCar::close();
}


void bookCar::on_bookCarButton_clicked()
{

}

QVector<QString> readDataFromCarData(){

    QVector<QString> getData;

    QFile file("carData.txt");

    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&file);

        // Read the file line by line

        while(!in.atEnd()){

            QString line= in.readLine();

            // Process the line as needed. For Eg.: you can print it to the console.

            qDebug()<<line;
        }
    }

    file.close();

    return getData;
}


