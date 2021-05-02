#include "produit.h"
#include<QMessageBox>
#include<QPrinter>
#include<QTextDocument>
#include<iostream>
#include <QSqlQuery>
produit::produit()
{
id=0;
nom="";
prix=0;
  nombre=0;
  categorie="";
}

produit::produit(int id,QString nom,int nombre ,float prix,QString categorie)
{
    this->id=id;
    this->nom=nom;
    this->nombre=nombre;
    this->prix=prix;
    this->categorie=categorie ;
}
bool produit::ajouterProduit(QString &mag)
{
    QSqlQuery qry ;
    qry.prepare("SELECT * FROM PRODUIT  where NOM=:nom");
    qry.bindValue(":nom",nom);
        qry.exec();
       int exist=0 ;
            while (qry.next())

            {

                  exist=1 ;
                  QMessageBox::critical(nullptr,QObject::tr("Ajouter un produit"),
                                                   QObject::tr("le nom du  produit existe deja.\n"
                                                               "Click Cancel to exit ."),QMessageBox::Cancel);
                  return 0 ;
            }
}

int produit::recupererID(QString nom)
{  QSqlQuery query;
    int id=0;
    query.prepare("select * from produits where nom='"+nom+"'");
    if(query.exec())
     {
        if(query.first())
        {id=query.value(0).toInt();

     }}
    return id;


}
QList<produit> produit::afficherRole()
{
    QList<produit> f;
    QSqlQuery query;
        query.prepare("select id,nom from produits ");
        if(query.exec())
         {while(query.next())
            {
                produit F;
          F.setId(query.value(0).toInt());
          F.setNom(query.value(1).toString());
          f.append(F);

         }}
        return f;

}
produit produit::afficherR(int id)
{
    QSqlQuery query;
      produit F;
       QString res = QString::number(id);
      query.prepare("select * from produits where id ='"+res+"'");
      if(query.exec())
       {if(query.first())
        F.setId(query.value(0).toInt());
       F.setNom(query.value(1).toString());
       F.setNombre(query.value(2).toInt());
        F.setprix(query.value(3).toInt());
        F.setcategorie(query.value(4).toString());

       }


}

