#include "mur.h"

Mur::Mur(double x=0, double y=0, double largeur=50, double longueur=50, int type=1)
    :_rectangleDelimitant(x,y, largeur, longueur), _type(type)
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
