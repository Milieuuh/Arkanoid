#include "fenetrejeu.h"
#include "ui_fenetrejeu.h"
#include <QVBoxLayout>
#include "fenetrefinpartie.h"

FenetreJeu::FenetreJeu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FenetreJeu)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(&_scene);

    //initialiser mouvement de la balle
    _balleEnMouvement = false;
    _nbBalle=3;

    //Construction des murs
    _murGauche= new Mur(0,0,10,800);
    _murDroit=new Mur(620,0,10,800);
    _murHaut=new Mur(0,-35,630,35);

    _scene.addItem(_murGauche);
    _scene.addItem(_murDroit);
    _scene.addItem(_murHaut);

    //Construction de la balle
    _balle=new balle(310,780,20,3,0.4);
    _scene.addItem(_balle);

    //Plateforme
    _platerforme= new Plateforme(290,800,60,15);
    _scene.addItem(_platerforme);


    this->creationBalleVie();
    this->creationBrique();
    _nbBrique=_balle->getNbBrique();


    this->grabKeyboard();
    afficherScore();

    //Animation de la balle
    connect(&_animationTimer, SIGNAL(timeout()),this,SLOT(progressAnimation()));

}

FenetreJeu::~FenetreJeu()
{
    delete ui;
}


void FenetreJeu::progressAnimation()
{
     _balle->avance();
     //Collision et score mis à jour
    if(_scene.collidingItems(_balle).isEmpty()==false)
    {
        _score =_balle->computeRebound(_scene.collidingItems(_balle).first(), _score);
        afficherScore();
    }

    //Si la balle sort du cadre
    if(_balle->pos().y()>50)
    {
        //MISE A JOUR DE LA BALLE
        _balle->setPos(_platerforme->pos().x(),_platerforme->pos().y());
        _balleEnMouvement=false;
        _balle->setDirectionBalle(0);
        _animationTimer.stop();

        //GESTION DE LA VIE
        _vie++;
        _nbBalle--;
        this->creationBalleVie();

        //FIN DE PARTIE
        if(_vie==3)
        {
           fenetreFinPartie *_finPartie = new fenetreFinPartie();
            _finPartie->recupererScore(_score);
            _finPartie->show();

            this->destroy();
            _vie=0;
            _nbBalle=3;
            _score=0;
            creationBalleVie();
            creationBrique();

            this->close();

        }
    }


    _nbBrique=_balle->getNbBrique();
    if(_nbBrique==0)
    {
        this->creationBrique();
    }

}

void FenetreJeu::creationBrique()
{
    srand(time(0));
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<10; j++)
        {
             int x=(int)rand()%3;
            _brique = new Brique(0,0,60,30,x);
            _brique->setPos(70+60*i, 50+j*30);
            _scene.addItem(_brique);
            _nbBrique++;
        }
    }
}


void FenetreJeu::creationBalleVie()
{
    if(_nbBalle>0)
    {
        for(int i=0; i<_nbBalle;i++)
        {
             balle* _balleVie=new balle(0,0,20,3);
             _balleVie->setTest(1);
             _balleVie->setPos(480+25*i,-28);
             _scene.addItem(_balleVie);
        }
    }

    if(_vie>0)
    {
        for(int i=0; i<_vie;i++)
        {
            balle* _balleVie=new balle(0,0,20,3);
            _balleVie->setTest(2);
            _balleVie->setPos(480+25*i,-28);
           _scene.addItem(_balleVie);
        }
    }

}

void FenetreJeu::keyPressEvent(QKeyEvent *event)
{
    switch(event->key())
    {
        case Qt::Key_Q:
            if(_platerforme->pos().x()>-280)
            {
                _platerforme->moveBy(-10,0);
                if(_balleEnMouvement==false)
                {
                    _balle->setPos(_platerforme->pos().x(),_platerforme->pos().y());
                }
            }
            break;
        case Qt::Key_D:
            if(_platerforme->pos().x()<270)
            {
                _platerforme->moveBy(10,0);
                if(_balleEnMouvement==false)
                {
                    _balle->setPos(_platerforme->pos().x(),_platerforme->pos().y());
                }
            }

            break;
        case Qt::Key_Right:
            if(_platerforme->pos().x()<270)
            {
                _platerforme->moveBy(10,0);
                if(_balleEnMouvement==false)
                {
                    _balle->setPos(_platerforme->pos().x(),_platerforme->pos().y());
                }
            }
            break;
        case Qt::Key_Left:
            if(_platerforme->pos().rx()>-280)
            {
                _platerforme->moveBy(-10,0);
                if(_balleEnMouvement==false)
                {
                    _balle->setPos(_platerforme->pos().x(),_platerforme->pos().y());
                }
            }
            break;
         case Qt::Key_Space:
                if(_balleEnMouvement==false)
                {
                    lancementBalle();
                }
            break;
        default:
        break;

    }
}

void FenetreJeu::lancementBalle()
{
    _balle->setDirectionBalle(4.5);
    _balleEnMouvement=true;
     _animationTimer.start(10);
}

void FenetreJeu::afficherScore()
{
    QString s = "SCORE : ";
    s+=QString::number(_score);
    this->ui->l_score->setText(s);
}

