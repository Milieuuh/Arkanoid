#include "mur.h"

Mur::Mur(double x, double y, double largeur, double longueur):_rectangleDelimitant(x,y,largeur,longueur)
{

}

QRectF Mur::boundingRect() const
{
    return _rectangleDelimitant;
}

void Mur::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(_rectangleDelimitant);
}
