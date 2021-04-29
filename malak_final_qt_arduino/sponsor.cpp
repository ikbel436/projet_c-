#include "sponsor.h"

#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QTextDocument>
#include <QMessageBox>

#include "event_sponsor.h"
#include "ui_event_sponsor.h"
#include<QTextDocument>

sponsor::sponsor()
{
  id=0;
  nom="";
  type="";
  adresse="";
  email="";
  tel=0;
  idE=0;
}

sponsor::sponsor(int id,QString nom, QString type,QString adresse,QString email,int tel,int idE)
{
this->id=id;
    this->nom=nom;
    this->type=type;
    this->adresse=adresse;
    this->email=email;
    this->tel=tel;
    this->idE=idE;
}

int sponsor::getID()
{
    return id;
}
int sponsor::getidE()
{
    return idE;
}
QString sponsor::getNom()
{return nom;}
QString sponsor::getType()
{return type;}
QString sponsor::getAdresse()
{return adresse;}
QString sponsor::getEmail()
{return email;}
int sponsor::getTel()
{return tel;}


void sponsor::setId(int id)
{this->id=id;}
void sponsor::setNom(QString nom)
{this->nom=nom;}
void sponsor::setType(QString type)
{this->type=type;}
void sponsor::setAdresse(QString adresse)
{this->adresse=adresse;}
void sponsor::setEmail(QString email)
{this->email=email;}
void sponsor::setTel(int tel)
{this->tel=tel;}
void sponsor::setidE(int idE)
{this->idE=idE;}



bool sponsor::ajouter(){
    QSqlQuery query;
    QString id_string= QString::number(id);

       QString tel_string= QString::number(tel);
          query.prepare("INSERT INTO sponsor ( id, nom, type , adresse,email,tel,idE) "
                        "VALUES (:id, :nom, :type, :adresse ,:email, :tel, :idE)");
          query.bindValue(":id", id_string);
          query.bindValue(":nom", nom);
          query.bindValue(":type",type);
          query.bindValue(":adresse", adresse);
           query.bindValue(":email",email);
          query.bindValue(":tel",tel_string);
          query.bindValue(":idE",idE);

         return query.exec();
}

void sponsor::afficher_sponsor(Ui::event_sponsor *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    q.prepare("select s.id,s.nom,s.type,s.adresse,s.email,s.tel,e.nom from sponsor s inner join event e on s.idE=e.id");
    q.exec();
    modal->setQuery(q);
    ui->tableView_2->setModel(modal);
}



bool sponsor::Supprimer_sponsor(Ui::event_sponsor *ui)
{
    QSqlQuery q;
    QString id = ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),0)).toString();
    q.prepare("DELETE FROM sponsor WHERE id ='"+id+"'");
    q.exec();
}

bool sponsor::modifier_sponsor(Ui::event_sponsor *ui)
{

        QSqlQuery q;

        QString id_string=QString::number(id);
        QString tel_string=QString::number(tel);



                q.prepare("UPDATE sponsor set id=:id,nom=:nom,type=:type, adresse=:adresse,email=:email ,tel=:tel  where id=:id");
                q.bindValue(":id",id_string);
                q.bindValue(":nom",nom);
                q.bindValue(":type",type);
                q.bindValue(":adresse",adresse);
                q.bindValue(":email",email);
                q.bindValue(":tel",tel_string);

                return q.exec();
    }

void sponsor::Recherche_sponsor(Ui::event_sponsor *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString rech =ui->recherche_2->text();
    q.prepare("select * from sponsor where ( tel LIKE '%"+rech+"%' or nom LIKE '%"+rech+"%' or adresse LIKE'%"+rech+"%' or type LIKE '%"+rech+"%' )");

    if ( q.exec() )
    { modal->setQuery(q);
      ui->tableView_2->setModel(modal);}

}

void sponsor::Tri_NOM_Sponsor(Ui::event_sponsor *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from sponsor order by nom");
    q.exec();
    model->setQuery(q);
    ui->tableView_2->setModel(model);
}
void sponsor::Tri_Tel(Ui::event_sponsor *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from sponsor order by tel");
    q.exec();
    model->setQuery(q);
    ui->tableView_2->setModel(model);
}
void sponsor::Tri_Adresse(Ui::event_sponsor *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from sponsor order by adresse");
    q.exec();
    model->setQuery(q);
    ui->tableView_2->setModel(model);
}

int sponsor::getValide()
{
    return valide;
}

void sponsor::setValide()
{
   valide = 1;
}

void sponsor::total(Ui:: event_sponsor *ui)
{


    QSqlQuery q;
    QSqlQueryModel * modal =new QSqlQueryModel();

  // nombre de sponsors d'evenement le plus sponsorisé :
     q.prepare("select max(count(*)) as totalEvent from entraineur e inner join sport s on e.idS=s.id group by s.nom ");



q.prepare("SELECT s.nom as Plus_Sponsorise FROM event s inner join sponsor e on s.id=e.idE GROUP BY s.nom HAVING COUNT(*) > 1 ");



q.exec();
    modal->setQuery(q);
    ui->tableView_3->setModel(modal);


}
