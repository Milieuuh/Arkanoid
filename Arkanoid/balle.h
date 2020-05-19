#ifndef BALLE_H
#define BALLE_H

#include <QGraphicsItem>
#include <QPainter>
#include <QtMath>

class balle : public QGraphicsItem
{
public:
    balle(double x=0, double y=0, double size=20,double vitesse=3,double directionBalle=0.4);

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    void avance();
    void computeRebound(QGraphicsItem *item);
    void setDirectionBalle(double direction);

private:
    QRectF _contourCercle;
    int _type;
    double _vitesse;
    double _directionBalle;

};

#endif // BALLE_H
