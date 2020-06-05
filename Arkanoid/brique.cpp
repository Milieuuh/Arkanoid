#include "brique.h"
#include <QLabel>
#include <QPixmap>
#include <QGridLayout>

Brique::Brique(double x, double y, double largeur, double hauteur, int type): _brique(x, y, largeur, hauteur), _type(type)
{
    //Gestion de la brique:
    //si c'est une brique "facile", alors l'utilisateur peut la détruire en la touchant une seule fois
    // si "moyen", alors doit toucher 2 fois
    // si "difficile" alors 3 fois.

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
    if(_vie==1)
    {
        painter->setBrush(Qt::green);
        painter->drawRect(_brique);
    }
    else if(_vie==2)
    {

        painter->setBrush(QColor(255, 175, 0));
        painter->drawRect(_brique);
    }
    else if(_vie==3)
    {
        painter->setBrush(Qt::darkRed);
        painter->drawRect(_brique);
    }


}

int Brique::estTouchee()
{
    return this->_vie--;
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

