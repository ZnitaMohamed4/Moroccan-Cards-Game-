#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "facile.h"
#include "diffcile.h"

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
    void start();
    void start2();


private:
    Ui::MainWindow *ui;
    // pointeurs vers des objets des classes Facile et Difficile
    Facile *PageFacile;
    Diffcile *PageDifficile;
};
#endif // MAINWINDOW_H


