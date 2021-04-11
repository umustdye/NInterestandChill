#include "mainApp.h"
#include "ui_mainApp.h"

//Create a stacked widget
MainApp::MainApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainApp), loginPage(nullptr), mainPage(nullptr), highScorePage(nullptr)
{
    ui->setupUi(this);
    //user = newAccount();
    //Set name of main title
    this->setWindowTitle("N'Terest and Chill");
    //this->setFixedSize(1280, 720);

    //create login page
    //add user
    loginPage = new LoginPage(this);
    //create main page
    mainPage = new MainPage(this);
    //leaderboard page
    highScorePage = new LeaderBoard(this);


    //Add to stacked widget
    ui->stackedWidget->addWidget(loginPage);
    ui->stackedWidget->addWidget(mainPage);
    ui->stackedWidget->addWidget(highScorePage);
    connect(loginPage, &LoginPage::closeLogin, this, &MainApp::closeLogin);
    connect(mainPage, &MainPage::changeToLeaderBoard, this, &MainApp::goToLeaderBoard);
    connect(highScorePage, &LeaderBoard::returnBack, this, &MainApp::returnToMain);
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

void MainApp::goToLeaderBoard()
{
    ui->stackedWidget->setCurrentWidget(highScorePage);
}

void MainApp::returnToMain()
{
    ui->stackedWidget->setCurrentWidget(mainPage);
}
