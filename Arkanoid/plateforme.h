#ifndef PLATEFORME_H
#define PLATEFORME_H

#include <QGraphicsItem>
#include <QPainter>
#include <QKeyEvent>

class Plateforme : public QGraphicsItem
{
public:
    Plateforme(double x=0, double y=0, double width=60, double height=30);

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void keyPressEvent(QKeyEvent *event);

private:
    QRectF _contourPlateforme;
    int _type;
};

#endif // PLATEFORME_H
