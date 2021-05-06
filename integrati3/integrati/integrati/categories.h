#ifndef CATEGORIES_H
#define CATEGORIES_H



#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCore/qglobal.h>
#include <QDate>
#include "integration.h"
class categories
{
public:
   categories();
     categories(int,QString,QString);
    int getID();
    QString getNOM();
    QString getDESCRIPTION();


    void setID(int);
    void setNOM(QString);
    void setDESCRIPTION(QString);

    bool ajouter();

void afficher(Ui::integration *ui);
bool supprimer(Ui::integration *ui);
void Tri_ID(Ui::integration *ui) ;
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
 int recupererID(QString nom);
 QList<categories> afficherRole();
 categories afficherR(int id);
private:
    int id ;
    QString nom,description;
    int valide=0;
};
#endif // CATEGORIES_H
