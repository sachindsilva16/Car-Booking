#ifndef BOOKCAR_H
#define BOOKCAR_H

#include <QDialog>

namespace Ui {
class bookCar;
}

class bookCar : public QDialog
{
    Q_OBJECT

public:
    explicit bookCar(QWidget *parent = nullptr);
    ~bookCar();

private slots:
    void on_bookCarExitButton_clicked();

    void on_bookCarButton_clicked();

private:
    Ui::bookCar *ui;
};

#endif // BOOKCAR_H
