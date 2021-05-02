#ifndef CATEGORIES_H
#define CATEGORIES_H



#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCore/qglobal.h>
#include <QDate>
#include "joueur_categ.h"
class categories
{
public:
   categories();
     categories(int,QString,QString);
    int getID();
    QString getNOM();
    QString getDESCRIPTION();


    void setID(int);
    void setNOM(QString);
    void setDESCRIPTION(QString);

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
void on_Valider_clicked();
 int getValide();
 void setValide();
 int recupererID(QString nom);
 QList<categories> afficherRole();
 categories afficherR(int id);
private:
    int id ;
    QString nom,description;
    int valide=0;
};
#endif // CATEGORIES_H
