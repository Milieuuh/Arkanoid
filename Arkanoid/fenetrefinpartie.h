#ifndef FENETREFINPARTIE_H
#define FENETREFINPARTIE_H

#include <QWidget>

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

    void on_recommencer_pressed();

private:
    Ui::fenetreFinPartie *ui;


};

#endif // FENETREFINPARTIE_H