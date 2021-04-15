#ifndef EVENT_H
#define EVENT_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCore/qglobal.h>
#include <QDate>
#include "event_sponsor.h"
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

void afficher(Ui::event_sponsor *ui);
bool supprimer(Ui::event_sponsor *ui);
void Tri_PRIX(Ui::event_sponsor *ui) ;
 void Tri_NOM(Ui::event_sponsor *ui);
 void Tri_DATE(Ui::event_sponsor *ui);
 bool Supprimer(Ui::event_sponsor *ui);
 bool modifier (Ui::event_sponsor *ui);
void Recherche(Ui::event_sponsor *ui);
void excel(Ui::event_sponsor *ui);
void pdf(Ui::event_sponsor *ui);
void on_Valider_clicked();
 int getValide();
 void setValide();
private:
    int id, prix,NB ;
    QString NOM,lieu,DAT;
    int valide=0;
};

#endif // EVENT_H
