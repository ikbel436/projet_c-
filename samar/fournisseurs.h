#ifndef CATEGORIES_H
#define CATEGORIES_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCore/qglobal.h>
#include <QDate>
#include "joueur_categ.h"
class Fournisseurs
{
public:
   Fournisseurs();
     Fournisseurs(int,QString,QString,QString,int);
    int getidf();
    QString getnom();
    QString getprenom();
    QString getemail();
    int gettel();

    void setidf(int);
    void setnom(QString);
    void setprenom(QString);
    void setemail(QString);
    void settel(int);

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
    int idf,tel ;
    QString nom,prenom,email;
    int valide=0;
};
#endif // CATEGORIES_H
