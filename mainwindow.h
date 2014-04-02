#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "editserver.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionExit_triggered();

    void on_actionNew_Server_triggered();

    void on_actionNewServerToolBar_triggered();

    void newServer();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
