#ifndef FENETREFINPARTIE_H
#define FENETREFINPARTIE_H

#include <QWidget>
#include "fenetrejeu.h"

namespace Ui {
class fenetreFinPartie;
}

class fenetreFinPartie : public QWidget
{
    Q_OBJECT

public:
    explicit fenetreFinPartie(QWidget *parent = nullptr);
    ~fenetreFinPartie();
    void recupererScore(int score);

private slots:
    void recommencer();
    void on_quitter_pressed();

private:
    Ui::fenetreFinPartie *ui;
    int _score;
    FenetreJeu jeu;

};

#endif // FENETREFINPARTIE_H
