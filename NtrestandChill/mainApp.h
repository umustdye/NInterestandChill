#ifndef MAINAPP_H
#define MAINAPP_H

#include <QMainWindow>
//#include "account.h"
//#include "interests.h"
//pages
#include "mainPage.h"
#include "loginPage.h"
#include "leaderboard.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainApp; }
QT_END_NAMESPACE

class MainApp : public QMainWindow
{
    Q_OBJECT

public:
    MainApp(QWidget *parent = nullptr);
    ~MainApp();

private:
    Ui::MainApp *ui;
    //Account *user;
    LoginPage *loginPage;
    MainPage *mainPage;
    LeaderBoard *highScorePage;


    void closeLogin();
    void goToLeaderBoard();
    void returnToMain();
};
#endif // MAINAPP_H
