#include "mainPage.h"
#include "ui_mainPage.h"

MainPage::MainPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainPage)
{
    ui->setupUi(this);

    QPalette pal = palette();

    //set background color
    this->setAutoFillBackground(true);
}

MainPage::~MainPage()
{
    delete ui;
}
