#include "balle.h"
#include "brique.h"

balle::balle(double x,double y, double taille, double vitesse, double directionBalle):_contourCercle(x,y,taille,taille),_vitesse(vitesse),_directionBalle(directionBalle)
{

}

QRectF balle::boundingRect() const
{
    return _contourCercle;
}

void balle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
   painter->setBrush(Qt::black);
   painter->drawEllipse(_contourCercle);
}

void balle::avance()
{
   this->moveBy(_vitesse*qCos(_directionBalle),_vitesse*qSin(_directionBalle));
}

void balle::computeRebound(QGraphicsItem *item)
{
    QPointF positionObstacle = item->pos();
    QRectF typeObstacleGeometry = item->boundingRect();
    QPointF position = this->pos();
    Brique* brique = dynamic_cast<Brique*>(item);

    qInfo("Coucou");

    //détection des briques
    if(brique != NULL)
    {
        brique->estTouchee();
        if(brique->estTouchee()==0)
        {
            delete brique;

        }
    }

    if(position.x()<positionObstacle.x())
    {
        _directionBalle=3.14159-_directionBalle;
    }
    else if(position.x()<positionObstacle.x()+typeObstacleGeometry.width()-_contourCercle.width()/2)
    {
        _directionBalle=2*3.14159-_directionBalle;
    }
    else
    {
        _directionBalle=3.14159-_directionBalle;
    }

}

void balle::setDirectionBalle(double direction)
{
    this->_directionBalle=direction;
}

