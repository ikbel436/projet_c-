
#ifndef FOURNISSEURS_H
#define FOURNISSEURS_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCore/qglobal.h>
#include <QDate>
#include "integration.h"

class FOURNISSEURS
{
public:
    FOURNISSEURS();
    FOURNISSEURS(int, QString, QString, QString, int, int IDP);

    int getIDF();
    QString getNOM();
    QString getPRENOM();
    QString getEMAIL();
    int getTEL();
    int getIDP();

    void setIDF(int);
    void setNOM(QString);
    void setPRENOM(QString);
    void setEMAIL(QString);
    void setTEL(int);
    void setIDP(int);
    bool ajouter();
int get_total();
void afficher_FOURNISSEURS(Ui::integration *ui);
bool supprimer_FOURNISSEURS(Ui::integration *ui);
void Tri_NOM_FOURNISSEURS(Ui::integration *ui);
void Tri_TEL_FOURNISSEURS(Ui::integration *ui);
void Tri_PRENOM_FOURNISSEURS(Ui::integration *ui);
bool Supprimer_FOURNISSEURS(Ui::integration *ui);
bool modifier_FOURNISSEURS ();
void Recherche_FOURNISSEURS(Ui::integration *ui);



void on_Valider_clicked();
 int getValide();
 void setValide();
private:
    int IDF, TEL ,IDP;
    QString NOM,PRENOM,EMAIL;
    int valide=0;
};

#endif // FOURNISSEURS_H
