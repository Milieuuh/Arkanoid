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

   if(_test==0)
   {
       painter->setBrush(Qt::black);
       painter->drawEllipse(_contourCercle);
   }
   else if(_test==1)
   {
       painter->setBrush(Qt::white);
       painter->drawEllipse(_contourCercle);
   }
   else
   {
       painter->setBrush(Qt::red);
       painter->drawEllipse(_contourCercle);
   }
}

void balle::setTest(int test)
{
    _test=test;
}



void balle::avance()
{
   this->moveBy(_vitesse*qCos(_directionBalle),_vitesse*qSin(_directionBalle));
}

void balle::computeRebound(QGraphicsItem *item, QVector<Brique*> listeBrique)
{
    QPointF positionObstacle = item->pos();
    QRectF typeObstacleGeometry = item->boundingRect();
    QPointF position = this->pos();
    Brique* brique = dynamic_cast<Brique*>(item);

    //détection des briques
    if(brique != NULL)
    {
        brique->estTouchee();
        _directionBalle=4.5+3.14159;
        if(brique->estTouchee()==0)
        {
            listeBrique.removeOne(brique);
            delete brique;

        }
        else
        {
            brique->setType(brique->getType()-1);

        }
    }


    if(position.x()<positionObstacle.x())
    {
        _directionBalle=3.14159-_directionBalle;
    }
    else
    {
        if((position.x()<positionObstacle.x()+typeObstacleGeometry.width()-_contourCercle.width()/2))
        {
            _directionBalle=2*3.14159-_directionBalle;
        }
        else
        {
            _directionBalle=3.14159-_directionBalle;
        }
    }


}

void balle::setDirectionBalle(double direction)
{
    this->_directionBalle=direction;
}

