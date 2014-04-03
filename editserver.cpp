#include "editserver.h"
#include "ui_editserver.h"
#include <QFileDialog>

#include "servermanager.h"
#include "server.h"

extern ServerManager manager;

EditServer::EditServer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditServer)
{
    ui->setupUi(this);
}

EditServer::~EditServer()
{
    delete ui;
}

void EditServer::on_toolButton_clicked()
{
    QString path = QFileDialog::getExistingDirectory (this, tr("Directory"), directory.path());
    if ( path.isNull() == false )
    {
        directory.setPath(path);
        ui->lnPath->setText(directory.absolutePath());
    }
}

void EditServer::on_buttonBox_accepted()
{
    Server *server = new Server();
    server->setName(ui->txtServerName->text().toStdString());
    server->setPath(directory.absolutePath().toStdString());
    server->useProxy(ui->chkProxy->checkState());
    manager.addServer(server);
}
