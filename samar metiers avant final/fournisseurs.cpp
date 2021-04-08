#include "fournisseurs.h"
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QTextDocument>
#include <QMessageBox>
#include "empfou.h"
#include "ui_empfou.h"
#include<QTextDocument>

FOURNISSEURS::FOURNISSEURS()
{
  IDF=0;
  NOM="";
  PRENOM="";
  EMAIL="";
  TEL=0;
}

FOURNISSEURS::FOURNISSEURS(int IDF,QString NOM, QString PRENOM,QString EMAIL,int TEL)
{
this->IDF=IDF;
    this->NOM=NOM;
    this->PRENOM=PRENOM;
    this->EMAIL=EMAIL;
    this->TEL=TEL;
}

int FOURNISSEURS::getIDF()
{
    return IDF;
}

QString FOURNISSEURS::getNOM()
{return NOM;}
QString FOURNISSEURS::getPRENOM()
{return PRENOM;}
QString FOURNISSEURS::getEMAIL()
{return EMAIL;}
int FOURNISSEURS::getTEL()
{return TEL;}


void FOURNISSEURS::setIDF(int IDF)
{this->IDF=IDF;}
void FOURNISSEURS::setNOM(QString NOM)
{this->NOM=NOM;}
void FOURNISSEURS::setPRENOM(QString PRENOM)
{this->PRENOM=PRENOM;}

void FOURNISSEURS::setEMAIL(QString EMAIL)
{this->EMAIL=EMAIL;}
void FOURNISSEURS::setTEL(int TEL)
{this->TEL=TEL;}



bool FOURNISSEURS::ajouter(){
    QSqlQuery query;
    QString IDF_string= QString::number(IDF);

       QString TEL_string= QString::number(TEL);
          query.prepare("INSERT INTO FOURNISSEURS ( IDF, NOM, PRENOM,EMAIL,TEL) "
                        "VALUES (:IDF, :NOM, :PRENOM,:EMAIL, :TEL)");
          query.bindValue(":IDF", IDF_string);
          query.bindValue(":NOM", NOM);
          query.bindValue(":PRENOM",PRENOM);
          query.bindValue(":EMAIL",EMAIL);
          query.bindValue(":TEL",TEL_string);

         return query.exec();
}

void FOURNISSEURS::afficher_FOURNISSEURS(Ui::empfou *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    q.prepare("select * from FOURNISSEURS");
    q.exec();
    modal->setQuery(q);
    ui->tableView_2->setModel(modal);
}



bool FOURNISSEURS::Supprimer_FOURNISSEURS(Ui::empfou *ui)
{
    QSqlQuery q;
    QString IDF = ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),0)).toString();
    q.prepare("DELETE FROM FOURNISSEURS WHERE IDF ='"+IDF+"'");
    q.exec();
}

bool FOURNISSEURS::modifier_FOURNISSEURS(Ui::empfou *ui)
{

        QSqlQuery q;
        QString IDF_string=QString::number(IDF);
        QString TEL_string=QString::number(TEL);
        QSqlQuery qry ;
        qry.prepare("update FOURNISSEURS set NOM='"+NOM+"',PRENOM='"+PRENOM+"',EMAIL='"+EMAIL+"',TEL='"+TEL+"' where IDF='"+IDF+"' ");
        qry.bindValue(":IDF",IDF);
        qry.bindValue(":NOM",NOM);
        qry.bindValue(":PRENOM",PRENOM);
        qry.bindValue(":EMAIL",EMAIL);
        qry.bindValue(":TEL",TEL);




                q.prepare("UPDATE FOURNISSEURS set IDF=:IDF,NOM=:NOM,PRENOM=:PRENOM,EMAIL=:EMAIL,TEL=:TEL  where IDF=:IDF");
                q.bindValue(":IDF",IDF_string);
                q.bindValue(":NOM",NOM);
                q.bindValue(":PRENOM",PRENOM);
                q.bindValue(":EMAIL",EMAIL);
                q.bindValue(":TEL",TEL_string);

                return q.exec();
    }

void FOURNISSEURS::Recherche_FOURNISSEURS(Ui::empfou *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString rech =ui->recherche_2->text();
    q.prepare("select * from FOURNISSEURS where ( TEL LIKE '%"+rech+"%' or NOM LIKE '%"+rech+"%' or adresse LIKE'%"+rech+"%' or PRENOM LIKE '%"+rech+"%' )");

    if ( q.exec() )
    { modal->setQuery(q);
      ui->tableView_2->setModel(modal);}

}

void FOURNISSEURS::Tri_NOM_FOURNISSEURS(Ui::empfou *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from FOURNISSEURS order by NOM");
    q.exec();
    model->setQuery(q);
    ui->tableView_2->setModel(model);
}
void FOURNISSEURS::Tri_TEL_FOURNISSEURS(Ui::empfou *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from FOURNISSEURS order by TEL");
    q.exec();
    model->setQuery(q);
    ui->tableView_2->setModel(model);
}
void FOURNISSEURS::Tri_PRENOM_FOURNISSEURS(Ui::empfou *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from FOURNISSEURS order by PRENOM");
    q.exec();
    model->setQuery(q);
    ui->tableView_2->setModel(model);
}

int FOURNISSEURS::getValide()
{
    return valide;
}

void FOURNISSEURS::setValide()
{
   valide = 1;
}
