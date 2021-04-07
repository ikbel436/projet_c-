#ifndef EMPLOYES_H
#define EMPLOYES_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCore/qglobal.h>
#include <QDate>
#include "joueur_categ.h"
class EMPLOYES
{
public:
   EMPLOYES();
    EMPLOYES(int,QString,QString,QString,int,QString,int);
    int getide();
    QString getnom();
    QString getprenom();
    QString getemail();
    int gettel();
   QString getrole();
   int getsalaire();


    void setide(int);
    void setnom(QString);
    void setprenom(QString);
    void setemail(QString);
    void settel(int);
    void setrole(QString);
    void setsalire(int);
    bool ajouter();

void afficher(Ui::joueur_categ *ui);
bool supprimer(Ui::joueur_categ *ui);
//void Tri_PRIX(Ui::joueur_categ *ui) ;
 void Tri_NOM(Ui::joueur_categ *ui);
 //void Tri_DATE(Ui::joueur_categ *ui);
 bool Supprimer(Ui::joueur_categ *ui);
 bool modifier (Ui::joueur_categ *ui);
void Recherche(Ui::joueur_categ *ui);
void excel(Ui::joueur_categ *ui);
//void pdf(Ui::joueur_categ *ui);
void on_Valider_clicked();
 int getValide();
 void setValide();
private:
    int ide,tel,salaire ;
    QString nom,prenom,role,email;
    int valide=0;
};

#endif // EMPLOYES_H
