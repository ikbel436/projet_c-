#ifndef SPORT_H
#define SPORT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCore/qglobal.h>
#include <QDate>
#include "sport_entraineur.h"

class sport
{
public:
    sport();
    sport(int,QString,QString,int);

    int getID();
    QString getNom();
    QString getdat();
    int getnb();


    void setId(int);
    void setNom(QString);
    void setdat(QString);
    void setnb(int);
    bool ajouter();

void afficher_sport(Ui:: sport_entraineur *ui);
bool supprimer_sport(Ui:: sport_entraineur *ui);
void Tri_DAT(Ui:: sport_entraineur *ui) ;
 void Tri_NOM(Ui:: sport_entraineur *ui);
 void Tri_NB(Ui:: sport_entraineur *ui);
 bool Supprimer_sport(Ui:: sport_entraineur *ui);
 bool modifier_sport (Ui:: sport_entraineur *ui);
void Recherche_sport(Ui:: sport_entraineur *ui);
void image();
int recupererID(QString nom);
QList<sport> afficherRole();
sport afficherR(int id);
void calculer(Ui:: sport_entraineur *ui);

void on_Valider_clicked();
 int getValide();
 void setValide();
private:
    int id,nb ;
    QString nom,dat;
    int valide=0;
};

#endif // SPORT_H
