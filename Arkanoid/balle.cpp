#include "balle.h"

balle::balle(double x,double y, double taille, double vitesse, double directionBalle):_contourCercle(x,y,taille,taille),_directionBalle(directionBalle)
{

}

QRectF balle::boundingRect() const
{

}

void balle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

}
