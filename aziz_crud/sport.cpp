#include "sport.h"
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QTextDocument>
#include <QMessageBox>

#include "sport_entraineur.h"
#include "ui_sport_entraineur.h"
#include<QTextDocument>

sport::sport()
{
  id=0;
  nom="";
  dat="";
  nb=0;
}

sport::sport(int id,QString nom, QString dat ,int nb)
{
this->id=id;
    this->nom=nom;
    this->dat=dat;
    this->nb=nb;
}

int sport::getID()
{
    return id;
}
QString sport::getNom()
{return nom;}
QString sport::getdat()
{return dat;}
int sport::getnb()
{return nb;}


void sport::setId(int id)
{this->id=id;}
void sport::setNom(QString nom)
{this->nom=nom;}
void sport::setdat(QString dat)
{this->dat=dat;}
void sport::setnb(int nb)
{this->nb=nb;}



bool sport::ajouter(){
    QSqlQuery query;
    QString id_string= QString::number(id);

       QString nb_string= QString::number(nb);
          query.prepare("INSERT INTO sport ( id, nom, dat , nb) "
                        "VALUES (:id, :nom, :dat, :nb )");
          query.bindValue(":id", id_string);
          query.bindValue(":nom", nom);
          query.bindValue(":dat",dat);
          query.bindValue(":nb", nb_string);


         return query.exec();
}

void sport::afficher_sport(Ui::sport_entraineur *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    q.prepare("select * from sport");
    q.exec();
    modal->setQuery(q);
    ui->tableView->setModel(modal);
}



bool sport::Supprimer_sport(Ui::sport_entraineur *ui)
{
    QSqlQuery q;
    QString id = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString();
    q.prepare("DELETE FROM sport WHERE id ='"+id+"'");
    q.exec();
}

bool sport::modifier_sport(Ui::sport_entraineur *ui)
{

        QSqlQuery q;

        QString id=ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString();

        q.prepare("UPDATE sport set nom:=nom_modif,dat:=dat_modif, nb:=nb_modif where id='"+id+"'");

        q.bindValue(":nom_modif",ui->nom_modif->text());
        q.bindValue(":dat_modif",ui->date_modif->text());

        q.bindValue(":nb_modif",ui->nb_modif->text());

        return q.exec();

    }

void sport::Recherche_sport(Ui::sport_entraineur *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString rech =ui->recherche->text();
    q.prepare("select * from sport where ( dat LIKE '%"+rech+"%' or nom LIKE '%"+rech+"%' or nb LIKE'%"+rech+"%' )");

    if ( q.exec() )
    { modal->setQuery(q);
      ui->tableView->setModel(modal);}

}

void sport::Tri_NOM(Ui::sport_entraineur *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from sport order by nom");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}
void sport::Tri_NB(Ui::sport_entraineur *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from sport order by nb");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}
void sport::Tri_DAT(Ui::sport_entraineur *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from sport order by dat");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}


