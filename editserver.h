#ifndef EDITSERVER_H
#define EDITSERVER_H

#include <QDialog>
#include <QDir>

namespace Ui {
class EditServer;
}

class EditServer : public QDialog
{
    Q_OBJECT

public:
    explicit EditServer(QWidget *parent = 0);
    ~EditServer();

private slots:
    void on_toolButton_clicked();

private:
    Ui::EditServer *ui;
    QDir directory;
};

#endif // EDITSERVER_H
