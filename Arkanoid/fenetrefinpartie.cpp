#include "fenetrefinpartie.h"
#include "ui_fenetrefinpartie.h"
#include "fenetrejeu.h"

fenetreFinPartie::fenetreFinPartie(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fenetreFinPartie)

{
    ui->setupUi(this);
}

fenetreFinPartie::~fenetreFinPartie()
{
    delete ui;
}

void fenetreFinPartie::recupererScore(int score)
{
    _score=score;
    QString s = "SCORE : ";
    s+=QString::number(_score);
    this->ui->l_score->setText(s);

}

void fenetreFinPartie::recommencer()
{   
    this->close();
    jeu.show();
}

void fenetreFinPartie::on_quitter_pressed()
{
    this->close();
}
