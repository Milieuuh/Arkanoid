#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mur.h"
#include "balle.h"
#include <QImage>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(&_scene);
    ui->graphicsView->setBackgroundBrush(QImage("image/fond.png"));

    //Construction des murs
    _murGauche= new Mur(0,0,10,800,0);
    _murDroit=new Mur(620,0,10,800,0);
    _murHaut=new Mur(0,0,630,10,0);

    _scene.addItem(_murGauche);
    _scene.addItem(_murDroit);
    _scene.addItem(_murHaut);

    //Construction de la balle
    _balle=new balle(310,780,20,3,0.4);
    _scene.addItem(_balle);

    //Plateforme
    _platerforme= new Plateforme(290,800,60,15);
    _scene.addItem(_platerforme);

    _platerforme->grabKeyboard();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::animation()
{
    _animationTimer.setInterval(1000);
    _balle->avancer();
}

