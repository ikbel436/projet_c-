#include "sport.h"
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QTextDocument>
#include <QMessageBox>
#include <QPainter>
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


        QString id_string=QString::number(id);
        QString nb_string=QString::number(nb);



                q.prepare("UPDATE sport set id=:id,nom=:nom,dat=:dat, nb=:nb  where id=:id");
                q.bindValue(":id",id_string);
                q.bindValue(":nom",nom);
                q.bindValue(":dat",dat);
                q.bindValue(":nb",nb_string);


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


void sport::image()
{ QImage image(450, 200, QImage::Format_ARGB32_Premultiplied);
    QPainter painter(&image);
    painter.fillRect(image.rect(), Qt::yellow);
    QSqlQuery q;
            q.prepare("SELECT * FROM sport ");
            q.exec();
            while(q.next())
            {
                QString image1,image2;
                image1=q.value(1).toString();
                image2=q.value(2).toString();
    painter.drawText(image.rect(), Qt::AlignCenter | Qt::AlignLeft,image1);
    image.save("output.png");
            }
    QMessageBox::information(nullptr, QObject::tr("OK"),
                QObject::tr("ajout de l'image succesful.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}


int sport::getValide()
{
    return valide;
}

void sport::setValide()
{
valide=1;
}
