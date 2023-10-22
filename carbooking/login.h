#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "mainmenu.h"

QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QMainWindow
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_exitButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::login *ui;
    MainMenu mainMenuUi;
};
#endif // LOGIN_H
