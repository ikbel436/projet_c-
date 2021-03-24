#include "entraineur.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
entraineur::entraineur()
{
id=0;
nom="";
prenom="";
dat=0;
email="";
tel=0;
}
entraineur::entraineur(int id,QString nom, QString prenom , int dat, QString email, int tel)
{
    this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->dat=dat;
    this->email=email;
    this->tel=tel;
}

int entraineur:: getid()
{
    return id;
}

QString entraineur::getnom(){return nom;}
QString entraineur::getprenom(){return prenom;}
int entraineur::getdate(){return dat;}
QString entraineur::getemail(){return email;}
int entraineur::gettel(){return tel;}


void entraineur::setid(int id)
{this->id=id;}

void entraineur::setnom(QString nom)
{this->nom=nom;}

void entraineur::setprenom(QString prenom)
{this->prenom=prenom;}

void entraineur::setdate(int dat)
{this->dat=dat;}

void entraineur::setemail(QString email)
{this->email=email;}

void entraineur::settel(int tel)
{this->tel=tel;}

bool entraineur::ajouter(){
    QSqlQuery query;
    QString id_string= QString::number(id);
    QString tel_string= QString::number(tel);
    QString dat_string= QString::number(dat);
          query.prepare("INSERT INTO entraineur (id, nom, prenom , dat , email, tel) "
                        "VALUES (:id, :nom, :prenom, :dat , :email, :tel)");
          query.bindValue(":id", id_string);
          query.bindValue(":nom", nom);
          query.bindValue(":prenom", prenom);
          query.bindValue(":dat", dat_string);
          query.bindValue(":email", email);
          query.bindValue(":tel", tel_string);

         return query.exec();

                        }

QSqlQueryModel * entraineur::afficher(){
    QSqlQueryModel * model=new QSqlQueryModel();
         model->setQuery("select * from entraineur");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("dat"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("email"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("tel"));



    return model;

}
bool entraineur::supprimer(int id){
    QSqlQuery query;
          query.prepare("Delete from entraineur where id=:id ");
          query.bindValue(0, id);

         return query.exec();
}






