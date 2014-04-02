#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "editserver.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}

void MainWindow::on_actionNew_Server_triggered()
{
    newServer();
}

void MainWindow::on_actionNewServerToolBar_triggered()
{
    newServer();
}

void MainWindow::newServer() {
    EditServer *editServer = new EditServer;
    editServer->show();
}
