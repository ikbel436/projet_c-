#include "produit.h"
#include<QMessageBox>
#include<QPrinter>
#include<QTextDocument>
#include<iostream>
#include "magasin.h"


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

void produit::afficherProduit(Ui::integration *ui)
{

        QSqlQuery q;
        QSqlQueryModel *modal=new QSqlQueryModel();
        q.prepare("SELECT PRODUIT.id,PRODUIT.nom,PRODUIT.nombre,PRODUIT.prix,PRODUIT.categorie, MAGASIN.NOMM as Magasin FROM PRODUIT, MAGASIN  where PRODUIT.IDM = MAGASIN.IDM");
        q.exec();
        modal->setQuery(q);
        ui->tab_produit->setModel(modal);

}

bool produit::modifierProduit(const QString &mag)
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
void produit::selectionnerProduit(Ui::integration *ui, int idp)
{ QSqlQuery qry;
    magasin m ;
    m.REMPLIR_COMBO(ui);
   qry.prepare("SELECT PRODUIT.*, MAGASIN.NOMM FROM PRODUIT, MAGASIN  where PRODUIT.IDM = MAGASIN.IDM and ID=:val");
   qry.bindValue(":val",QString::number(idp));
   if(qry.exec())
       {

           while (qry.next())

           {

               ui->lineEdit_idpr->setText(qry.value(0).toString());
                ui->lineEdit_nompr->setText(qry.value(1).toString());
                ui->lineEdit_nombrepr->setText(qry.value(2).toString());
                ui->lineEdit_prixpr->setText(qry.value(3).toString());
                ui->comboBox_cat->setCurrentText(qry.value(4).toString());
                 ui->combobox_mag->setCurrentText(qry.value(6).toString());

           }

       }


}

