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
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    QGraphicsPixmapItem *pic = new QGraphicsPixmapItem(QPixmap(":/riversideMap.png").scaled(this->size(), Qt::IgnoreAspectRatio));
    scene->addItem(pic);
    //resize to fit window and remove
    //setBackground();
    QGraphicsEllipseItem *circleItem = new QGraphicsEllipseItem(QRect(0, 50, 25, 25));

    ui->graphicsView->setAttribute(Qt::WA_TranslucentBackground);
    ui->graphicsView->viewport()->setAutoFillBackground(false);
    scene->addItem(circleItem);

}
MainPage::~MainPage()
{
    delete ui;
}

void MainPage::resizeEvent(QResizeEvent *evt)
{
    //setBackground();
    QWidget::resizeEvent(evt); //call base implementation
}

void MainPage::mousePressEvent(QMouseEvent *event)
{
    qDebug()<<"pos: "<<event->position().x()<<", "<<event->position().y();
}


//set background image
void MainPage::setBackground()
{
    QPixmap bkgnd(":/riversideMap.png");
    bkgnd = bkgnd.scaled(size(), Qt::KeepAspectRatioByExpanding);
    QPalette p = palette();
    p.setBrush(QPalette::Window, bkgnd);
    setPalette(p);
}

void MainPage::on_highScore_clicked()
{
    emit changeToLeaderBoard();
}
