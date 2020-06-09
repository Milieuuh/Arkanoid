/********************************************************************************
** Form generated from reading UI file 'fenetrejeu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREJEU_H
#define UI_FENETREJEU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetreJeu
{
public:
    QGraphicsView *graphicsView;
    QLabel *l_score;

    void setupUi(QWidget *FenetreJeu)
    {
        if (FenetreJeu->objectName().isEmpty())
            FenetreJeu->setObjectName(QString::fromUtf8("FenetreJeu"));
        FenetreJeu->resize(650, 900);
        FenetreJeu->setMinimumSize(QSize(650, 900));
        FenetreJeu->setMaximumSize(QSize(650, 900));
        graphicsView = new QGraphicsView(FenetreJeu);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 631, 881));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(149, 222, 232);"));
        l_score = new QLabel(FenetreJeu);
        l_score->setObjectName(QString::fromUtf8("l_score"));
        l_score->setGeometry(QRect(40, 0, 241, 51));
        l_score->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Calibri\";\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(FenetreJeu);

        QMetaObject::connectSlotsByName(FenetreJeu);
    } // setupUi

    void retranslateUi(QWidget *FenetreJeu)
    {
        FenetreJeu->setWindowTitle(QCoreApplication::translate("FenetreJeu", "Casse Brique", nullptr));
        l_score->setText(QCoreApplication::translate("FenetreJeu", "SCORE :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FenetreJeu: public Ui_FenetreJeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREJEU_H
