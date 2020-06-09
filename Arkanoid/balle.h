#ifndef BALLE_H
#define BALLE_H

#include <QGraphicsItem>
#include <QPainter>
#include <QtMath>
#include "brique.h"

class balle : public QGraphicsItem
{
public:
    balle(double x=0, double y=0, double size=20,double vitesse=3,double directionBalle=0.4);

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    void avance();
    int computeRebound(QGraphicsItem *item, int _score);
    void setDirectionBalle(double direction);
    void setTest(int test);
    int getNbBrique();


private:
    QRectF _contourCercle;
    int _type;
    double _vitesse;
    double _directionBalle;
    int _couleurBalle=0;
    int _nbBriques=80;

};

#endif // BALLE_H
