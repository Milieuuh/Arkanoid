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

private slots:
    void on_pushButton_2_pressed();
    void on_pushButton_pressed();

private:
    Ui::fenetreFinPartie *ui;
    //FenetreJeu _FenetreJeu;
};

#endif // FENETREFINPARTIE_H
