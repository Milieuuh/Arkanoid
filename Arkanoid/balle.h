#ifndef BALLE_H
#define BALLE_H

#include <QGraphicsItem>
#include <QPainter>

class balle : public QGraphicsItem
{
public:
    balle();

    QRectF boudingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget );

private:
    QRectF _cercleDelimitant;
    int _type;
};

#endif // BALLE_H
