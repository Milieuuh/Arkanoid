#ifndef MUR_H
#define MUR_H

#include <QGraphicsItem>
#include <QPainter>

class Mur : public QGraphicsItem
{
    public:
        Mur(double x=0, double y=0, double largeur=50, double longueur=50, int type=1);
        QRectF boundingRect() const;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    private:
        QRectF _rectangleDelimitant;
        int _type;
};

#endif // MUR_H
