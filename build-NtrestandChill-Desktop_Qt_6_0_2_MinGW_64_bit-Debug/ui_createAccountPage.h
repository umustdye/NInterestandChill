/********************************************************************************
** Form generated from reading UI file 'createAccountPage.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEACCOUNTPAGE_H
#define UI_CREATEACCOUNTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateAccountPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *createAccountPage;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *firstNameLabel;
    QLineEdit *lastNameInput;
    QLineEdit *firstNameInput;
    QLabel *retypePasswordLabel;
    QLineEdit *retypePasswordInput;
    QLineEdit *userNameInput;
    QLabel *passwordLabel;
    QLabel *lastNameLabel;
    QLabel *userNameLabel;
    QLineEdit *passwordInput;
    QCheckBox *visiblePassword2;
    QCheckBox *visiblePassword1;
    QLabel *createAccountMessage;
    QSpacerItem *verticalSpacer;
    QPushButton *createButton;

    void setupUi(QDialog *CreateAccountPage)
    {
        if (CreateAccountPage->objectName().isEmpty())
            CreateAccountPage->setObjectName(QString::fromUtf8("CreateAccountPage"));
        CreateAccountPage->resize(717, 589);
        QPalette palette;
        QBrush brush(QColor(253, 253, 253, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush3(QColor(81, 93, 93, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        QBrush brush5(QColor(120, 120, 120, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        QBrush brush6(QColor(0, 0, 0, 128));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        CreateAccountPage->setPalette(palette);
        verticalLayout_2 = new QVBoxLayout(CreateAccountPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(30, 30, 30, 30);
        createAccountPage = new QLabel(CreateAccountPage);
        createAccountPage->setObjectName(QString::fromUtf8("createAccountPage"));
        createAccountPage->setAlignment(Qt::AlignCenter);
        createAccountPage->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(createAccountPage);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(7);
        gridLayout->setVerticalSpacing(36);
        firstNameLabel = new QLabel(CreateAccountPage);
        firstNameLabel->setObjectName(QString::fromUtf8("firstNameLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(10);
        font.setBold(true);
        firstNameLabel->setFont(font);
        firstNameLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(firstNameLabel, 0, 0, 1, 1);

        lastNameInput = new QLineEdit(CreateAccountPage);
        lastNameInput->setObjectName(QString::fromUtf8("lastNameInput"));

        gridLayout->addWidget(lastNameInput, 1, 1, 1, 1);

        firstNameInput = new QLineEdit(CreateAccountPage);
        firstNameInput->setObjectName(QString::fromUtf8("firstNameInput"));

        gridLayout->addWidget(firstNameInput, 0, 1, 1, 1);

        retypePasswordLabel = new QLabel(CreateAccountPage);
        retypePasswordLabel->setObjectName(QString::fromUtf8("retypePasswordLabel"));
        retypePasswordLabel->setFont(font);
        retypePasswordLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(retypePasswordLabel, 4, 0, 1, 1);

        retypePasswordInput = new QLineEdit(CreateAccountPage);
        retypePasswordInput->setObjectName(QString::fromUtf8("retypePasswordInput"));

        gridLayout->addWidget(retypePasswordInput, 4, 1, 1, 1);

        userNameInput = new QLineEdit(CreateAccountPage);
        userNameInput->setObjectName(QString::fromUtf8("userNameInput"));

        gridLayout->addWidget(userNameInput, 2, 1, 1, 1);

        passwordLabel = new QLabel(CreateAccountPage);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setFont(font);
        passwordLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(passwordLabel, 3, 0, 1, 1);

        lastNameLabel = new QLabel(CreateAccountPage);
        lastNameLabel->setObjectName(QString::fromUtf8("lastNameLabel"));
        lastNameLabel->setFont(font);
        lastNameLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(lastNameLabel, 1, 0, 1, 1);

        userNameLabel = new QLabel(CreateAccountPage);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));
        userNameLabel->setFont(font);
        userNameLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(userNameLabel, 2, 0, 1, 1);

        passwordInput = new QLineEdit(CreateAccountPage);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));

        gridLayout->addWidget(passwordInput, 3, 1, 1, 1);

        visiblePassword2 = new QCheckBox(CreateAccountPage);
        visiblePassword2->setObjectName(QString::fromUtf8("visiblePassword2"));

        gridLayout->addWidget(visiblePassword2, 4, 2, 1, 1);

        visiblePassword1 = new QCheckBox(CreateAccountPage);
        visiblePassword1->setObjectName(QString::fromUtf8("visiblePassword1"));

        gridLayout->addWidget(visiblePassword1, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        createAccountMessage = new QLabel(CreateAccountPage);
        createAccountMessage->setObjectName(QString::fromUtf8("createAccountMessage"));
        QPalette palette1;
        QBrush brush7(QColor(213, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        createAccountMessage->setPalette(palette1);
        createAccountMessage->setFont(font);
        createAccountMessage->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(createAccountMessage);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        createButton = new QPushButton(CreateAccountPage);
        createButton->setObjectName(QString::fromUtf8("createButton"));

        verticalLayout->addWidget(createButton);


        verticalLayout_2->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        firstNameLabel->setBuddy(firstNameInput);
        retypePasswordLabel->setBuddy(retypePasswordInput);
        passwordLabel->setBuddy(passwordInput);
        lastNameLabel->setBuddy(lastNameInput);
        userNameLabel->setBuddy(userNameInput);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(firstNameInput, lastNameInput);
        QWidget::setTabOrder(lastNameInput, userNameInput);
        QWidget::setTabOrder(userNameInput, passwordInput);
        QWidget::setTabOrder(passwordInput, visiblePassword1);
        QWidget::setTabOrder(visiblePassword1, retypePasswordInput);
        QWidget::setTabOrder(retypePasswordInput, visiblePassword2);
        QWidget::setTabOrder(visiblePassword2, createButton);

        retranslateUi(CreateAccountPage);

        QMetaObject::connectSlotsByName(CreateAccountPage);
    } // setupUi

    void retranslateUi(QDialog *CreateAccountPage)
    {
        CreateAccountPage->setWindowTitle(QCoreApplication::translate("CreateAccountPage", "Dialog", nullptr));
        createAccountPage->setText(QCoreApplication::translate("CreateAccountPage", "Create New Account", nullptr));
        firstNameLabel->setText(QCoreApplication::translate("CreateAccountPage", "First Name:", nullptr));
        retypePasswordLabel->setText(QCoreApplication::translate("CreateAccountPage", "Retype Password:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("CreateAccountPage", "Password:", nullptr));
        lastNameLabel->setText(QCoreApplication::translate("CreateAccountPage", "Last Name:", nullptr));
        userNameLabel->setText(QCoreApplication::translate("CreateAccountPage", "User Name:", nullptr));
        visiblePassword2->setText(QCoreApplication::translate("CreateAccountPage", "Show Password", nullptr));
        visiblePassword1->setText(QCoreApplication::translate("CreateAccountPage", "Show Password", nullptr));
        createAccountMessage->setText(QCoreApplication::translate("CreateAccountPage", "Default Message", nullptr));
        createButton->setText(QCoreApplication::translate("CreateAccountPage", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateAccountPage: public Ui_CreateAccountPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEACCOUNTPAGE_H
