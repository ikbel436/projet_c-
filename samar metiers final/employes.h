#ifndef EMPLOYES_H
#define EMPLOYES_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCore/qglobal.h>
#include <QDate>
#include "empfou.h"
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

    void setIDE(int);
    void setNOM(QString);
    void setPRENOM(QString);
    void setEMAIL(QString);
    void setTEL(int);
    void setROLE(QString);
    void setSALAIRE(int);
    bool ajouter();

void afficher(Ui::empfou *ui);
bool supprimer(Ui::empfou *ui);
void Tri_SALAIRE(Ui::empfou *ui) ;
void Tri_NOM(Ui::empfou *ui);
void Tri_PRENOM(Ui::empfou *ui);
bool Supprimer(Ui::empfou *ui);
bool modifier (Ui::empfou *ui);
void Recherche(Ui::empfou *ui);
void excel(Ui::empfou *ui);
//void pdf(Ui::empfou *ui);
void on_Valider_clicked();
 int getValide();
 void setValide();
private:
    int IDE, TEL,SALAIRE;
    QString NOM,PRENOM,EMAIL,ROLE;
    int valide=0;
};

#endif // EMPLOYES_H
