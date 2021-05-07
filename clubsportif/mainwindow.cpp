#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "login.h"
#include "integration.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    music1->setMedia(QUrl("C:/Users/msi/Desktop/integration/integratif/clubsportif/sons/music.mp3"));
     music1->setVolume(10);
     music1->play();
     //music1->stop();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_connecter_clicked()
{
    QString username = ui->log->text();
    int password = ui->mdp->text().toInt();

    if ((username == "Admin" )||( username == "admin"))
    {
        if (password == 1234)
        { QMessageBox::information(this, "Login","Bienvenue");
            music1->stop();
    auto win=new integration();
    win->show();
    music1->stop();
   // integration e;
   // e.show();
    MainWindow l;
    l.show();
    music1->stop();

    this->close();
        music1->stop();}}
    else {
        QMessageBox::warning(this, "Login","Desole Vous n'etes pas un Admin");
}
}
