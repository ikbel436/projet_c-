#include "gestion.h"
#include "ui_gestion.h"
#include"entraineur.h"
#include <QApplication>
#include <QMessageBox>
#include <QIntValidator>

gestion::gestion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestion)
{
    ui->setupUi(this);

    ui->id->setValidator(new QIntValidator(0, 99999, this));
    ui->tableView->setModel(F.afficher());
    //ui->le_idstock->setValidator(new QIntValidator(0, 99999, this));
    //ui->tab_stock_2->setModel(S.afficher());
}

gestion::~gestion()
{
    delete ui;
}
void gestion::on_pb_ajouter_e_clicked()
{
    int  id=ui->ide->text().toInt();
    QString nom=ui->nome->text();
    QString prenom=ui->prenome->text();
    int dat=ui->datenai->text().toInt();
    QString email=ui->emaile->text();
    int tel=ui->tele->text().toInt();


   entraineur F(id,nom,prenom,dat,email,tel);

    bool test=F.ajouter();
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout de entraineur succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
          ui->tableView_2->setModel(F.afficher());
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("ajout failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void gestion::on_pb_supprimer_e_clicked()
{
   entraineur F1;
    F1.setid(ui->ide_s->text().toInt());
    bool test=F1.supprimer(F1.getid());
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("supprimer succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableView_2->setModel(F.afficher());
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("supprimer failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}
