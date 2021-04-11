#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QWidget>
#include <QVector>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMouseEvent>

namespace Ui {
class MainPage;
}

class MainPage : public QWidget
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = nullptr);
    ~MainPage();

private:
    Ui::MainPage *ui;
    QGraphicsScene *scene;
    QVector<QGraphicsItem> *places;
    QPixmap backgroundImage;

    void setPlaces();
    void clickOnPlace();
    void addPoints(int points);
    void setBackground();

protected:
    void resizeEvent(QResizeEvent *evt);
    void mousePressEvent(QMouseEvent *event);
private slots:
    void on_highScore_clicked();
signals:
    void changeToLeaderBoard();
};

#endif // MAINPAGE_H
