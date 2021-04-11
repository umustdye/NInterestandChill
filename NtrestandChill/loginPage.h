#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>
#include "createAccountPage.hpp"

namespace Ui {
class LoginPage;
}

class LoginPage : public QWidget
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = nullptr);
    ~LoginPage();

private slots:
    void on_createAccount_clicked();

    void on_login_clicked();

private:
    Ui::LoginPage *ui;

signals:
    void closeLogin();
};

#endif // LOGINPAGE_H
