#ifndef EVENT_H
#define EVENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class EVENT
{
public:
    EVENT();
     EVENT(int,QString,QString,int,int,int);
    int getid();
    QString getNOM();
    QString getlieu();
    int getDAT();
    int getNB();
    int getPRIX();

    void setid(int);
    void setNOM(QString);
    void setlieu(QString);
    void setDAT(int);
    void setNB(int);
    void setPRIX(int);


    bool ajouter();
        QSqlQueryModel * afficher();
        bool supprimer(int);
private:
    int id,prix,DAT,NB ;
    QString NOM,lieu;
};

#endif // EVENT_H




