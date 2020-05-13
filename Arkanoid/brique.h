#ifndef BRIQUE_H
#define BRIQUE_H

#include <QGraphicsItem>
#include <QRectF>
#include <QPainter>

class Brique : public QGraphicsItem
{
    public:
        Brique(double x, double y, double largeur=60, double hauteur=30, int type=0);
        QRectF boundingRect() const;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
        int estTouchee();

    private:
        QRectF _brique;
        int _type;
        int _vie;
};

#endif // BRIQUE_H
