#include "plateforme.h"

Plateforme::Plateforme(double x,double y, double width,double height):_contourPlateforme(x,y,width,height)
{

}


QRectF Plateforme::boundingRect() const
{
    return _contourPlateforme;
}

void Plateforme::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
   painter->setBrush(Qt::red);
   painter->drawRect(_contourPlateforme);
}

