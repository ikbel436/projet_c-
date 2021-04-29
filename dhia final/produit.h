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
    QString nom,categorie;
    int id,nombre ;
    float prix ;

public:
    produit(int,QString,int,float,QString);
    produit();

    void setId(int n){id=n;}
           void setNom(QString n){nom=n;}
           void setNombre(int n){nombre=n;}
            void setprix(float n){prix=n;}
              void setcategorie(QString n){categorie=n;}


              int getId(){return id;}
                     QString getNom(){return nom;}
                     int getNombre(){return nombre;}
                 float getPrix(){return prix;}
                     QString getcategorie(){return categorie;}

                     bool ajouterProduit(QString &mag);
                     void afficherProduit(Ui::Dialog *ui);
                       bool modifierProduit( const QString &mag);
                       void selectionnerProduit(Ui::Dialog *ui,int idp);
                       bool supprimerproduit(Ui::Dialog *ui);
                       bool supprimerproduits(Ui::Dialog *ui) ;
                       void creationpdf();
                       void TRI1(Ui::Dialog *ui);
                       void TRI2(Ui::Dialog *ui);
                       void recherche(Ui::Dialog *ui);
                        int nombre_produit(QString cat);

                        QSqlQueryModel* afficherHistorique(Ui::Dialog *ui);
                        void addToHistory(QString action, QString type, QString id);




};

#endif // PRODUIT_H
