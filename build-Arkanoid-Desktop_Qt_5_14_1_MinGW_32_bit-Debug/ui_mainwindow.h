/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn_commencer;
    QPushButton *btn_quitter;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(615, 500);
        MainWindow->setMinimumSize(QSize(500, 500));
        MainWindow->setMaximumSize(QSize(650, 951));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(650, 900));
        centralwidget->setMaximumSize(QSize(650, 900));
        btn_commencer = new QPushButton(centralwidget);
        btn_commencer->setObjectName(QString::fromUtf8("btn_commencer"));
        btn_commencer->setGeometry(QRect(150, 180, 261, 81));
        btn_commencer->setMaximumSize(QSize(16777215, 16777215));
        btn_quitter = new QPushButton(centralwidget);
        btn_quitter->setObjectName(QString::fromUtf8("btn_quitter"));
        btn_quitter->setGeometry(QRect(151, 279, 261, 81));
        btn_quitter->setMaximumSize(QSize(16777215, 16777215));
        btn_quitter->setIconSize(QSize(16, 50));
        btn_quitter->setCheckable(false);
        btn_quitter->setChecked(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 40, 371, 111));
        label->setStyleSheet(QString::fromUtf8("font: 75 36pt \"Calibri\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 615, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(btn_quitter, SIGNAL(pressed()), MainWindow, SLOT(fermerFenetre()));
        QObject::connect(btn_commencer, SIGNAL(pressed()), MainWindow, SLOT(afficherJeu()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_commencer->setText(QCoreApplication::translate("MainWindow", "COMMENCER", nullptr));
        btn_quitter->setText(QCoreApplication::translate("MainWindow", "QUITTER", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "CASSE BRIQUE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
