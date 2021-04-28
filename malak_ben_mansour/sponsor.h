#ifndef SPONSOR_H
#define SPONSOR_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCore/qglobal.h>
#include <QDate>
#include "event_sponsor.h"

class sponsor
{
public:
    sponsor();
    sponsor(int,QString,QString,QString,QString,int,int);

    int getID();
    QString getNom();
    QString getType();
    QString getAdresse();
    QString getEmail();
    int getTel();
    int getidE();

    void setId(int);
    void setNom(QString);
    void setType(QString);
    void setAdresse(QString);
    void setEmail(QString);
    void setTel(int);
    void setidE(int);
    bool ajouter();

void afficher_sponsor(Ui::event_sponsor *ui);
bool supprimer_sponsor(Ui::event_sponsor *ui);
void Tri_Adresse(Ui::event_sponsor *ui) ;
 void Tri_NOM_Sponsor(Ui::event_sponsor *ui);
 void Tri_Tel(Ui::event_sponsor *ui);
 bool Supprimer_sponsor(Ui::event_sponsor *ui);
 bool modifier_sponsor (Ui::event_sponsor *ui);
void Recherche_sponsor(Ui::event_sponsor *ui);



void on_Valider_clicked();
 int getValide();
 void setValide();

 void total(Ui:: event_sponsor *ui);
private:
    int id, tel,idE ;
    QString nom,type,adresse,email;
    int valide=0;
};

#endif // SPONSOR_H
