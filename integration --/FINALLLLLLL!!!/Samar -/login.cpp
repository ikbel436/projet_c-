#include "login.h"
#include "ui_login.h"
#include "empfou.h"
#include "QMessageBox"
#include "QPixmap"

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/samar/Desktop/FINAL samar/samar metiers+arduino+log/icons/employes.png");
    ui->label_pic->setPixmap(pix);
    //ui->label_pic->setPixmap(pix.scaled(200,200,Qt::KeepAspectRatio));
}

login::~login()
{
    delete ui;
}

void login::on_connecter_clicked()
{
    QString username = ui->log->text();
    int password = ui->mdp->text().toInt();

    if ((username == "Admin" )||( username == "admin"))
    {
        if (password == 1234)
        { QMessageBox::information(this, "Login","Bienvenue");
    auto win=new empfou();
    win->show();
   // empfou e;
   // e.show();
    login l;
    l.show();

    this->close();}}
    else {
        QMessageBox::warning(this, "Login","Desole Vous n'etes pas un Admin");
}
}
