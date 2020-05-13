#include "brique.h"

Brique::Brique(double x, double y, double largeur, double hauteur, int type): _brique(x, y, largeur, hauteur), _type(type)
{
    _vie=_type+1;
}

QRectF Brique::boundingRect() const
{
    return _brique;
}

void Brique::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
   painter->setBrush(Qt::green);
   painter->drawRect(_brique);
}

int Brique::estTouchee()
{
    return _vie--;
}
