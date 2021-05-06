#ifndef EVENT_H
#define EVENT_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCore/qglobal.h>
#include <QDate>
#include "integration.h"
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

void afficher(Ui::integration *ui);
bool supprimer(Ui::integration *ui);
void Tri_PRIX(Ui::integration *ui) ;
 void Tri_NOM(Ui::integration *ui);
 void Tri_DATE(Ui::integration *ui);
 bool Supprimer(Ui::integration *ui);
 bool modifier (Ui::integration *ui);
void Recherche(Ui::integration *ui);
void excel(Ui::integration *ui);
void pdf(Ui::integration *ui);
void on_Valider_clicked();
 int getValide();
 void setValide();
 void valider_date(Ui::integration *ui);
 int recupererID(QString nom);
 QList<EVENT> afficherRole();
 EVENT afficherR(int id);
 void nbeventpardate(Ui::integration *ui);
 QString minprix();

void maxprix(Ui::integration *ui);
void minprix(Ui::integration *ui);
void maxnb(Ui::integration *ui);
 void minnb(Ui::integration *ui);
private:
    int id, prix,NB ;
    QString NOM,lieu,DAT;
    int valide=0;
};

#endif // EVENT_H
