#include "evenement.h"
#include "ui_evenement.h"
#include "event.h"
#include"sponsor.h"
#include <QApplication>
#include <QMessageBox>
#include <QIntValidator>

Evenement::Evenement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Evenement)
{
    ui->setupUi(this);
    ui->le_id->setValidator(new QIntValidator(0, 99999, this));
    ui->tableView->setModel(F.afficher());
   // ui->le_idstock->setValidator(new QIntValidator(0, 99999, this));
    ui->tableView_2->setModel(S.afficher());
}

Evenement::~Evenement()
{
    delete ui;
}


void Evenement::on_pb_ajouter_clicked()
{
    int  id=ui->ide->text().toInt();
    QString NOM=ui->nom->text();
    QString lieu=ui->lieu->text();
    int DAT=ui->date->text().toInt();
    int NB=ui->nb->text().toInt();
     int prix=ui->prix->text().toInt();


    EVENT F(id,NOM,lieu,DAT,NB,prix);

    bool test=F.ajouter();
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout de event succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
          ui->tableView->setModel(F.afficher());
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("ajout failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void Evenement::on_pb_supprimer_clicked()
{
   EVENT F1;
    F1.setid(ui->le_id->text().toInt());
    bool test=F1.supprimer(F1.getid());
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("supprimer succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableView->setModel(F.afficher());
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("supprimer failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}



void Evenement::on_pb_ajouter_s_clicked()
{
    int  id=ui->id->text().toInt();
    QString nom=ui->nom_s->text();
    QString adresse=ui->adresse_s->text();
    QString type=ui->type_s->text();
      QString email=ui->email_s->text();
    int tel=ui->tel_s->text().toInt();


  sponsor S(id,type,adresse,email,tel,nom);

    bool test=S.ajouter();
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout de sponsor succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
          ui->tableView_2->setModel(S.afficher());
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("ajout sponsor failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void Evenement::on_pb_supprimer_s_clicked()
{
   sponsor S1;
     S1.setid(ui->id_s->text().toInt());
     bool test=S1.supprimer_s(S1.getid());
     if(test){
         QMessageBox::information(nullptr, QObject::tr("OK"),
                     QObject::tr("supprimer sponsor succesful.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
         ui->tableView_2->setModel(S.afficher());
     }
     else{

         QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                     QObject::tr("supprimer sponsor failed.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
     }
}

