#include "loginPage.h"
#include "ui_loginPage.h"

LoginPage::LoginPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginPage)
{
    ui->setupUi(this);
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_createAccount_clicked()
{

}

void LoginPage::on_login_clicked()
{
    emit closeLogin();
}