bool produit::supprimerproduit(Ui::integration *ui)
{
    int id;
    id=(ui->tab_produit->model()->data(ui->tableView_2->currentIndex())).toInt();
  QSqlQuery query ;
  query.prepare("DELETE FROM PRODUIT WHERE ID=:id");
  query.bindValue(":id",QString::number(id));
  if(query.exec())
  {
              return query.exec();
  }
  else return false;


}
bool produit::supprimerproduits(Ui::integration *ui)
{
  QString id;
    id=ui->lineEdit_idpr->text();
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

             str.append("<html><head></head><body>");
             str.append("<img src='C:/Users/msi/Desktop/dhiafinal/images/logo.png'>");
             str.append("<center><h1 style='color:red;'>"+QString("GESTION PRODUIT ")+"</h1> <br><br>") ;
             str.append("<table width='100%' border=1><tr>") ;

              str.append("<td>"+QString("ID")+"</td>") ;
              str.append("<td>"+QString("NOM")+"</td>") ;
              str.append("<td>"+QString("NOMBRE")+"</td>") ;
              str.append("<td>"+QString("ADRESSE")+"</td>") ;
              str.append("<td>"+QString("CATEGORIE")+"</td></tr>") ;




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
              str.append("</td></tr>") ;



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

void produit::TRI1(Ui::integration *ui)
{
    QSqlQuery q;
       QSqlQueryModel *model=new QSqlQueryModel();
       q.prepare("SELECT PRODUIT.id,PRODUIT.nom,PRODUIT.nombre,PRODUIT.prix,PRODUIT.categorie, MAGASIN.NOMM as Magasin FROM PRODUIT, MAGASIN where PRODUIT.IDM = MAGASIN.IDM order by nom");

       q.exec();
       model->setQuery(q);
       ui->tab_produit->setModel(model);
}

void produit::TRI2(Ui::integration *ui)
{
    QSqlQuery q;
       QSqlQueryModel *model=new QSqlQueryModel();

       q.prepare("SELECT PRODUIT.id,PRODUIT.nom,PRODUIT.nombre,PRODUIT.prix,PRODUIT.categorie, MAGASIN.NOMM as Magasin FROM PRODUIT, MAGASIN where PRODUIT.IDM = MAGASIN.IDM order by prix");

       q.exec();
       model->setQuery(q);
       ui->tab_produit->setModel(model);
}

void produit::recherche(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString mot =ui->lineEdit_rechercher_2->text();

    q.prepare("SELECT PRODUIT.id,PRODUIT.nom,PRODUIT.nombre,PRODUIT.prix,PRODUIT.categorie, MAGASIN.NOMM as Magasin FROM PRODUIT, MAGASIN where (ID LIKE '%"+mot+"%' or NOM LIKE '%"+mot+"%' or CATEGORIE LIKE '%"+mot+"%' ) and PRODUIT.IDM = MAGASIN.IDM");

    q.exec() ;
    modal->setQuery(q);
    ui->tab_produit->setModel(modal);
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
// partie historique : ajouter unee table historique dans la base de données

void produit::addToHistory(QString action, QString type, QString id)
{



    QSqlQuery query;
    QString date=QDateTime::currentDateTime().toString("dddd, dd MMMM yyyy");
    QString date1=QDateTime::currentDateTime().toString("dd/MM/yy");
    QString time=QDateTime::currentDateTime().toString("hh:mm");
    QString activity;

    activity="\n    "+date1+"   -   "+time+" \t    "+ action +" "+type+" d'identifiant:  "+id+" \n";

          query.prepare("INSERT INTO history (activity) VALUES (:activity)");
          query.bindValue(":activity", activity);

    query.exec(); }


//afficher historique : placé dans les 2 entités

QSqlQueryModel* produit::afficherHistorique(Ui::integration *ui)
{
    QSqlQueryModel * model=new QSqlQueryModel();
    QSqlQuery query;
    QString historyType="";
    switch (ui->combo_action->currentIndex())
    {
    case 0:  historyType="";break;
    case 1:  historyType="Ajout";break;
    case 2:  historyType="Modification";break;
    case 3:  historyType="Suppression";break;
    }
    QString historymp="";
    switch (ui->comboBox_mp->currentIndex())
    {
    case 0:  historymp="";break;
    case 1:  historymp="produit";break;
    case 2:  historymp="magasin";break;

    }
    query.prepare("SELECT activity FROM history where activity like '%"+historyType+"%' and  activity like '%"+historymp+"%'");
         query.exec();
         model->setQuery(query);
    return model;
}
bool produit::supprimerhistory(QString date,QString type,QString mp)
{
  QSqlQuery query ;
  query.prepare("DELETE FROM HISTORY WHERE ACTIVITY like '%"+date+"%' and ACTIVITY like '%"+type+"%' and ACTIVITY like '%"+mp+"%'");

  if(query.exec())
  {
              return query.exec();
  }
  else return false;
}


// samar

int produit::recupererID(QString nom)
{  QSqlQuery query;
    int id=0;
    query.prepare("select * from produit where nom='"+nom+"'");
    if(query.exec())
     {
        if(query.first())
        {id=query.value(0).toInt();

     }}
    return id;


}
QList<produit> produit::afficherRole()
{
    QList<produit> f;
    QSqlQuery query;
        query.prepare("select id,nom from produit ");
        if(query.exec())
         {while(query.next())
            {
                produit F;
          F.setId(query.value(0).toInt());
          F.setNom(query.value(1).toString());
          f.append(F);

         }}
        return f;

}
produit produit::afficherR(int id)
{
    QSqlQuery query;
      produit F;
       QString res = QString::number(id);
      query.prepare("select * from produit where id ='"+res+"'");
      if(query.exec())
       {if(query.first())
        F.setId(query.value(0).toInt());
       F.setNom(query.value(1).toString());
       F.setNombre(query.value(2).toInt());
        F.setprix(query.value(3).toInt());
        F.setcategorie(query.value(4).toString());
      }
}


