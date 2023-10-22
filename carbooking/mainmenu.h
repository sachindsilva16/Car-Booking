#ifndef MAINMENU_H
#define MAINMENU_H

#include <QDialog>
#include "addcar.h"
#include "bookcar.h"

namespace Ui {
class MainMenu;
}

class MainMenu : public QDialog
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

private slots:
    void on_bookCarButton_2_clicked();

    void on_exitButton_clicked();

    void on_addCarButton_clicked();

    void on_bookCarButton_clicked();

private:
    Ui::MainMenu *ui;
    addCar addCarUi;
    bookCar bookCarUi;
};

#endif // MAINMENU_H
