/********************************************************************************
** Form generated from reading UI file 'mainApp.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINAPP_H
#define UI_MAINAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainApp
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainApp)
    {
        if (MainApp->objectName().isEmpty())
            MainApp->setObjectName(QString::fromUtf8("MainApp"));
        MainApp->resize(800, 600);
        centralwidget = new QWidget(MainApp);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setEnabled(true);
        stackedWidget->setAcceptDrops(false);
        stackedWidget->setFrameShape(QFrame::Panel);
        stackedWidget->setFrameShadow(QFrame::Plain);
        stackedWidget->setLineWidth(5);
        loginPage = new QWidget();
        loginPage->setObjectName(QString::fromUtf8("loginPage"));
        stackedWidget->addWidget(loginPage);

        horizontalLayout->addWidget(stackedWidget);

        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_3);

        MainApp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainApp);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainApp->setMenuBar(menubar);
        statusbar = new QStatusBar(MainApp);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainApp->setStatusBar(statusbar);

        retranslateUi(MainApp);

        QMetaObject::connectSlotsByName(MainApp);
    } // setupUi

    void retranslateUi(QMainWindow *MainApp)
    {
        MainApp->setWindowTitle(QCoreApplication::translate("MainApp", "MainApp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainApp: public Ui_MainApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINAPP_H
