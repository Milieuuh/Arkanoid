#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mur.h"
#include <QImage>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(&_scene);
    ui->graphicsView->setBackgroundBrush(QImage("image/fond.png"));

    //Construction du mur
    Mur* monMur= new Mur(0,0,100,50,1);
    _scene.addItem(monMur);
}

MainWindow::~MainWindow()
{
    delete ui;
}

