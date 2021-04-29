#include "produit.h"
#include<QMessageBox>
#include<QPrinter>
#include<QTextDocument>
#include<iostream>

produit::produit()
{
id=0;
nom="";
prix=0;
  nombre=0;
  categorie="";
}

produit::produit(int id,QString nom,int nombre ,float prix,QString categorie)
{
    this->id=id;
    this->nom=nom;
    this->nombre=nombre;
    this->prix=prix;
    this->categorie=categorie ;
}

bool produit::ajouterProduit(QString &mag)
{
    QSqlQuery qry ;
    qry.prepare("SELECT * FROM PRODUIT  where NOM=:nom");
    qry.bindValue(":nom",nom);
        qry.exec();
       int exist=0 ;
            while (qry.next())

            {

                  exist=1 ;
                  QMessageBox::critical(nullptr,QObject::tr("Ajouter un produit"),
                                                   QObject::tr("le nom du  produit existe deja.\n"
                                                               "Click Cancel to exit ."),QMessageBox::Cancel);
                  return 0 ;
            }

    int idm;
    qry.prepare("select IDM from MAGASIN where NOMM = :nomm");
    qry.bindValue(":nomm",mag);
    qry.exec();
    while ( qry.next()) {

       idm=qry.value(0).toInt();
       }
      qry.prepare("insert into PRODUIT (ID,NOM,NOMBRE,PRIX,CATEGORIE,IDM) values (:id,:nom,:nombre,:prix,:categorie,:idm)") ;
       qry.bindValue(":id",QString::number(id));
      qry.bindValue(":nom",nom);
      qry.bindValue(":nombre",QString::number(nombre));

      qry.bindValue(":prix",QString::number( prix));
      qry.bindValue(":categorie",categorie);

qry.bindValue(":idm",QString::number (idm));
      return qry.exec();
}

void produit::afficherProduit(Ui::Dialog *ui)
{

        QSqlQuery q;
        QSqlQueryModel *modal=new QSqlQueryModel();
        q.prepare("SELECT PRODUIT.id,PRODUIT.nom,PRODUIT.nombre,PRODUIT.prix,PRODUIT.categorie, MAGASIN.NOMM as Magasin FROM PRODUIT, MAGASIN  where PRODUIT.IDM = MAGASIN.IDM");
        q.exec();
        modal->setQuery(q);
        ui->tableView_2->setModel(modal);

}

bool produit::modifierProduit(QString &mag)
{

    QSqlQuery qry ;
    qry.prepare("SELECT * FROM PRODUIT  where NOM=:nom and ID!=:id");
    qry.bindValue(":nom",nom);
    qry.bindValue(":id",id);
        qry.exec();
       int exist=0 ;
            while (qry.next())

            {

                  exist=1 ;
                  QMessageBox::critical(nullptr,QObject::tr("Modifier un produit"),
                                                   QObject::tr("le nom du  produit existe deja.\n"
                                                               "Click Cancel to exit ."),QMessageBox::Cancel);
                  return 0 ;
            }
    int idm;
    qry.prepare("select IDM from MAGASIN where NOMM = :nomm");
    qry.bindValue(":nomm",mag);
    qry.exec();
    while ( qry.next()) {

       idm=qry.value(0).toInt();
       }
       qry.prepare("update PRODUIT set ID=:id,NOM=:nom,NOMBRE=:nombre,PRIX=:prix,CATEGORIE=:categorie,IDM=:idm where ID=:id ");
       qry.bindValue(":id",QString::number(id));
      qry.bindValue(":nom",nom);
      qry.bindValue(":nombre",QString::number(nombre));

      qry.bindValue(":prix",QString::number( prix));
      qry.bindValue(":categorie",categorie);

qry.bindValue(":idm",QString::number (idm));
          return qry.exec();
}
void produit::selectionnerProduit(Ui::Dialog *ui, int idp)
{ QSqlQuery qry;

   qry.prepare("SELECT PRODUIT.*, MAGASIN.NOMM FROM PRODUIT, MAGASIN  where PRODUIT.IDM = MAGASIN.IDM and ID=:val");
   qry.bindValue(":val",QString::number(idp));
   if(qry.exec())
       {

           while (qry.next())

           {

               ui->lineEdit_id_2->setText(qry.value(0).toString());
                ui->lineEdit_nom_2->setText(qry.value(1).toString());
                ui->lineEdit_nombre->setText(qry.value(2).toString());
                ui->lineEdit_prix->setText(qry.value(3).toString());
                ui->comboBox_cat->setCurrentText(qry.value(4).toString());
                 ui->combobox_mag->setCurrentText(qry.value(5).toString());

           }

       }


}

