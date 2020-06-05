#include "fenetrefinpartie.h"
#include "ui_fenetrefinpartie.h"

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

void fenetreFinPartie::on_pushButton_2_pressed()
{
    this->close();
}

void fenetreFinPartie::on_pushButton_pressed()
{
    this->close();
   // this->_FenetreJeu.show();
}
