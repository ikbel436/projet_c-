#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("clubsport");//inserer le nom de la source de données ODBC
db.setUserName("system");//inserer nom de l'utilisateur
db.setPassword("191JFT3222");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
