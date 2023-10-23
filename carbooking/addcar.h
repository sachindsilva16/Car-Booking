#ifndef ADDCAR_H
#define ADDCAR_H

#include <QDialog>

namespace Ui {
class addCar;
}

class addCar : public QDialog
{
    Q_OBJECT

public:
    explicit addCar(QWidget *parent = nullptr);
    ~addCar();

private slots:
    void on_addCarButtonInAddCar_clicked();

    void on_exitAddCarButton_clicked();

private:
    Ui::addCar *ui;
};

#endif // ADDCAR_H
