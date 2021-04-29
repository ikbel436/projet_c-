#include "connexion.h"

connexion::connexion()
{

}

bool connexion::createconnect()
{
    bool test =false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("dhiaabd");
    db.setUserName("dhiaa");
    db.setPassword("dhiaa");
    if(db.open())
    {
        test=true;
    }
    return test;
}
