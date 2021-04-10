#include "mainApp.h"
#include "ui_mainApp.h"

//Create a stacked widget
MainApp::MainApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainApp), loginPage(nullptr), mainPage(nullptr)
{
    ui->setupUi(this);
    //user = newAccount();
    //Set name of main title
    this->setWindowTitle("N'Terest and Chill");

    //create login page
    //add user
    loginPage = new LoginPage(this);
    //create main page
    mainPage = new MainPage(this);

    //Add to stacked widget
    ui->stackedWidget->addWidget(loginPage);
    ui->stackedWidget->addWidget(mainPage);
    connect(loginPage, &LoginPage::closeLogin, this, &MainApp::closeLogin);
    ui->stackedWidget->setCurrentWidget(loginPage);
}

MainApp::~MainApp()
{
    delete ui;
}

void MainApp::closeLogin()
{
    //change spacing to fullscreen
    ui->horizontalSpacer->changeSize(0,0);
    ui->horizontalSpacer_2->changeSize(0,0);
    ui->verticalSpacer->changeSize(0,0);
    ui->verticalSpacer_2->changeSize(0,0);
    //remove the border
    ui->stackedWidget->setLineWidth(0);
    //set widget page to main page
    ui->stackedWidget->setCurrentWidget(mainPage);
}
