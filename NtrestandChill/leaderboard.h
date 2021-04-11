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

private slots:
    void on_returnToMain_clicked();

private:
    Ui::LeaderBoard *ui;

signals:
    void returnBack();
};

#endif // LEADERBOARD_H
