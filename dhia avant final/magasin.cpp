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
    qry.prepare("SELECT * FROM MAGASIN  where NOMM=:nom");
    qry.bindValue(":nom",nom);
        qry.exec();
       int exist=0 ;
            while (qry.next())

            {

                  exist=1 ;
                  QMessageBox::critical(nullptr,QObject::tr("Ajouter un magasin"),
                                                   QObject::tr("le nom du  magasin existe deja.\n"
                                                               "Click Cancel to exit ."),QMessageBox::Cancel);
                  return 0 ;
            }



       qry.prepare("insert into Magasin (IDM,NOMM,ADRESSE,bloc) values (:id,:nom,:adresse,:bloc)") ;
       qry.bindValue(":id",QString::number(id));
       qry.bindValue(":nom",nom);
       qry.bindValue(":adresse",adresse);
       qry.bindValue(":bloc",QString::number(bloc));



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
    qry.prepare("SELECT * FROM MAGASIN  where NOMM=:nom and IDM!=:id" );
    qry.bindValue(":nom",nom);
      qry.bindValue(":id",QString::number(id));
        qry.exec();
       int exist=0 ;
            while (qry.next())

            {

                  exist=1 ;
                  QMessageBox::critical(nullptr,QObject::tr("Modifier  un magasin"),
                                                   QObject::tr("le nom du  magasin existe deja.\n"
                                                               "Click Cancel to exit ."),QMessageBox::Cancel);
                  return 0 ;
            }

       qry.prepare("update magasin set NOMM=:nom,ADRESSE=:adresse,bloc=:bloc where IDM=:id ");
       qry.bindValue(":id",id);
       qry.bindValue(":nom",nom);

       qry.bindValue(":adresse",adresse);
       qry.bindValue(":bloc",bloc);

          return qry.exec();
}

void magasin::selectionnermagasin(Ui::Dialog *ui, const QModelIndex &index)
{ QSqlQuery qry;
   int val;
   val= ui->tableView_mag->model()->index(ui->tableView_mag->currentIndex().row(),0).data().toInt();


   qry.prepare("SELECT * FROM MAGASIN  where IDM=:id");
   qry.bindValue(":id",QString::number(val));
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
    query.prepare("DELETE FROM PRODUIT WHERE IDM=:id");
     query.bindValue(":id",id);
    query.exec();

  query.prepare("DELETE FROM magasin WHERE IDM=:id");
   query.bindValue(":id",id);
  if(query.exec())
  {
              return query.exec();
  }
  else return false;


}

void magasin::creationpdf()
{
    QString str;
              str.append("<html><head></head><body>");
              str.append("<img src='C:/Users/msi/Desktop/dhiafinal/images/logo.png'>");
              str.append("<center><h1>"+QString("GESTION MAGASIN")+"</h1>") ;
              str.append("<table border=1><tr>") ;
              str.append("<td>"+QString("IDM")+"</td>") ;
              str.append("<td>"+QString("NOMM")+"</td>") ;
              str.append("<td>"+QString("ADRESSE")+"</td>") ;
              str.append("<td>"+QString("BLOC")+"</td>") ;




              QSqlQuery* query=new QSqlQuery();
              query->exec("SELECT IDM,NOMM,ADRESSE,BLOC FROM MAGASIN");

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

void magasin::TRI1(Ui::Dialog *ui)
{
    QSqlQuery q;
       QSqlQueryModel *model=new QSqlQueryModel();
       q.prepare("select * from MAGASIN order by NOMM");
       q.exec();
       model->setQuery(q);
       ui->tableView_mag->setModel(model);
}

void magasin::TRI2(Ui::Dialog *ui)
{
    QSqlQuery q;
       QSqlQueryModel *model=new QSqlQueryModel();
       q.prepare("select * from MAGASIN order by IDM");
       q.exec();
       model->setQuery(q);
       ui->tableView_mag->setModel(model);
}



void magasin::TRI3(Ui::Dialog *ui)
{
    QSqlQuery q;
       QSqlQueryModel *model=new QSqlQueryModel();
       q.prepare("select * from MAGASIN order by bloc");
       q.exec();
       model->setQuery(q);
       ui->tableView_mag->setModel(model);
}

void magasin::recherche(Ui::Dialog *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString mot =ui->lineEdit_rechercher->text();
    q.prepare("select * from MAGASIN where (IDM LIKE '%"+mot+"%' or NOMM LIKE '%"+mot+"%' or BLOC LIKE '%"+mot+"%' )");

    q.exec() ;
    modal->setQuery(q);
    ui->tableView_mag->setModel(modal);
}

void magasin::REMPLIR_COMBO(Ui::Dialog *ui)
{
   ui->combobox_mag->clear();
    QSqlQuery q;

       q.prepare("select NOMM from MAGASIN order by NOMM");
       q.exec();
       while ( q.next()) {

           ui->combobox_mag->addItem(q.value(0).toString());
          }

}
