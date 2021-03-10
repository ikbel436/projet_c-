#include "etudiant.h"
#include <QSqlQuery>
Etudiant::Etudiant(int id, QString nom,QString prenom)
{
this->id=id;
    this->nom=nom;
    this->prenom=prenom;
}

bool Etudiant::ajouter()
{

QSqlQuery query;
QString res = QString::number(id);

// prepare() prend la requete en parametre pour la preparer a l'execution

    query.prepare("insert into etudiant(id,nom,prenom)" "values(:id,:nom,:prenom)");

    // Creation des variables liées
    query.bindValue(":id",res);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);

    return query.exec(); // exec() envoie la requete a executer
}

QSqlQueryModel * Etudiant::afficher()
{
QSqlQueryModel * model=new QSqlQueryModel();
model->setQuery("select * from Etudiant");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("Prenom"));


    return model ;
}

bool Etudiant::supprimer(int id)
{

    QSqlQuery query;
    QString res=QString::number(id);
    query.prepare("Delete from Etudiant where ID:=id");
    query.bindValue(":id",res);
    return query.exec();
}
