#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include <QWidget>

namespace Ui {
class LeaderBoard;
}

class LeaderBoard : public QWidget
{
    Q_OBJECT

public:
    explicit LeaderBoard(QWidget *parent = nullptr);
    ~LeaderBoard();

private:
    Ui::LeaderBoard *ui;
};

#endif // LEADERBOARD_H
