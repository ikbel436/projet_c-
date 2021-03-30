#ifndef ENTRAINEUR_H
#define ENTRAINEUR_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCore/qglobal.h>
#include <QDate>
#include "sport_entraineur.h"
class entraineur
{
public:
   entraineur();
     entraineur(int,QString,QString,QString,QString,int);
    int getID();
    QString getNOM();
    QString getprenom();
    QString getDAT();
    QString getemail();
    int gettel();

    void setID(int);
    void setNOM(QString);
    void setprenom(QString);
    void setDAT(QString);
    void setemail(QString);
    void settel(int);
    bool ajouter();

void afficher(Ui::sport_entraineur *ui);
bool supprimer(Ui:: sport_entraineur *ui);
void Tri_prenom(Ui:: sport_entraineur *ui) ;
 void Tri_NOM(Ui:: sport_entraineur *ui);
 void Tri_DATE(Ui:: sport_entraineur *ui);
 bool Supprimer(Ui:: sport_entraineur *ui);
 bool modifier (Ui:: sport_entraineur *ui);
void Recherche(Ui:: sport_entraineur *ui);
void pdf(Ui:: sport_entraineur *ui);
void on_Valider_clicked();
 int getValide();
 void setValide();
private:
    int id,tel ;
    QString NOM,prenom,email,dat;
    int valide=0;
};

#endif // ENTRAINEUR_H

