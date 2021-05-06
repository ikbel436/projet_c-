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
#include "integration.h"
#include "ui_integration.h"
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


void sport::afficher_sport(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    q.prepare("select * from sport");
    q.exec();
    modal->setQuery(q);
    ui->tableView_s->setModel(modal);
}



bool sport::Supprimer_sport(Ui::integration *ui)
{
    QSqlQuery q;
    QString id = ui->tableView_s->model()->data(ui->tableView_s->model()->index(ui->tableView_s->selectionModel()->currentIndex().row(),0)).toString();
    q.prepare("DELETE FROM sport WHERE id ='"+id+"'");
    q.exec();
}

bool sport::modifier_sport(Ui::integration *ui)
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

void sport::Recherche_sport(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString rech =ui->recherche_s->text();
    q.prepare("select * from sport where ( dat LIKE '%"+rech+"%' or nom LIKE '%"+rech+"%' or nb LIKE'%"+rech+"%' )");

    if ( q.exec() )
    { modal->setQuery(q);
      ui->tableView_s->setModel(modal);}

}

void sport::Tri_NOM(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from sport order by nom");
    q.exec();
    model->setQuery(q);
    ui->tableView_s->setModel(model);
}
void sport::Tri_NB(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from sport order by nb asc");
    q.exec();
    model->setQuery(q);
    ui->tableView_s->setModel(model);
}
void sport::Tri_DAT(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from sport order by dat");
    q.exec();
    model->setQuery(q);
    ui->tableView_s->setModel(model);
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
int sport::recupererID(QString nom)
{  QSqlQuery query;
    int id=0;
    query.prepare("select * from sport where nom='"+nom+"'");
    if(query.exec())
     {
        if(query.first())
        {id=query.value(0).toInt();

     }}
    return id;


}
QList<sport> sport::afficherRole()
{
    QList<sport> f;
    QSqlQuery query;
        query.prepare("select id,nom from sport ");
        if(query.exec())
         {while(query.next())
            {
                sport F;
          F.setId(query.value(0).toInt());
          F.setNom(query.value(1).toString());
          f.append(F);

         }}
        return f;

}
sport sport::afficherR(int id)
{
    QSqlQuery query;
      sport F;
       QString res = QString::number(id);
      query.prepare("select * from sport where id ='"+res+"'");
      if(query.exec())
       {if(query.first())
        F.setId(query.value(0).toInt());
       F.setNom(query.value(1).toString());
       F.setdat(query.value(2).toString());
        F.setnb(query.value(3).toInt());

       }


      return F;
}
void sport::calculer(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select nom as plus_pratique,nb from sport where nb=(select max(nb)from sport)");
    q.exec();
    model->setQuery(q);
    ui->tab_sport->setModel(model);
}
void sport::total_sport(Ui::integration *ui)
{

    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select count(*) as total_sport from sport ");
    q.exec();
    model->setQuery(q);
    ui->tab_sport->setModel(model);

}
void sport::datemax(Ui::integration *ui) // donner une date==> afficher le sport le plus pratique cette date
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString rech =ui->sport_encours->text();
    q.prepare("select nom  from sport where ( DAT LIKE '%"+rech+"%' and nb=(select Max(nb)from sport where (DAT LIKE '%"+rech+"%')))");

    if ( q.exec() )
    { modal->setQuery(q);
      ui->tab_sport->setModel(modal);}



}
