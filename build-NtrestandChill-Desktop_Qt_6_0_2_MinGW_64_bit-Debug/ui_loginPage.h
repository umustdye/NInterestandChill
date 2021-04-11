/********************************************************************************
** Form generated from reading UI file 'loginPage.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *loginLabel;
    QFormLayout *formLogin;
    QLabel *usernameLabel;
    QLineEdit *username;
    QLabel *passwordLabel;
    QLineEdit *password;
    QSpacerItem *verticalSpacer;
    QLabel *inputErrror;
    QHBoxLayout *horizontalLayout;
    QPushButton *createAccount;
    QSpacerItem *horizontalSpacer;
    QPushButton *login;

    void setupUi(QWidget *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        LoginPage->resize(400, 300);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(114, 131, 132, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        LoginPage->setPalette(palette);
        verticalLayout_2 = new QVBoxLayout(LoginPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        loginLabel = new QLabel(LoginPage);
        loginLabel->setObjectName(QString::fromUtf8("loginLabel"));
        loginLabel->setLayoutDirection(Qt::LeftToRight);
        loginLabel->setAlignment(Qt::AlignCenter);
        loginLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(loginLabel);

        formLogin = new QFormLayout();
        formLogin->setObjectName(QString::fromUtf8("formLogin"));
        usernameLabel = new QLabel(LoginPage);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));

        formLogin->setWidget(0, QFormLayout::LabelRole, usernameLabel);

        username = new QLineEdit(LoginPage);
        username->setObjectName(QString::fromUtf8("username"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush5(QColor(0, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        username->setPalette(palette1);

        formLogin->setWidget(0, QFormLayout::FieldRole, username);

        passwordLabel = new QLabel(LoginPage);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));

        formLogin->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        password = new QLineEdit(LoginPage);
        password->setObjectName(QString::fromUtf8("password"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        password->setPalette(palette2);

        formLogin->setWidget(1, QFormLayout::FieldRole, password);


        verticalLayout->addLayout(formLogin);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        inputErrror = new QLabel(LoginPage);
        inputErrror->setObjectName(QString::fromUtf8("inputErrror"));
        QPalette palette3;
        QBrush brush6(QColor(170, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        inputErrror->setPalette(palette3);
        inputErrror->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(inputErrror);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        createAccount = new QPushButton(LoginPage);
        createAccount->setObjectName(QString::fromUtf8("createAccount"));

        horizontalLayout->addWidget(createAccount);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        login = new QPushButton(LoginPage);
        login->setObjectName(QString::fromUtf8("login"));

        horizontalLayout->addWidget(login);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QWidget *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "Form", nullptr));
        loginLabel->setText(QCoreApplication::translate("LoginPage", "Login", nullptr));
        usernameLabel->setText(QCoreApplication::translate("LoginPage", "User Name:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("LoginPage", "Password:", nullptr));
        inputErrror->setText(QCoreApplication::translate("LoginPage", "Error Message", nullptr));
        createAccount->setText(QCoreApplication::translate("LoginPage", "Create Account", nullptr));
        login->setText(QCoreApplication::translate("LoginPage", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
