/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "drawergl.h"
#include "genomslistwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    DrawerGL *drawer;
    QGraphicsView *graphicsView;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *activateDrawButton;
    QPushButton *pauseButton;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *worldSettingsMenu;
    QPushButton *newPopulationSettingsButton;
    QPushButton *saveGenomsButton;
    QPushButton *loadGenomsButton;
    QHBoxLayout *horizontalLayout_2;
    GenomsListWidget *listGenoms;
    QSlider *speedSlider;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        drawer = new DrawerGL(centralwidget);
        drawer->setObjectName(QString::fromUtf8("drawer"));
        drawer->setGeometry(QRect(10, 10, 1200, 900));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(1220, 10, 690, 400));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(1220, 420, 691, 491));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        activateDrawButton = new QPushButton(gridLayoutWidget);
        activateDrawButton->setObjectName(QString::fromUtf8("activateDrawButton"));

        horizontalLayout->addWidget(activateDrawButton);

        pauseButton = new QPushButton(gridLayoutWidget);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));

        horizontalLayout->addWidget(pauseButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        worldSettingsMenu = new QPushButton(gridLayoutWidget);
        worldSettingsMenu->setObjectName(QString::fromUtf8("worldSettingsMenu"));

        horizontalLayout_3->addWidget(worldSettingsMenu);

        newPopulationSettingsButton = new QPushButton(gridLayoutWidget);
        newPopulationSettingsButton->setObjectName(QString::fromUtf8("newPopulationSettingsButton"));

        horizontalLayout_3->addWidget(newPopulationSettingsButton);

        saveGenomsButton = new QPushButton(gridLayoutWidget);
        saveGenomsButton->setObjectName(QString::fromUtf8("saveGenomsButton"));

        horizontalLayout_3->addWidget(saveGenomsButton);

        loadGenomsButton = new QPushButton(gridLayoutWidget);
        loadGenomsButton->setObjectName(QString::fromUtf8("loadGenomsButton"));

        horizontalLayout_3->addWidget(loadGenomsButton);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        gridLayout_2->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        listGenoms = new GenomsListWidget(gridLayoutWidget);
        listGenoms->setObjectName(QString::fromUtf8("listGenoms"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listGenoms->sizePolicy().hasHeightForWidth());
        listGenoms->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(listGenoms, 0, 1, 1, 1);

        speedSlider = new QSlider(gridLayoutWidget);
        speedSlider->setObjectName(QString::fromUtf8("speedSlider"));
        speedSlider->setValue(99);
        speedSlider->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(speedSlider, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        activateDrawButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\267\321\203\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        pauseButton->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202/\320\241\321\202\320\276\320\277", nullptr));
        worldSettingsMenu->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \320\274\320\270\321\200\320\260", nullptr));
        newPopulationSettingsButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\277\320\276\320\277\321\203\320\273\321\217\321\206\320\270\321\216", nullptr));
        saveGenomsButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\277\320\276\320\277\321\203\320\273\321\217\321\206\320\270\321\216", nullptr));
        loadGenomsButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\277\320\276\320\277\321\203\320\273\321\217\321\206\320\270\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
