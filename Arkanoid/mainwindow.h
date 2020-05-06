#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include "balle.h"
#include "mur.h"
#include "plateforme.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void progressAnimation();

private:
    Ui::MainWindow *ui;
    QGraphicsScene _scene;
    balle* _balle;
    Plateforme* _platerforme;
    QTimer _animationTimer;
    Mur* _murGauche;
    Mur* _murDroit;
    Mur* _murHaut;
};
#endif // MAINWINDOW_H
