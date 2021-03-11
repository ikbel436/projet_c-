#include "event.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
EVENT::EVENT()
{
    id=0;
    NOM="";
    lieu="";
     DAT=0;
    NB=0;
    prix=0;


}


EVENT::EVENT(int id ,QString NOM ,QString lieu,int DAT,int NB,int prix){
    this->id=id;
    this->NOM=NOM;
    this->lieu=lieu;
    this->DAT=DAT;
    this->NB=NB;
    this->prix=prix;

}

int EVENT::getid(){
return id;
}
QString EVENT::getNOM(){
return NOM;
}
QString EVENT::getlieu(){
return lieu;
}
int EVENT::getDAT(){
return DAT;
}
int EVENT::getNB(){
return NB;
}
int EVENT::getPRIX(){
return prix;
}

void EVENT::setid(int id ){
this->id=id;
}
void EVENT::setNOM(QString NOM ){
this->NOM=NOM;
}

void EVENT::setlieu(QString lieu){
this->lieu=lieu;
}

void EVENT::setDAT(int DAT){
this->DAT=DAT;
}
void EVENT::setNB(int NB){
this->NB=NB;
}
void EVENT::setPRIX(int prix){
this->prix=prix;
}


bool EVENT::ajouter(){
    QSqlQuery query;
    QString id_string= QString::number(id);
    QString dat_string= QString::number(DAT);
     QString nb_string= QString::number(NB);
       QString prix_string= QString::number(prix);
          query.prepare("INSERT INTO EVENT (id, NOM, lieu , DAT,NB,prix) "
                        "VALUES (:id, :NOM, :lieu, :DAT ,:NB, :prix)");
          query.bindValue(":id", id_string);
          query.bindValue(":NOM", NOM);
          query.bindValue(":lieu",lieu);
          query.bindValue(":DAT",dat_string);
           query.bindValue(":NB",nb_string);
          query.bindValue(":prix",prix_string);

         return query.exec();

                        }

QSqlQueryModel * EVENT::afficher(){
    QSqlQueryModel * model=new QSqlQueryModel();
         model->setQuery("select * from EVENT");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("lieu"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("DAT"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("NB"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("prix"));



    return model;

}
bool EVENT::supprimer(int id){
    QSqlQuery query;
          query.prepare("Delete from EVENT where id=:id ");
          query.bindValue(0, id);

         return query.exec();
}

