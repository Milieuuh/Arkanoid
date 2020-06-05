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
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::afficherJeu()
{
    this->close();
    this->_fenetreJeu.show();
}

void MainWindow::fermerFenetre()
{
    this->close();
}
