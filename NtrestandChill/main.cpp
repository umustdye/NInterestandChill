#include "mainApp.h"
#include "leaderboard.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainApp w;
    LeaderBoard w;
    w.show();

    return a.exec();
}
