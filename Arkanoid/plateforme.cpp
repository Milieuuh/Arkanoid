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

void Plateforme::keyPressEvent(QKeyEvent *event)
{
    switch(event->key())
    {
        case Qt::Key_Q:this->moveBy(-10,0);
            break;
        case Qt::Key_D:this->moveBy(10,0);
            break;
        case Qt::Key_Right:this->moveBy(10,0);
            break;
        case Qt::Key_Left:this->moveBy(-10,0);
            break;

    }
}
