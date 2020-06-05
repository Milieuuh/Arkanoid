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



