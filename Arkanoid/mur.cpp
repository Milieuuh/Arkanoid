#include "mur.h"

Mur::Mur()
{

}

Mur::Mur(double x, double y, double largeur, double longueur, int type):_rectangleDelimitant(x=0,y=0,largeur=50,longueur=50),_type(type=1)
{

}

QRectF Mur::getRectDelimitant() const
{
    return _rectangleDelimitant;
}

void Mur::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect(0,0,50,50);
    _rectangleDelimitant =rect;
}
