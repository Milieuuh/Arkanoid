#include "brique.h"

Brique::Brique(double x, double y, double largeur, double hauteur, int type): _brique(x, y, largeur, hauteur), _type(type)
{
    //Gestion de la brique:
    //si c'est une brique "facile", alors l'utilisateur peut la détruire en la touchant une seule fois
    // si "moyen", alors doit toucher 2 fois
    // si "difficile" alors 3 fois.

    _type=  (int)rand()%3-1;

    if(_type==0)
    {
        _vie=1;
    }
    else if(_type==1)
    {
        _vie=2;
    }
    else if(_type==2)
    {
        _vie=3;
    }
}

QRectF Brique::boundingRect() const
{
    return _brique;
}

void Brique::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if(_type==0)
    {
        painter->setBrush(Qt::green);
    }
    else if(_type==1)
    {

        painter->setBrush(QColor(255, 175, 0));
    }
    else
    {
        painter->setBrush(Qt::darkRed);
    }

   painter->drawRect(_brique);
}

int Brique::estTouchee()
{
    return _vie--;
}

int Brique::getVie()
{
    return _vie;
}

int Brique:: getType()
{
    return _type;
}

void Brique::setType(int type)
{
    _type=type;
}
