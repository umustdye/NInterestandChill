/********************************************************************************
** Form generated from reading UI file 'leaderboard.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEADERBOARD_H
#define UI_LEADERBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LeaderBoard
{
public:
    QLabel *LBlabel;
    QListWidget *SpotlistWidget;
    QListWidget *NamelistWidget;
    QListWidget *PointslistWidget;

    void setupUi(QWidget *LeaderBoard)
    {
        if (LeaderBoard->objectName().isEmpty())
            LeaderBoard->setObjectName(QString::fromUtf8("LeaderBoard"));
        LeaderBoard->resize(542, 578);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(239, 129, 39, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        LeaderBoard->setPalette(palette);
        LBlabel = new QLabel(LeaderBoard);
        LBlabel->setObjectName(QString::fromUtf8("LBlabel"));
        LBlabel->setGeometry(QRect(200, 20, 141, 51));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        LBlabel->setPalette(palette1);
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        LBlabel->setFont(font);
        SpotlistWidget = new QListWidget(LeaderBoard);
        SpotlistWidget->setObjectName(QString::fromUtf8("SpotlistWidget"));
        SpotlistWidget->setGeometry(QRect(25, 80, 61, 471));
        QPalette palette2;
        QBrush brush3(QColor(255, 40, 12, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        QBrush brush4(QColor(255, 249, 162, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush4);
        QBrush brush5(QColor(255, 40, 12, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        QBrush brush6(QColor(0, 0, 0, 128));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        SpotlistWidget->setPalette(palette2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Comic Sans MS"));
        font1.setPointSize(10);
        font1.setItalic(true);
        SpotlistWidget->setFont(font1);
        NamelistWidget = new QListWidget(LeaderBoard);
        NamelistWidget->setObjectName(QString::fromUtf8("NamelistWidget"));
        NamelistWidget->setGeometry(QRect(75, 80, 321, 471));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        NamelistWidget->setPalette(palette3);
        NamelistWidget->setFont(font1);
        NamelistWidget->setAutoScrollMargin(15);
        PointslistWidget = new QListWidget(LeaderBoard);
        PointslistWidget->setObjectName(QString::fromUtf8("PointslistWidget"));
        PointslistWidget->setGeometry(QRect(390, 80, 121, 471));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        PointslistWidget->setPalette(palette4);
        PointslistWidget->setFont(font1);

        retranslateUi(LeaderBoard);

        QMetaObject::connectSlotsByName(LeaderBoard);
    } // setupUi

    void retranslateUi(QWidget *LeaderBoard)
    {
        LeaderBoard->setWindowTitle(QCoreApplication::translate("LeaderBoard", "Form", nullptr));
        LBlabel->setText(QCoreApplication::translate("LeaderBoard", "Leaderboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LeaderBoard: public Ui_LeaderBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEADERBOARD_H
