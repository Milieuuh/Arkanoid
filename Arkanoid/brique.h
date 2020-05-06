#ifndef BRIQUE_H
#define BRIQUE_H

#include <QGraphicsItem>
#include <QRectF>
#include <QPainter>

class Brique : public QGraphicsItem
{
    public:
        Brique(double largeur=0, double hauteur=0, double size=20,int type=0);
        QRectF boundingRect() const;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
        int estTouchee();

    private:
        QRectF _brique;
        int _type;
        int _vie;
};

#endif // BRIQUE_H
