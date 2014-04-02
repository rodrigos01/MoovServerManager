#include "editserver.h"
#include "ui_editserver.h"
#include <QFileDialog>

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
