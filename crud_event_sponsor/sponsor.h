#ifndef SPONSOR_H
#define SPONSOR_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

//id,type,adresse,email,tel,nom
class sponsor
{
public:
    sponsor();
    sponsor(int,QString,QString,QString,int,QString);
    int getid();
    QString gettype();
    QString getadresse();
    QString getemail();
    int gettel();
    QString getnom();


    void setid(int);
    void settype(QString);
    void setadresse(QString);
    void setemail(QString);
    void settel(int);
    void setnom(QString);


    bool ajouter();
        QSqlQueryModel * afficher();
       bool supprimer_s(int);

private:
        int id,tel;
        QString type,adresse,email,nom;
};

#endif // SPONSOR_H
