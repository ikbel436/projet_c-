#ifndef EMPLOYES_H
#define EMPLOYES_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCore/qglobal.h>
#include <QDate>
#include "integration.h"
class EMPLOYES
{
public:
   EMPLOYES();
     EMPLOYES(int,QString,QString,QString,int,QString, int);
    int getIDE();
    QString getNOM();
    QString getPRENOM();
   QString getEMAIL();
    int getTEL();
    QString getROLE();
    int getSALAIRE();
   // QString setPHOTO();

    void setIDE(int);
    void setNOM(QString);
    void setPRENOM(QString);
    void setEMAIL(QString);
    void setTEL(int);
    void setROLE(QString);
    void setSALAIRE(int);
    bool ajouter();

void afficher(Ui::integration *ui);
bool supprimer(Ui::integration *ui);
void Tri_SALAIRE(Ui::integration *ui) ;
void Tri_NOM(Ui::integration *ui);
void Tri_PRENOM(Ui::integration *ui);
bool Supprimer(Ui::integration *ui);
bool modifier (Ui::integration *ui);
void Recherche_emp(Ui::integration *ui);
void excel(Ui::integration *ui);
//void pdf(Ui::integration *ui);
void on_Valider_clicked();
 int getValide();
 void setValide();
private:
    int IDE, TEL,SALAIRE;
    QString NOM,PRENOM,EMAIL,ROLE;
    int valide=0;
};

#endif // EMPLOYES_H
