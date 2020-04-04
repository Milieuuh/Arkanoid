#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    btn_quitter = ui->btnUI_quitter;
    btn_resume = ui->btnUI_resume;

    //APPEL DE LA FONCTION POUR LE GRAPHISME DES BOUTONS
    this->graphismeBouton(btn_resume);
    this->graphismeBouton(btn_quitter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::graphismeBouton(QPushButton* b)
{
    b->setStyleSheet("* { background-color: white; border-width: 2px; border-radius: 10px; }"
                     "*:hover { color: green; border-width: 2px; border-radius: 10px; }");

}


void MainWindow::on_btnUI_quitter_clicked()
{
    this->close();
}
