#include "leaderboard.h"
#include "ui_leaderboard.h"
#include <QStringList>


LeaderBoard::LeaderBoard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LeaderBoard)
{
    QStringList leaderBoardSpot;
    QStringList leaderBoardName;
    QStringList leaderBoardPoints;
    // Set the leaderboard information from the server to the leaderBoardSpot, leaderBoardName, and leaderBoardPoints
    //might have to format the spacing
    leaderBoardSpot.push_back("Rank");
    leaderBoardName.push_back("Username");
    leaderBoardPoints.push_back("Points");
    ui->setupUi(this);
    ui->SpotlistWidget->addItems(leaderBoardSpot);
    ui->NamelistWidget->addItems(leaderBoardName);
    ui->PointslistWidget->addItems(leaderBoardPoints);
}

LeaderBoard::~LeaderBoard()
{
    delete ui;
}

void LeaderBoard::on_returnToMain_clicked()
{
    emit returnBack();
}
