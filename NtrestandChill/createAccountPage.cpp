#include "createAccountPage.hpp"
#include "ui_createAccountPage.h"

#include <QString>
#include <QDebug>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QLocale>
#include <QByteArray>


CreateAccountPage::CreateAccountPage(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::CreateAccountPage)
{
    ui->setupUi(this);
    //hide message
    ui->createAccountMessage->hide();
    //set up password field
    ui->passwordInput->setEchoMode(QLineEdit::Password);
    ui->retypePasswordInput->setEchoMode(QLineEdit::Password);

}

CreateAccountPage::~CreateAccountPage()
{
    delete ui;
}


void CreateAccountPage::on_createButton_clicked()
{
    bool created = false;

    QString message = "";
    if(ui->firstNameInput->text().isEmpty()||ui->lastNameInput->text().isEmpty()|| ui->userNameInput->text().isEmpty()|| ui->passwordInput->text().isEmpty()||ui->retypePasswordInput->text().isEmpty())
    {
        message = "Field(s) cannot be left empty";
    }
    else
    {

        //get values from the form
        QString firstName = ui->firstNameInput->text();
        QString lastName = ui->lastNameInput->text();
        QString userName = ui->userNameInput->text();
        QString password = ui->passwordInput->text();
        QString retypePassword = ui->retypePasswordInput->text();

         //check if the username and password are valid
        if(!validUserName(userName))
        {
            message = "Username already exists\n";
        }

        else if(!validPassword(password))
        {
             message += "Password is not valid\n";
        }

         else if(password != retypePassword)
          {
             message += "Passwords do not match";
          }

         else
         {
            if(addAccount(userName, password, firstName, lastName))
            {
                message = "Account has been successfully added.";
                //disable the create account button
                ui->createButton->setDisabled(true);
                created = true;
            }
            else
            {
                    message = "Failed to create account";
                    created = false;
             }
        }

      }



    //call change text message
    ui->createAccountMessage->setText(message);
    ui->createAccountMessage->show();


    //Exit if created
    if(created)
    {
        this->accept();
    }
}


bool CreateAccountPage::addAccount(QString userName, QString password, QString firstName, QString lastName)
{
    //check the server if it could be added
}


bool CreateAccountPage::validUserName(QString userName)
{
    //check the server to see if the username exists
}

bool CreateAccountPage::validPassword(QString password)
{
    //use regex for password creation
    //password must between 8-16 characters and include at least 1 number, l capital letter, and one lower case letter
    //regex = ^(?=.*[0-9]+.*)(?=.*[a-z]+.*)(?=.*[A-Z]+.*){8,16}$
    QRegularExpression regEx("(?=.*[0-9]+.*)(?=.*[a-z]+.*)(?=.*[A-Z]+.*)[0-9a-zA-Z]{8,16}");
    int pos = 0;
    QRegularExpressionValidator valid(regEx);
    qDebug() << valid.validate(password, pos);
    //return valid.validate(password, pos);
    if(valid.validate(password, pos) == QValidator::Acceptable)
    {
        qDebug() << "valid password";
        return true;
    }

    else
    {
        qDebug() << "invalid password";
        return false;
    }

}

void CreateAccountPage::on_visiblePassword1_stateChanged(int state)
{
    //the visible password box is checked
    if(state == 2)
    {
        ui->passwordInput->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->passwordInput->setEchoMode(QLineEdit::Password);
    }
}

void CreateAccountPage::on_visiblePassword2_stateChanged(int state)
{
    //the visible password box is checked
    if(state == 2)
    {
        ui->retypePasswordInput->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->retypePasswordInput->setEchoMode(QLineEdit::Password);
    }
}


