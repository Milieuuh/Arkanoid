#ifndef FENETREJEU_H
#define FENETREJEU_H

#include <QWidget>
#include <QGraphicsScene>
#include <QTimer>
#include "balle.h"
#include "mur.h"
#include "plateforme.h"
#include "brique.h"
#include <QKeyEvent>
#include <QGraphicsItem>

namespace Ui {
class FenetreJeu;
}

class FenetreJeu : public QWidget
{
    Q_OBJECT

public:
    explicit FenetreJeu(QWidget *parent = nullptr);
    ~FenetreJeu();

public slots:
    void progressAnimation();
    void creationBrique();
    void keyPressEvent(QKeyEvent *event);
    void lancementBalle();
    void creationBalleVie();
    void afficherScore();


private:
    Ui::FenetreJeu *ui;
    QGraphicsScene _scene;
    balle* _balle;
    Plateforme* _platerforme;
    QTimer _animationTimer;
    Mur* _murGauche;
    Mur* _murDroit;
    Mur* _murHaut;
    Brique* _brique;
    bool _balleEnMouvement;
    int _vie=0;
    int _nbBalle;
    int _nbBrique;
    int _score=0;

    //fenetreFinPartie _finPartie;
};

#endif // FENETREJEU_H
