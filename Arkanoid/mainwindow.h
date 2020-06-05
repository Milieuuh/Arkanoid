#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "fenetrejeu.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void afficherJeu();
    void fermerFenetre();

private:
    Ui::MainWindow *ui;
    FenetreJeu _fenetreJeu;
};
#endif // MAINWINDOW_H
