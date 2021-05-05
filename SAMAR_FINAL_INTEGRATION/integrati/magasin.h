#ifndef MAGASIN_H
#define MAGASIN_H
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
                       void affichermagasin(Ui::integration *ui);
                       bool modifiermagasin();
                       void selectionnermagasin(Ui::integration *ui,const QModelIndex &index);
                       bool supprimermagasin(Ui::integration *ui);
                       void creationpdf();
                       void TRI1(Ui::integration *ui);
                       void TRI2(Ui::integration *ui);
                       void recherche(Ui::integration *ui);
                       void TRI3(Ui::integration *ui);
                       void REMPLIR_COMBO(Ui::integration *ui);
                       QSqlQueryModel* afficherHistorique(Ui::integration *ui);
                       void addToHistory(QString action, QString type, QString id);




};

#endif // MAGASIN_H
