/********************************************************************************
** Form generated from reading UI file 'fenetrefinpartie.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREFINPARTIE_H
#define UI_FENETREFINPARTIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fenetreFinPartie
{
public:
    QLabel *label;
    QPushButton *recommencer;
    QPushButton *quitter;
    QLabel *l_score;

    void setupUi(QWidget *fenetreFinPartie)
    {
        if (fenetreFinPartie->objectName().isEmpty())
            fenetreFinPartie->setObjectName(QString::fromUtf8("fenetreFinPartie"));
        fenetreFinPartie->resize(500, 500);
        fenetreFinPartie->setMinimumSize(QSize(500, 500));
        fenetreFinPartie->setMaximumSize(QSize(500, 500));
        fenetreFinPartie->setStyleSheet(QString::fromUtf8("background-color: rgb(149, 222, 232);"));
        label = new QLabel(fenetreFinPartie);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 421, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("13 Calibri"));
        font.setPointSize(40);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 40pt bold \"Calibri\";\n"
"color: rgb(204, 29, 29);"));
        recommencer = new QPushButton(fenetreFinPartie);
        recommencer->setObjectName(QString::fromUtf8("recommencer"));
        recommencer->setGeometry(QRect(120, 240, 261, 81));
        QFont font1;
        font1.setPointSize(13);
        recommencer->setFont(font1);
        recommencer->setStyleSheet(QString::fromUtf8("background-color:rgb(63, 196, 98);\n"
"border-style:none;\n"
"border-radius:8px;\n"
"color:#FFF;"));
        quitter = new QPushButton(fenetreFinPartie);
        quitter->setObjectName(QString::fromUtf8("quitter"));
        quitter->setGeometry(QRect(120, 350, 261, 81));
        QFont font2;
        font2.setPointSize(14);
        quitter->setFont(font2);
        quitter->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 29, 29);\n"
"border-style:none;\n"
"border-radius:8px;\n"
"color:#FFF"));
        l_score = new QLabel(fenetreFinPartie);
        l_score->setObjectName(QString::fromUtf8("l_score"));
        l_score->setGeometry(QRect(30, 130, 441, 71));
        l_score->setStyleSheet(QString::fromUtf8("font: 40pt bold \"Calibri\";\n"
"color:rgb(252, 168, 0)"));

        retranslateUi(fenetreFinPartie);
        QObject::connect(recommencer, SIGNAL(pressed()), fenetreFinPartie, SLOT(recommencer()));

        QMetaObject::connectSlotsByName(fenetreFinPartie);
    } // setupUi

    void retranslateUi(QWidget *fenetreFinPartie)
    {
        fenetreFinPartie->setWindowTitle(QCoreApplication::translate("fenetreFinPartie", "Form", nullptr));
        label->setText(QCoreApplication::translate("fenetreFinPartie", "PARTIE FINIE", nullptr));
        recommencer->setText(QCoreApplication::translate("fenetreFinPartie", "RECOMMENCER", nullptr));
        quitter->setText(QCoreApplication::translate("fenetreFinPartie", "QUITTER", nullptr));
        l_score->setText(QCoreApplication::translate("fenetreFinPartie", "VOTRE SCORE : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fenetreFinPartie: public Ui_fenetreFinPartie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREFINPARTIE_H
