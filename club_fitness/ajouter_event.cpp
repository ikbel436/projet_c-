#include "ajouter_event.h"
#include "ui_ajouter_event.h"
#include"event.h"
#include<QDebug>
#include <QMessageBox>

ajouter_event::ajouter_event(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ajouter_event)
{
    ui->setupUi(this);
}

ajouter_event::~ajouter_event()
{
    delete ui;
}

void ajouter_event::on_Valider_clicked()
{  int id=ui->id->text().toInt();
    QString NOM=ui->nom->text();
    QString lieu=ui->lieu->text();
    QString DAT=ui->date->text();
    int NB=ui->nb->text().toInt();
     int prix=ui->prix->text().toInt();


    EVENT F(id,NOM,lieu,DAT,NB,prix);

    bool test=F.ajouter();
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout de event succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
          //ui->tableView->setModel(F.afficher());
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("ajout failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}
void ajouter_event::on_Annuler_clicked()
{
    gestion_event *w = new gestion_event;
    hide();
    w->show();
}