bool produit::supprimerproduit(Ui::Dialog *ui)
{
    int id;
    id=(ui->tableView_2->model()->data(ui->tableView_2->currentIndex())).toInt();
  QSqlQuery query ;
  query.prepare("DELETE FROM PRODUIT WHERE ID=:id");
  query.bindValue(":id",QString::number(id));
  if(query.exec())
  {
              return query.exec();
  }
  else return false;


}
bool produit::supprimerproduits(Ui::Dialog *ui)
{
  QString id;
    id=ui->lineEdit_id_2->text();
  QSqlQuery query ;
  query.prepare("DELETE FROM produit WHERE ID=:id");
   query.bindValue(":id",id);
  if(query.exec())
  {
              return query.exec();
  }
  else return false;


}

void produit::creationpdf()
{
    QString str;
              str.append("<html><head></head><body><center>"+QString("GESTION PRODUIT"));
              str.append("<table border=1><tr>") ;
              str.append("<td>"+QString("ID")+"</td>") ;
              str.append("<td>"+QString("NOM")+"</td>") ;
              str.append("<td>"+QString("NOMBRE")+"</td>") ;
              str.append("<td>"+QString("ADRESSE")+"</td>") ;
              str.append("<td>"+QString("CATEGORIE")+"</td>") ;




              QSqlQuery* query=new QSqlQuery();
              query->exec("SELECT ID,NOM,NOMBRE,PRIX,CATEGORIE FROM PRODUIT");

              while(query->next())
              {
              str.append("<tr><td>");
              str.append(query->value(0).toString()) ;
              str.append("</td><td>") ;
              str.append(query->value(1).toString());
              str.append("</td><td>") ;
              str.append(query->value(2).toString());
              str.append("</td><td>") ;
              str.append(query->value(3).toString());
              str.append("</td><td>") ;
              str.append(query->value(4).toString());
              str.append("</td><td>") ;
              str.append(query->value(5).toString());
              str.append("</td></td>");


              }
           str.append("</table></center></body></html>") ;

           QPrinter printer ;
           printer.setOrientation(QPrinter::Portrait);
           printer.setOutputFormat(QPrinter::PdfFormat);
           printer.setPaperSize(QPrinter::A4) ;

           QString path=QFileDialog::getSaveFileName(NULL,"Convertir a PDF","..","PDF(*.pdf)");

           if (path.isEmpty()) return ;
           printer.setOutputFileName(path) ;

           QTextDocument doc;
           doc.setHtml(str) ;
           doc.print(&printer);
}

void produit::TRI1(Ui::Dialog *ui)
{
    QSqlQuery q;
       QSqlQueryModel *model=new QSqlQueryModel();
       q.prepare("select * from PRODUIT order by NOM");
       q.exec();
       model->setQuery(q);
       ui->tableView_2->setModel(model);
}

void produit::TRI2(Ui::Dialog *ui)
{
    QSqlQuery q;
       QSqlQueryModel *model=new QSqlQueryModel();
       q.prepare("select * from PRODUIT order by PRIX");
       q.exec();
       model->setQuery(q);
       ui->tableView_2->setModel(model);
}

void produit::recherche(Ui::Dialog *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString mot =ui->lineEdit_rechercher_2->text();
    q.prepare("select * from PRODUIT where (ID LIKE '%"+mot+"%' or NOM LIKE '%"+mot+"%' or CATEGORIE LIKE '%"+mot+"%' )");

    q.exec() ;
    modal->setQuery(q);
    ui->tableView_2->setModel(modal);
}
int produit::nombre_produit(QString cat)
{
QSqlQuery query;
int count=0 ;
QMessageBox::information(nullptr,QObject::tr("Modifier PRODUIT"),cat,QMessageBox::Cancel);
QSqlQuery requete("select count(*) from PRODUIT where CATEGORIE =:cat") ;
query.bindValue(":cat",cat);
while(requete.next())
{
        count=requete.value(0).toInt();
}

return count ;
}

