#include "sponsor.h"

sponsor::sponsor()
{
id=0;
type="";
adresse="";
email="";
tel=0;
nom="";
}
sponsor::sponsor(int id,QString type,QString adresse,QString email,int tel,QString nom)
{
   this->id=id;
    this->type=type;
    this->adresse=adresse;
    this->email=email;
    this->tel=tel;
    this->nom=nom;
}

int sponsor::getid()
{
    return id;
}


QString sponsor::gettype()
{
    return type;
}

QString sponsor::getadresse()
{
    return adresse;
}
QString sponsor::getemail()
{
    return email;
}
int sponsor::gettel()
{
    return tel;
}
QString sponsor::getnom()
{
    return nom;
}

void sponsor::setid(int id){
    this->id=id;
}

void sponsor::settype(QString type){
    this->type=type;
}
void sponsor::setadresse(QString adresse){
    this->adresse=adresse;
}
void sponsor::setemail(QString email){
    this->email=email;
}
void sponsor::settel(int tel){
    this->tel=tel;
}
void sponsor::setnom(QString nom){
    this->nom=nom;
}


bool sponsor::ajouter(){
    QSqlQuery query;
    QString id_string= QString::number(id);
    QString tel_string= QString::number(tel);




          query.prepare("INSERT INTO sponsor (id, type, adresse, email, tel, nom) "
                        "VALUES (:id, :type, :adresse, :email , :tel, :nom)");
          query.bindValue(":id", id_string);
          query.bindValue(":type", type);
          query.bindValue(":adresse", adresse);
          query.bindValue(":email", email);
          query.bindValue(":tel", tel_string);
          query.bindValue(":nom", nom);


         return query.exec();

                        }
QSqlQueryModel * sponsor::afficher(){
    QSqlQueryModel * model=new QSqlQueryModel();
         model->setQuery("select * from sponsor");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("type"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("adresse"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("email"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("tel"));
         model->setHeaderData(5, Qt::Horizontal, QObject::tr("nom"));
         return model;
}
bool sponsor::supprimer_s(int id){
    QSqlQuery query;
          query.prepare("Delete from sponsor where id=:id ");
          query.bindValue(0, id);

         return query.exec();
}
