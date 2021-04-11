#include "loginPage.h"
#include "ui_loginPage.h"

LoginPage::LoginPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginPage)
{
    ui->setupUi(this);
    this->setAutoFillBackground(true);
    ui->inputErrror->hide();
    //Set up password field
    ui->password->setEchoMode(QLineEdit::Password);
    //ui->passwordInput->passwordMaskDelay();
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_createAccount_clicked()
{
    //load create account dialog
    CreateAccountPage createAccountPage;
    createAccountPage.exec();
}

void LoginPage::on_login_clicked()
{
    emit closeLogin();
}
