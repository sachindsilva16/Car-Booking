#include "bookcar.h"
#include "ui_bookcar.h"
#include "QFile"
#include "QIODevice"
#include "QTextStream"
#include "qdebug.h"
#include "QMessageBox"
#include "QListWidgetItem"
#include "QModelIndex"
#include "QVector"

QVector<QString> readBookedDetailsFromCarData();

bookCar::bookCar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bookCar)
{
    ui->setupUi(this);


    // We need to read the data from "carData.txt" here

    QVector<QString> carData = readBookedDetailsFromCarData();

    // Display the collected data on the widget list.
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
    QVector<QString> bookedCarDetails ;

    if(ui->nameLineEdit->text()=="" || ui->ageLineEdit->text()=="" || ui->pickupLineEdit->text()=="" || ui->destinationLineEdit->text()==""){
        QMessageBox::information(0,"Warning!","Please fill up all details..");
    } else {
        bookedCarDetails.append(ui->nameLineEdit->text());
        bookedCarDetails.append(ui->ageLineEdit->text());
        bookedCarDetails.append(ui->pickupLineEdit->text());
        bookedCarDetails.append(ui->destinationLineEdit->text());


        // For radio button,

        bool male = ui->maleRadioButton->isChecked();
        bool female = ui->femaleRadioButton->isChecked();

        if(male){
            bookedCarDetails.append("male");
        }else {
            bookedCarDetails.append("female");
        }


    //    Before booking the car, we also want to store the data of which car has been booked.

        QListWidgetItem *selectedCar = ui->selectedCarListWidget->currentItem();

        QString selectedCarDetails = selectedCar->text();



        // Now we need to append it into bookCarData.txt file.

        bookedCarDetails.append(selectedCarDetails);

        QFile file("bookCarData.txt");

        if(file.open(QIODevice::Append | QIODevice::Text)){

            QTextStream stream(&file);
            // Create source and destination source stream so that I can store it in "carData.txt" file.
            for(int i=0;i<bookedCarDetails.size();i++){

                stream << bookedCarDetails[i]<<" || "; //
                // Pass all the data
            }

            stream << "-->";
        }

        file.close();


        qDebug() << "Car is successfully booked";


        // Next thing is, we want to remove the car data that user has selected so thar other users shouldnt select the same.

        // To achieve this we can make use of "QModelIndex" class

        QModelIndex currentIndex = ui->selectedCarListWidget->currentIndex();

        // Next we need to retrive the corresponding row.
        int currentRow = currentIndex.row();// This will return the integer value, which is nothing but the "row value" that user has selected.



        // Next we need to read the data from "carData.txt". Since we have already defined a function for it, we can directly import that function here.
        QVector<QString> allCarData = readBookedDetailsFromCarData();

        allCarData.remove(currentRow); // Now, remove the currentRow from the list.

        // Now, we need to rewrite all car data into "carData.txt"

        QFile file1("bookCarData.txt");

        if(file1.open(QIODevice::Append | QIODevice::Text)){

            QTextStream stream(&file1);
            // Create source and destination source stream so that I can store it in "carData.txt" file.
            for(int i=0;i<allCarData.size();i++){

                stream << allCarData[i]<<"\n"; //
                // Pass all the data
            }

        }

        file1.close();
        QMessageBox::information(0,"Booking Status","Car is successfully booked");

        bookCar::close();
    }



}

QVector<QString> readBookedDetailsFromCarData(){

    QVector<QString> getData;

    QFile file("carData.txt");

    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&file);

        // Read the file line by line

        while(!in.atEnd()){

            QString line= in.readLine();
// Process the line as needed. For Eg.: you can print it to the console.

            getData.append(line);

            qDebug()<<line;
        }
    }

    // After that, clost the file.
    file.close();

    // Return the data that we have received.
    return getData;
}


