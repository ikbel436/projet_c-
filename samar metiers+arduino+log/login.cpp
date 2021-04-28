#include "login.h"
#include "ui_login.h"
#include "empfou.h"

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_connecter_clicked()
{
    auto win=new empfou();
    win->show();
   // empfou e;
   // e.show();
    login l;
    l.show();

    this->close();
}
