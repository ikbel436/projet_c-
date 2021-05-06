#ifndef JOUEURS_H
#define JOUEURS_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCore/qglobal.h>
#include <QDate>
#include "integration.h"
class JOUEURS
{
public:
   JOUEURS();
     JOUEURS(int,QString,QString,QString,QString,int,int,int);
    int getID();
    QString getNOM();
    QString getPRENOM();
   QString getDAT();
    QString getEMAIL();
    int getTEL();
    int getidC();
int getidS();
    void setID(int);
    void setNOM(QString);
    void setPRENOM(QString);
    void setDAT(QString);
    void setEMAIL(QString);
    void setTEL(int);
    void setidC(int);
    void setidS(int);
    bool ajouter();

void afficher(Ui::integration *ui);
bool supprimer(Ui::integration *ui);
void Tri_ID(Ui::integration *ui) ;
 void Tri_NOM(Ui::integration *ui);
 void Tri_DATE(Ui::integration *ui);
 bool Supprimer(Ui::integration *ui);
 bool modifier (Ui::integration *ui);
void Recherche(Ui::integration *ui);
void excel(Ui::integration *ui);
void pdf(Ui::integration *ui);
void Recherche1(Ui::integration *ui);
bool modifierb();
void on_Valider_clicked();
 int getValide();
 void setValide();
private:
    int id,tel,idC,idS ;
    QString nom,prenom,date_n,email;
    int valide=0;
};

#endif // JOUEURS_H
