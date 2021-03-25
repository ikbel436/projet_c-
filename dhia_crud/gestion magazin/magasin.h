#ifndef MAGASIN_H
#define MAGASIN_H
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

class magasin
{   
private:
    int id , bloc ;
    QString nom,adresse ;
public:
     magasin();
   magasin(int ,QString,QString,int);

    void setId(int  n){id=n;}
           void setNom(QString n){nom=n;}
           void setAdresse(QString n){adresse=n;}
            void setBloc(int  n){bloc=n;}



              int getId(){return id;}
                     QString getNom(){return nom;}
                    int getBloc(){return bloc;}

                     QString getAdresse(){return adresse;}

                     bool ajoutermagasin();
                     void affichermagasin(Ui::Dialog *ui);
                       bool modifiermagasin();
                       void selectionnermagasin(Ui::Dialog *ui,const QModelIndex &index);
                       bool supprimermagasin(Ui::Dialog *ui);
                       void creationpdf();
                       void TRI1(Ui::Dialog *ui);
                       void TRI2(Ui::Dialog *ui);
                       void recherche(Ui::Dialog *ui);




};

#endif // MAGASIN_H
