#ifndef JOUEURS_H
#define JOUEURS_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCore/qglobal.h>
#include <QDate>
#include "joueur_categ.h"
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

void afficher(Ui::joueur_categ *ui);
bool supprimer(Ui::joueur_categ *ui);
void Tri_ID(Ui::joueur_categ *ui) ;
 void Tri_NOM(Ui::joueur_categ *ui);
 void Tri_DATE(Ui::joueur_categ *ui);
 bool Supprimer(Ui::joueur_categ *ui);
 bool modifier (Ui::joueur_categ *ui);
void Recherche(Ui::joueur_categ *ui);
void excel(Ui::joueur_categ *ui);
void pdf(Ui::joueur_categ *ui);
void Recherche1(Ui::joueur_categ *ui);
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
