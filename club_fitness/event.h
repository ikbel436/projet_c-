#ifndef EVENT_H
#define EVENT_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCore/qglobal.h>
#include <QDate>
#include "gestion_event.h"

#include "affichage_event.h"
class EVENT
{
public:
   EVENT();
     EVENT(int,QString,QString,QString,int,int);
    int getID();
    QString getNOM();
    QString getlieu();
   QString getDAT();
    int getNB();
    int getPRIX();

    void setID(int);
    void setNOM(QString);
    void setlieu(QString);
    void setDAT(QString);
    void setNB(int);
    void setPRIX(int);
    bool ajouter();
void afficher(Ui::affichage_event *ui);
bool supprimer(Ui::affichage_event *ui);
void Tri_PRIX(Ui::affichage_event *ui) ;
 void Tri_NOM(Ui::affichage_event *ui);
 void Tri_DATE(Ui::affichage_event *ui);
 bool Supprimer(Ui::affichage_event *ui);
 bool modifier (Ui::affichage_event *ui);
void Recherche(Ui::affichage_event *ui);
void excel(Ui::affichage_event *ui);
 int getValide();
 void setValide();
private:
    int id, prix,NB ;
    QString NOM,lieu,DAT;
    int valide=0;
};

#endif // EVENT_H
