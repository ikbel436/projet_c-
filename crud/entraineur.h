#ifndef ENTRAINEUR_H
#define ENTRAINEUR_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class entraineur
{
public:
    entraineur();
    entraineur(int,QString,QString,int,QString,int);
    int getid();
    QString getnom();
    QString getprenom();
    int getdate();
    QString getemail();
    int gettel();

    void setid(int);
    void setnom(QString);
    void setprenom(QString);
    void setdate(int);
    void setemail(QString);
    void settel(int);

    bool ajouter();
        QSqlQueryModel * afficher();
        bool supprimer(int);
private:
        int id,dat,tel;
        QString nom,prenom,email;

};

#endif // ENTRAINEUR_H
