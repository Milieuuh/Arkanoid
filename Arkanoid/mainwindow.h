#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include "balle.h"
#include "mur.h"
#include "plateforme.h"
#include "brique.h"
#include <QKeyEvent>
#include <QGraphicsItem>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void progressAnimation();
    void creationBrique();
    void keyPressEvent(QKeyEvent *event);
    void lancementBalle();
    void creationBalleVie();

private:
    Ui::MainWindow *ui;
    QGraphicsScene _scene;
    balle* _balle;
    Plateforme* _platerforme;
    QTimer _animationTimer;
    Mur* _murGauche;
    Mur* _murDroit;
    Mur* _murHaut;
    Brique* _brique;
    bool _balleEnMouvement;
    int _vie=0;
    int _nbBalle;
};
#endif // MAINWINDOW_H
