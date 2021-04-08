#include "employes.h"
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QTextDocument>
#include <QMessageBox>
#include"exportexcelobject.h"
#include "empfou.h"
#include "ui_empfou.h"
#include<QTextDocument>


EMPLOYES::EMPLOYES()
{
    IDE=0;
    NOM="";
    PRENOM="";
    EMAIL="";
    TEL=0;
    ROLE="";
    SALAIRE=0;


}


EMPLOYES::EMPLOYES(int IDE,QString NOM ,QString PRENOM,QString EMAIL,int TEL,QString ROLE,int SALAIRE){
    this->IDE=IDE;
    this->NOM=NOM;
    this->PRENOM=PRENOM;
    this->EMAIL=EMAIL;
    this->TEL=TEL;
    this->ROLE=ROLE;
    this->SALAIRE=SALAIRE;

}

int EMPLOYES::getIDE(){
return IDE;
}
QString EMPLOYES::getNOM(){
return NOM;
}
QString EMPLOYES::getPRENOM(){
return PRENOM;
}
QString EMPLOYES::getEMAIL(){
return EMAIL;
}
int EMPLOYES::getTEL(){
return TEL;
}
QString EMPLOYES::getROLE(){
return ROLE;
}
int EMPLOYES::getSALAIRE(){
return SALAIRE;
}

void EMPLOYES::setIDE(int IDE ){
this->IDE=IDE;
}
void EMPLOYES::setNOM(QString NOM ){
this->NOM=NOM;
}

void EMPLOYES::setPRENOM(QString PRENOM){
this->PRENOM=PRENOM;
}

void EMPLOYES::setEMAIL(QString EMAIL){
this->EMAIL=EMAIL;
}
void EMPLOYES::setTEL(int TEL){
this->TEL=TEL;
}
void EMPLOYES::setSALAIRE(int SALAIRE){
this->SALAIRE=SALAIRE;
}


bool EMPLOYES::ajouter(){
    QSqlQuery query;
    QString id_string= QString::number(IDE);
    QString dat_string= QString::number(TEL);
    QString sal_string= QString::number(SALAIRE);

          query.prepare("INSERT INTO EMPLOYES (ide, nom, prenom,email, tel, role ,salaire) "
                        "VALUES (:ide, :nom, :prenom, :email, :tel ,:role, :salaire)");
          query.bindValue(":ide",id_string);
          query.bindValue(":nom",NOM);
          query.bindValue(":prenom",PRENOM);
          query.bindValue(":email",EMAIL);
          query.bindValue(":tel",dat_string);
          query.bindValue(":role",ROLE);
          query.bindValue(":salaire",sal_string);
         return query.exec();

}
void EMPLOYES::afficher(Ui::empfou *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    q.prepare("select * from EMPLOYES");
    q.exec();
    modal->setQuery(q);
    ui->tableView->setModel(modal);
}



bool EMPLOYES::Supprimer(Ui::empfou *ui)
{
    QSqlQuery q;
    QString IDE = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString();
    q.prepare("DELETE FROM EMPLOYES WHERE IDE ='"+IDE+"'");
    q.exec();
}

bool EMPLOYES::modifier(Ui::empfou *ui)
{

        QSqlQuery q;
        QString IDE_string=QString::number(IDE);
        QString TEL_string=QString::number(TEL);
        QString SALAIRE_string=QString::number(SALAIRE);

        QSqlQuery qry ;
        qry.prepare("update EMPLOYES set NOM='"+NOM+"',PRENOM='"+PRENOM+"',EMAIL='"+EMAIL+"',TEL='"+TEL+"',ROLE='"+ROLE+"',SALAIRE='"+SALAIRE+"' where IDE='"+IDE+"' ");
        qry.bindValue(":IDE",IDE_string);
        qry.bindValue(":NOM",NOM);
        qry.bindValue(":PRENOM",PRENOM);
        qry.bindValue(":EMAIL",EMAIL);
        qry.bindValue(":TEL",TEL_string);
        qry.bindValue(":ROLE",ROLE);
        qry.bindValue(":SALAIRE",SALAIRE_string);




                q.prepare("UPDATE EMPLOYES set NOM=:NOM,PRENOM=:PRENOM,EMAIL=:EMAIL,TEL=:TEL,ROLE=:ROLE,SALAIRE=:SALAIRE where IDE=:IDE");
                q.bindValue(":IDE",IDE_string);
                q.bindValue(":NOM",NOM);
                q.bindValue(":PRENOM",PRENOM);
                q.bindValue(":EMAIL",EMAIL);
                q.bindValue(":TEL",TEL_string);
                q.bindValue(":ROLE",ROLE);
                q.bindValue(":SALAIRE",SALAIRE_string);

                return q.exec();
    }




void EMPLOYES::Recherche(Ui::empfou *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString rech =ui->recherche->text();
    q.prepare("select * from EMPLOYES where ( TEL LIKE '%"+rech+"%' or NOM LIKE '%"+rech+"%' or PRENOM LIKE'%"+rech+"%' or ROLE LIKE '%"+rech+"% or SALAIRE LIKE '%"+rech+"% or EMAIL LIKE '%"+rech+"%' )");

    if ( q.exec() )
    { modal->setQuery(q);
      ui->tableView->setModel(modal);}

}

void EMPLOYES::Tri_NOM(Ui::empfou *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from EMPLOYES order by NOM");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}
void EMPLOYES::Tri_PRENOM(Ui::empfou *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from EMPLOYES order by PRENOM");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}
void EMPLOYES::Tri_SALAIRE(Ui::empfou *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from EMPLOYES order by SALAIRE");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}


int EMPLOYES::getValide()
{
    return valide;
}

void EMPLOYES::setValide()
{
   valide = 1;
}

