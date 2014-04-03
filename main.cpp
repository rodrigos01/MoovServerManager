#include "mainwindow.h"
#include <QApplication>

#include "servermanager.h"
ServerManager *manager = new ServerManager;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
