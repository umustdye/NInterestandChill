#include "mainApp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainApp w;
    w.show();
    return a.exec();
}
