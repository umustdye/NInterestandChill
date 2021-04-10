/********************************************************************************
** Form generated from reading UI file 'base.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE_H
#define UI_BASE_H

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

class Ui_Base
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

    void setupUi(QMainWindow *Base)
    {
        if (Base->objectName().isEmpty())
            Base->setObjectName(QString::fromUtf8("Base"));
        Base->resize(800, 600);
        centralwidget = new QWidget(Base);
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

        Base->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Base);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Base->setMenuBar(menubar);
        statusbar = new QStatusBar(Base);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Base->setStatusBar(statusbar);

        retranslateUi(Base);

        QMetaObject::connectSlotsByName(Base);
    } // setupUi

    void retranslateUi(QMainWindow *Base)
    {
        Base->setWindowTitle(QCoreApplication::translate("Base", "MainApp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Base: public Ui_Base {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASE_H
