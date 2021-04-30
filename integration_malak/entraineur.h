#ifndef ENTRAINEUR_H
#define ENTRAINEUR_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCore/qglobal.h>
#include <QDate>
#include "integration.h"
class entraineur
{
public:
   entraineur();
     entraineur(int,QString,QString,QString,QString,int,int);
    int getID();
    QString getNOM();
    QString getprenom();
    QString getDAT();
    QString getemail();
    int gettel();
    int getidS();

    void setID(int);
    void setNOM(QString);
    void setprenom(QString);
    void setDAT(QString);
    void setemail(QString);
    void settel(int);
    void setidS(int);
    bool ajouter();

void afficher(Ui::integration *ui);
bool supprimer(Ui:: integration *ui);
void Tri_prenom(Ui:: integration *ui) ;
 void Tri_NOM(Ui:: integration *ui);
 void Tri_DATE(Ui:: integration *ui);
 bool Supprimer(Ui:: integration *ui);
 bool modifier (Ui:: integration *ui);
void Recherche(Ui:: integration *ui);
void pdf(Ui:: integration *ui);
void on_Valider_clicked();
 int getValide();
 void setValide();
 void test(Ui::integration *ui);
private:
    int id,tel,idS ;
    QString NOM,prenom,email,dat;
    int valide=0;
};

#endif // ENTRAINEUR_H

