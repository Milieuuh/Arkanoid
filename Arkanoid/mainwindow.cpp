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

    //Construction du mur
    _mur= new Mur(0,0,100,50,1);
    _scene.addItem(_mur);

    //Construction de la balle
    _balle=new balle(0,0,20,3,0.4);
    _scene.addItem(_balle);
}

MainWindow::~MainWindow()
{
    delete ui;
}

