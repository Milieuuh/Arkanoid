#include "mur.h"

Mur::Mur(double x, double y, double largeur, double longueur, int type):_rectangleDelimitant(x,y,largeur,longueur),_type(type)
{

}

QRectF Mur::boundingRect() const
{
    return _rectangleDelimitant;
}

void Mur::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect(0,0,50,50);
    _rectangleDelimitant =rect;
}
