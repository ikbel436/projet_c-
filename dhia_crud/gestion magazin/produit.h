#ifndef PRODUIT_H
#define PRODUIT_H
#include "dialog.h"
#include "ui_dialog.h"
#include<QString>
#include<QSqlDatabase>
#include<QSqlError>
#include<QSqlQuery>
#include<QFileInfo>
#include<QMessageBox>
#include<QSqlQueryModel>
#include<QDebug>
#include<QFileDialog>
#include<QDialog>


class produit
{
private:
    QString id,nom,nombre,prix,marque,adresse;
public:
    produit(QString,QString,QString,QString,QString,QString);
    produit();

    void setId(QString n){id=n;}
           void setNom(QString n){nom=n;}
           void setNombre(QString n){nombre=n;}
            void setprix(QString n){prix=n;}
             void setmarque(QString n){marque=n;}
              void setadresse(QString n){adresse=n;}


              QString getId(){return id;}
                     QString getNom(){return nom;}
                     QString getNombre(){return nombre;}
                     QString getPrix(){return prix;}
                     QString getMarque(){return marque;}
                     QString getAdresse(){return adresse;}

                     bool ajouterProduit();
                     void afficherProduit(Ui::Dialog *ui);
                       bool modifierProduit();
                       void selectionnerProduit(Ui::Dialog *ui,const QModelIndex &index);
                       bool supprimerproduit(Ui::Dialog *ui);
                       void creationpdf();
                       void TRI1(Ui::Dialog *ui);
                       void TRI2(Ui::Dialog *ui);
                       void recherche(Ui::Dialog *ui);




};

#endif // PRODUIT_H
