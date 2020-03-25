#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void graphismeBouton(QPushButton* b);

private:
    Ui::MainWindow *ui;

    //VARIABLES
    QPushButton *btn_quitter;
    QPushButton *btn_resume;
};
#endif // MAINWINDOW_H
