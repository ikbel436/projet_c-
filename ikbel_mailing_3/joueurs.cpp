#include "joueurs.h"
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QTextDocument>
#include <QMessageBox>
#include"exportexcelobject.h"
#include "joueur_categ.h"
#include "ui_joueur_categ.h"
#include<QTextDocument>


JOUEURS::JOUEURS()
{
    id=0;
    nom="";
    prenom="";
     date_n="";
    email="";
   tel=0;
   idC=0;
   idS=0;


}


JOUEURS::JOUEURS(int id,QString nom ,QString prenom,QString date_n,QString email,int tel,int idC,int idS){
    this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->date_n=date_n;
    this->email=email;
    this->tel=tel;
this->idC=idC;
    this->idS=idS;
}

int JOUEURS::getID(){
return id;
}
int JOUEURS::getidS(){
return idS;
}
int JOUEURS::getidC(){
return idC;
}
QString JOUEURS::getNOM(){
return nom;
}
QString JOUEURS::getPRENOM(){
return prenom;
}
QString JOUEURS::getDAT(){
return date_n;
}
QString JOUEURS::getEMAIL(){
return email;
}
int JOUEURS::getTEL(){
return tel;
}

void JOUEURS::setID(int id ){
this->id=id;
}
void JOUEURS::setidS(int idS ){
this->idS=idS;
}
void JOUEURS::setidC(int idC ){
this->idC=idC;
}
void JOUEURS::setNOM(QString nom ){
this->nom=nom;
}

void JOUEURS::setPRENOM(QString prenom){
this->prenom=prenom;
}

void JOUEURS::setDAT(QString date_n){
this->date_n=date_n;
}
void JOUEURS::setEMAIL(QString email){
this->email=email;
}
void JOUEURS::setTEL(int tel){
this->tel=tel;
}


bool JOUEURS::ajouter(){
    QSqlQuery query;
    QString id_string= QString::number(id);
    //QString dat_string= QString::number(DAT);

       QString tel_string= QString::number(tel);

          query.prepare("INSERT INTO joueurs ( id, nom, prenom , date_n ,email, tel, idC, idS) "
                        "VALUES (:id, :nom, :prenom, :date_n ,:email, :tel, :idC, :idS)");
          query.bindValue(":id", id_string);
          query.bindValue(":nom", nom);
          query.bindValue(":prenom",prenom);
          query.bindValue(":date_n", date_n);
           query.bindValue(":email",email);
          query.bindValue(":tel",tel_string);
          query.bindValue(":idC",idC);
          query.bindValue(":idS",idS);

         return query.exec();

                        }
void JOUEURS::afficher(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    q.prepare("select s.nom as sport, c.nom as categ,j.id,j.nom,j.prenom,j.date_n,j.email,j.tel from joueurs j inner join categories c on j.idC=c.id inner join sport s on j.idS=s.id");
    q.exec();
    modal->setQuery(q);
    ui->tableView->setModel(modal);
}



bool JOUEURS::Supprimer(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QString id = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString();
    q.prepare("DELETE FROM joueurs WHERE id ='"+id+"'");
    q.exec();
}

bool JOUEURS::modifier(Ui::joueur_categ *ui)
{

        QSqlQuery q;

       // QString id=ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString();

       // q.prepare("UPDATE joueurs set nom:=nom_modif,prenom:=lieu_modif, date_n:=DAT_modif, email:=prix_modif where id='"+id+"'");
        QString id_string= QString::number(id);
        QString dat_string= QString::number(tel);

              q.prepare("UPDATE joueurs SET id=:id,nom=:nom,prenom=:prenom,date_n=:date_n,email=:email,tel=:tel where id=:id");
       /* q.bindValue(":nom_modif",ui->nom_modif->text());
        q.bindValue(":lieu_modif",ui->lieu_modif->text());
        q.bindValue(":DAT_modif",ui->date_modif->text());
        q.bindValue(":prix_modif",ui->prix_modif->text());*/
              q.bindValue(":id", id_string);
              q.bindValue(":nom", nom);
              q.bindValue(":prenom", prenom);
              q.bindValue(":date_n",date_n);
               q.bindValue(":email",email);

               q.bindValue(":tel",dat_string);

        return q.exec();

    }




void JOUEURS::Recherche(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString rech =ui->recherche->text();
    q.prepare("select * from joueurs where (email LIKE '%"+rech+"%' or nom LIKE '%"+rech+"%' or prenom LIKE'%"+rech+"%' )");

    if ( q.exec() )
    { modal->setQuery(q);
      ui->tableView->setModel(modal);}

}

void JOUEURS::Tri_NOM(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from joueurs j order by j.nom");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}
void JOUEURS::Tri_ID(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from joueurs j order by j.id");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}
void JOUEURS::Tri_DATE(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from joueurs order by date_n");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}



bool JOUEURS::modifierb(){
    QSqlQuery query;
    QString id_string= QString::number(id);
    QString dat_string= QString::number(tel);

          query.prepare("UPDATE joueurs SET id=:id,nom=:nom,prenom=:prenom,date_n=:date_n,email=:email,tel=:tel where id=:id");
          query.bindValue(":id", id_string);
          query.bindValue(":nom", nom);
          query.bindValue(":prenom", prenom);
          query.bindValue(":date_n",date_n);
           query.bindValue(":email",email);

           query.bindValue(":tel",dat_string);
         return query.exec();

                        }




void JOUEURS::Recherche1(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString rech =ui->categorie->text();
    QString rech1=ui->descrip->text();
    q.prepare("select * from joueurs j inner join categories c on j.idC=c.id inner join sport s on j.idS=s.id where (c.nom LIKE '%"+rech+"%' and s.nom LIKE '%"+rech1+"%' )");

    if ( q.exec() )
    { modal->setQuery(q);
      ui->tableView->setModel(modal);}

}
