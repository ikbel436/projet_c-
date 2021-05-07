

#include "fournisseurs.h"
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QTextDocument>
#include <QMessageBox>
#include "integration.h"
#include "ui_integration.h"
#include<QTextDocument>

FOURNISSEURS::FOURNISSEURS()
{
  IDF=0;
  NOM="";
  PRENOM="";
  EMAIL="";
  TEL=0;
  IDP=0;
}

FOURNISSEURS::FOURNISSEURS(int IDF, QString NOM, QString PRENOM, QString EMAIL, int TEL, int IDP)
{
this->IDF=IDF;
    this->NOM=NOM;
    this->PRENOM=PRENOM;
    this->EMAIL=EMAIL;
    this->TEL=TEL;
    this->IDP=IDP;
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
int FOURNISSEURS::getIDP()
{return IDP;}

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
void FOURNISSEURS::setIDP(int IDP)
{this->IDP=IDP;}



bool FOURNISSEURS::ajouter(){
    QSqlQuery query;
    QString IDF_string= QString::number(IDF);
     QString IDP_string= QString::number(IDP);

       QString TEL_string= QString::number(TEL);
          query.prepare("INSERT INTO FOURNISSEURS ( IDF, NOM, PRENOM,EMAIL,TEL,IDP) "
                        "VALUES (:IDF, :NOM, :PRENOM,:EMAIL, :TEL, :IDP)");
          query.bindValue(":IDF", IDF_string);
          query.bindValue(":NOM", NOM);
          query.bindValue(":PRENOM",PRENOM);
          query.bindValue(":EMAIL",EMAIL);
          query.bindValue(":TEL",TEL_string);
          query.bindValue(":IDP",IDP_string);

         return query.exec();
}

void FOURNISSEURS::afficher_FOURNISSEURS(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    q.prepare("select p.NOM as PRODUIT, f.IDF, f.NOM, f.PRENOM, f.EMAIL, f.TEL from FOURNISSEURS f inner join produit p on f.IDP=p.ID");
    q.exec();
    modal->setQuery(q);
    ui->tableView_four->setModel(modal);
}



bool FOURNISSEURS::Supprimer_FOURNISSEURS(Ui::integration *ui)
{
    QSqlQuery q;
    QString IDF = ui->tableView_four->model()->data(ui->tableView_four->model()->index(ui->tableView_four->selectionModel()->currentIndex().row(),1)).toString();
    q.prepare("DELETE FROM FOURNISSEURS WHERE IDF ='"+IDF+"'");
    q.exec();
}

bool FOURNISSEURS::modifier_FOURNISSEURS()
{

        QSqlQuery q;
        QString IDF_string=QString::number(IDF);
        QString TEL_string=QString::number(TEL);
        QString IDP_string=QString::number(IDP);
        QSqlQuery qry ;
        qry.prepare("update FOURNISSEURS set NOM='"+NOM+"',PRENOM='"+PRENOM+"',EMAIL='"+EMAIL+"',TEL='"+TEL+"',IDP='"+IDP+"' where IDF='"+IDF+"' ");
        qry.bindValue(":IDF",IDF);
        qry.bindValue(":NOM",NOM);
        qry.bindValue(":PRENOM",PRENOM);
        qry.bindValue(":EMAIL",EMAIL);
        qry.bindValue(":TEL",TEL);
        qry.bindValue(":IDP",IDP);



                q.prepare("UPDATE FOURNISSEURS set IDF=:IDF,NOM=:NOM,PRENOM=:PRENOM,EMAIL=:EMAIL,TEL=:TEL,IDP=IDP  where IDF=:IDF");
                q.bindValue(":IDF",IDF_string);
                q.bindValue(":NOM",NOM);
                q.bindValue(":PRENOM",PRENOM);
                q.bindValue(":EMAIL",EMAIL);
                q.bindValue(":TEL",TEL_string);
                q.bindValue(":IDP",IDP_string);

                return q.exec();
    }

void FOURNISSEURS::Recherche_FOURNISSEURS(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString rech =ui->recherche_four->text();
    q.prepare("select * from FOURNISSEURS where ( TEL LIKE '%"+rech+"%' or NOM LIKE '%"+rech+"%' or PRENOM LIKE'%"+rech+"%' or EMAIL LIKE '%"+rech+"%' )");

    if ( q.exec() )
    { modal->setQuery(q);
      ui->tableView_four->setModel(modal);}

}

void FOURNISSEURS::Tri_NOM_FOURNISSEURS(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select p.NOM as PRODUIT, f.IDF, f.NOM, f.PRENOM, f.EMAIL, f.TEL from FOURNISSEURS f inner join produit p on f.IDP=p.ID order by NOM");
    q.exec();
    model->setQuery(q);
    ui->tableView_four->setModel(model);
}

void FOURNISSEURS::Tri_PRENOM_FOURNISSEURS(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select p.NOM as PRODUIT, f.IDF, f.NOM, f.PRENOM, f.EMAIL, f.TEL from FOURNISSEURS f inner join produit p on f.IDP=p.ID order by PRENOM");
    q.exec();
    model->setQuery(q);
    ui->tableView_four->setModel(model);
}
void FOURNISSEURS::Tri_TEL_FOURNISSEURS(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select p.NOM as PRODUIT, f.IDF, f.NOM, f.PRENOM, f.EMAIL, f.TEL from FOURNISSEURS f inner join produit p on f.IDP=p.ID order by TEL");
    q.exec();
    model->setQuery(q);
    ui->tableView_four->setModel(model);
}

int FOURNISSEURS::getValide()
{
    return valide;
}

void FOURNISSEURS::setValide()
{
   valide = 1;
}

int FOURNISSEURS::get_total()
{
    QSqlQuery query;
    query.prepare("SELECT count(*) as IDF FROM FOURNISSEURS ");
 int total=0;
    if(query.exec())
    {
        while (query.next())
        {
            total+=query.value(0).toInt();
        }
    }
    return total;
}

