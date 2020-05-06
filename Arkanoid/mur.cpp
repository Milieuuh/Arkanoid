#include "mur.h"

Mur::Mur()
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
