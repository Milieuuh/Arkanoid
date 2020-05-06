#include "mur.h"

Mur::Mur()
{

}

QRectF Mur::getRectDelimitation() const
{
    return this->_rectDelimitation;
}

void Mur::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect(0,0,50,50);
    this->_rectDelimitation=rect;
}
