#include "mainApp.hpp"
#include "ui_mainApp.h"

MainApp::MainApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainApp)
{
    ui->setupUi(this);
}

MainApp::~MainApp()
{
    delete ui;
}

