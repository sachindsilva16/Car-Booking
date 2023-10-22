#include "bookcar.h"
#include "ui_bookcar.h"

bookCar::bookCar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bookCar)
{
    ui->setupUi(this);
}

bookCar::~bookCar()
{
    delete ui;
}

void bookCar::on_bookCarExitButton_clicked()
{
    bookCar::close();
}

