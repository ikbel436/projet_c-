#ifndef ETUDIANT_H
#define ETUDIANT_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

class Etudiant
{
    QString nom,prenom;
    int id;
public:
    //constructeurs
    Etudiant(){}
    Etudiant(int,QString,QString);

    //Getters
    QString getNom(){return nom;}
    QString getPrenom(){return prenom;}
    int getID(){return id;}

    //Setters
    void setNom(QString n){nom=n;}
    void setPrenom(QString p){prenom=p;}
    void setID(int id){this->id=id;}

    //Fonctionnalités de Base relatives à l'entite etudiant
    bool ajouter();
    QSqlQueryModel *afficher();
    bool supprimer(int);

};

#endif // ETUDIANT_H
