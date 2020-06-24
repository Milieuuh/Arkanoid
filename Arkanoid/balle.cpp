#include "balle.h"
#include "brique.h"
#include "mur.h"
#include "plateforme.h"

balle::balle(double x,double y, double taille, double vitesse, double directionBalle):_contourCercle(x,y,taille,taille),_vitesse(vitesse),_directionBalle(directionBalle)
{

}

QRectF balle::boundingRect() const
{
    return _contourCercle;
}

void balle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //Détermine la couleur de la balle en fonction du type

   //Correspond à la balle utilisée
   if(_couleurBalle==0)
   {
       painter->setBrush(Qt::black);
       painter->drawEllipse(_contourCercle);
   }

   //Correspond aux balles représentant les vies du joueur
   else if(_couleurBalle==1)
   {
       painter->setBrush(Qt::white);
       painter->drawEllipse(_contourCercle);
   }

   //Correspond aux balles perdues
   else
   {
       painter->setBrush(Qt::red);
       painter->drawEllipse(_contourCercle);
   }
}

void balle::setCouleur(int couleur)
{
    _couleurBalle=couleur;
}



void balle::avance()
{
   this->moveBy(_vitesse*qCos(_directionBalle),_vitesse*qSin(_directionBalle));
}

int balle::computeRebound(QGraphicsItem *item, int _score)
{
    QPointF positionObstacle = item->pos();
    QPointF position = this->pos();
    Brique* brique = dynamic_cast<Brique*>(item);
    Mur* mur = dynamic_cast<Mur*>(item);
    Plateforme* plateforme = dynamic_cast<Plateforme*>(item);

    //détection des briques
    if(brique != NULL)
    {

        brique->estTouchee();

        _directionBalle=_directionBalle+3.14159;

        if(brique->getVie()==0)
        {
            delete brique;
            _nbBriques--;
        }

        _score+=10;


    }
    //Détection des murs
    else if(mur!=NULL)
    {
        if(position.x()>positionObstacle.x())
        {
            _directionBalle=_directionBalle-4.5+3.14159;
        }
        else if (position.x()<positionObstacle.x())
        {         
            _directionBalle=_directionBalle+2.5-3.14159;
        }
        else if (position.y()>positionObstacle.y())
        {           
            _directionBalle=-2.5+3.14159;
        }


    }
    //Détection de la plateforme
    else if(plateforme!=NULL)
    {
        if(position.x()<positionObstacle.x())
        {
           _directionBalle=3.14159+_directionBalle;
        }
        else
        {
             _directionBalle=2*3.14159-_directionBalle;

        }
    }
    return _score;

}

void balle::setDirectionBalle(double direction)
{
    this->_directionBalle=direction;
}

int balle::getNbBrique()
{
    return  _nbBriques;
}

