#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mur.h"
#include "balle.h"
#include <QImage>
#include <QTimeLine>
#include <QGraphicsItemAnimation>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(&_scene);
    ui->graphicsView->setBackgroundBrush(QImage("fond2.jpg"));

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


    this->grabKeyboard();

    //Animation de la balle
    connect(&_animationTimer, SIGNAL(timeout()),this,SLOT(progressAnimation()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::progressAnimation()
{
     _balle->avance();
    if(_scene.collidingItems(_balle).isEmpty()==false)
    {
        _balle->computeRebound(_scene.collidingItems(_balle).first());
    }

    if(_balle->pos().y()>50)
    {
        _balle->setPos(_platerforme->pos().x(),_platerforme->pos().y());
        _vie++;
        _nbBalle--;

        //_balleEnMouvement=false;
        //met à jour le nb de balles
        this->creationBalleVie();

        if(_vie==3)
        {
            //this->close();
            //fin de la partie à voir.
        }
    }

}

void MainWindow::creationBrique()
{
    srand(time(0));
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<10; j++)
        {
            _brique = new Brique(0,0);
            _brique->setPos(70+60*i, 50+j*30);
            _scene.addItem(_brique);
        }
    }
}

void MainWindow::creationBalleVie()
{
    double pos=0;

    if(_nbBalle>0)
    {
        for(int i=0; i<_nbBalle;i++)
        {
             balle* _balleVie=new balle(0,0,20,3);
             _balleVie->setTest(1);
             pos=i;
             _balleVie->setPos(480+25*i,-28);
             _scene.addItem(_balleVie);
        }
    }

    if(_vie>0)
    {
        for(int i=pos; i<_vie;i++)
        {
            balle* _balleVie=new balle(0,0,20,3);
            _balleVie->setTest(2);
            _balleVie->setPos(480+25*i,-28);
           _scene.addItem(_balleVie);
        }
    }

}

void MainWindow::keyPressEvent(QKeyEvent *event)
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

void MainWindow::lancementBalle()
{
    _balle->setDirectionBalle(4.5);
    _balleEnMouvement=true;
     _animationTimer.start(10);
}
