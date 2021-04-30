#ifndef SPORT_H
#define SPORT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCore/qglobal.h>
#include <QDate>
#include "integration.h"

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

void afficher_sport(Ui:: integration *ui);
bool supprimer_sport(Ui:: integration *ui);
void Tri_DAT(Ui:: integration *ui) ;
 void Tri_NOM(Ui:: integration *ui);
 void Tri_NB(Ui:: integration *ui);
 bool Supprimer_sport(Ui:: integration *ui);
 bool modifier_sport (Ui:: integration *ui);
void Recherche_sport(Ui:: integration *ui);
void image();
    int recupererID(QString nom);
    QList<sport> afficherRole();
    sport afficherR(int id);
    void calculer(Ui::integration *ui);



void on_Valider_clicked();
 int getValide();
 void setValide();
private:
    int id,nb ;
    QString nom,dat;
    int valide=0;
};

#endif // SPORT_H
