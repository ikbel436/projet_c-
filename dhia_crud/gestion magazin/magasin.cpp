#include "magasin.h"
#include<QMessageBox>
#include<QPrinter>
#include<QTextDocument>

magasin::magasin()
{
id=-1;
nom="";
  adresse="";
 bloc =0 ;
}

magasin::magasin(int  id,QString nom,QString adresse ,int bloc )
{
    this->id=id;
    this->nom=nom;

    this->adresse=adresse;
    this->bloc=bloc;

}

bool magasin::ajoutermagasin()
{
    QSqlQuery qry ;
    qry.prepare("insert into Magasin (IDM,NOMM,ADRESSE,bloc) values (:id,:nom,:adresse,:bloc)") ;
       qry.bindValue(":id",id);
      qry.bindValue(":nom",nom);
      qry.bindValue(":adresse",adresse);
      qry.bindValue(":bloc",bloc);



      return qry.exec();
}

void magasin::affichermagasin(Ui::Dialog *ui)
{

        QSqlQuery q;
        QSqlQueryModel *modal=new QSqlQueryModel();
        q.prepare("select * from magasin");
        q.exec();
        modal->setQuery(q);
        ui->tableView_mag->setModel(modal);

}

bool magasin::modifiermagasin()
{
    QSqlQuery qry ;

       qry.prepare("update magasin set NOMM=:nom,ADRESSE=:adresse,bloc=:bloc where IDM=:id ");
       qry.bindValue(":id",id);
       qry.bindValue(":nom",nom);

       qry.bindValue(":adresse",adresse);
       qry.bindValue(":bloc",bloc);

          return qry.exec();
}

void magasin::selectionnermagasin(Ui::Dialog *ui, const QModelIndex &index)
{ QSqlQuery qry;
   QString val;
   val=ui->tableView_mag->model()->data(index).toString();

   qry.prepare("SELECT * FROM MAGASIN  where IDM=:id");
   qry.bindValue(":id",val);
       if(qry.exec())
       {
           while (qry.next())

           {

                 ui->Edit_id->setText(qry.value(0).toString());
                ui->Edit_nom->setText(qry.value(1).toString());
                ui->Edit_adresse->setText(qry.value(2).toString());
                ui->Edit_bloc->setText(qry.value(3).toString());

           }

       }


}

bool magasin::supprimermagasin(Ui::Dialog *ui)
{
    QString id;
    id=ui->Edit_id->text();
  QSqlQuery query ;
  query.prepare("DELETE FROM magasin WHERE IDM=:id");
   query.bindValue(":id",id);
  if(query.exec())
  {
              return query.exec();
  }
  else return false;


}

