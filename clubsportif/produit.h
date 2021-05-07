#ifndef PRODUIT_H
#define PRODUIT_H
#include "integration.h"
#include "ui_integration.h"
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
                     void afficherProduit(Ui::integration *ui);
                       bool modifierProduit( const QString &mag);
                       void selectionnerProduit(Ui::integration *ui,int idp);
                       bool supprimerproduit(Ui::integration *ui);
                       bool supprimerproduits(Ui::integration *ui) ;
                       void creationpdf();
                       void TRI1(Ui::integration *ui);
                       void TRI2(Ui::integration *ui);
                       void recherche(Ui::integration *ui);
                        int nombre_produit(QString cat);
// partie historique
                        QSqlQueryModel* afficherHistorique(Ui::integration *ui);
                        void addToHistory(QString action, QString type, QString id);
                        bool supprimerhistory(QString date, QString type ,QString mp) ;

                        //samar

                        int recupererID(QString nom);
                                               QList<produit> afficherRole();
                                               produit afficherR(int id);



};

#endif // PRODUIT_H

