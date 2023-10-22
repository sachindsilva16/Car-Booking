#include "mainmenu.h"
#include "ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
}

MainMenu::~MainMenu()
{
    delete ui;
}



void MainMenu::on_exitButton_clicked()
{
    MainMenu::close();
}


void MainMenu::on_addCarButton_clicked()
{
    addCarUi.show();
}


void MainMenu::on_bookCarButton_clicked()
{
    bookCarUi.show();
}

