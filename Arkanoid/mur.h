#ifndef MUR_H
#define MUR_H

#include <QGraphicsItem>
#include <QPainter>

//REPRESENTE LE MUR SUR LES CÔTES

class Mur
{
    public:
        Mur();
        QRectF getRectDelimitation() const;

        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    private:
        QRectF _rectDelimitation;
        int _type;

};

#endif // MUR_H
