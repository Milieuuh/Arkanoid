#ifndef MUR_H
#define MUR_H

#include <QGraphicsItem>
#include <QPainter>

class Mur
{
    public:
        Mur();
        QRectF getRectDelimitant() const;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    private:
        QRectF _rectangleDelimitant;
        int _type;
};

#endif // MUR_H
