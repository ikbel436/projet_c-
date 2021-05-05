#include "event.h"
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QTextDocument>
#include <QMessageBox>
#include"exportexcelobject.h"
#include "integration.h"
#include "ui_integration.h"
#include<QTextDocument>
#include <QDateTime>


EVENT::EVENT()
{
    id=0;
    NOM="";
    lieu="";
     DAT="";
    NB=0;
    prix=0;


}


EVENT::EVENT(int id,QString NOM ,QString lieu,QString DAT,int NB,int prix){
    this->id=id;
    this->NOM=NOM;
    this->lieu=lieu;
    this->DAT=DAT;
    this->NB=NB;
    this->prix=prix;

}

int EVENT::getID(){
return id;
}
QString EVENT::getNOM(){
return NOM;
}
QString EVENT::getlieu(){
return lieu;
}
QString EVENT::getDAT(){
return DAT;
}
int EVENT::getNB(){
return NB;
}
int EVENT::getPRIX(){
return prix;
}

void EVENT::setID(int id ){
this->id=id;
}
void EVENT::setNOM(QString NOM ){
this->NOM=NOM;
}

void EVENT::setlieu(QString lieu){
this->lieu=lieu;
}

void EVENT::setDAT(QString DAT){
this->DAT=DAT;
}
void EVENT::setNB(int NB){
this->NB=NB;
}
void EVENT::setPRIX(int prix){
this->prix=prix;
}


bool EVENT::ajouter(){
    QSqlQuery query;
    QString id_string= QString::number(id);
    //QString dat_string= QString::number(DAT);
     QString nb_string= QString::number(NB);
       QString prix_string= QString::number(prix);
          query.prepare("INSERT INTO event ( id, NOM, lieu , DAT,NB,prix) "
                        "VALUES (:id, :NOM, :lieu, :DAT ,:NB, :prix)");
          query.bindValue(":id", id_string);
          query.bindValue(":NOM", NOM);
          query.bindValue(":lieu",lieu);
          query.bindValue(":DAT", DAT);
           query.bindValue(":NB",nb_string);
          query.bindValue(":prix",prix_string);

         return query.exec();

                        }
void EVENT::afficher(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    q.prepare("select * from event");
    q.exec();
    modal->setQuery(q);
    ui->tableView->setModel(modal);
}



bool EVENT::Supprimer(Ui::integration *ui)
{
    QSqlQuery q;
    QString id = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString();
    q.prepare("DELETE FROM event WHERE id ='"+id+"'");
    q.exec();
}

bool EVENT::modifier(Ui::integration *ui)
{

        QSqlQuery q;

        //QString id=ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString();
QString id_string=QString::number(id);
QString prix_string=QString::number(prix);
QString nb_string=QString::number(NB);


        q.prepare("UPDATE event set id=:id,NOM=:NOM,lieu=:lieu, DAT=:DAT,NB=:NB ,prix=:prix  where id=:id");
        q.bindValue(":id",id_string);
        q.bindValue(":NOM",NOM);
        q.bindValue(":lieu",lieu);
        q.bindValue(":DAT",DAT);
        q.bindValue(":prix",prix_string);
        q.bindValue(":NB",nb_string);

        return q.exec();

    }




void EVENT::Recherche(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString rech =ui->recherche->text();
    q.prepare("select * from EVENT where ( prix LIKE '%"+rech+"%' or NOM LIKE '%"+rech+"%' or LIEU LIKE'%"+rech+"%' or DAT LIKE '%"+rech+"%' )");

    if ( q.exec() )
    { modal->setQuery(q);
      ui->tableView->setModel(modal);}

}

void EVENT::Tri_NOM(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from event order by NOM");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}
void EVENT::Tri_PRIX(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from event order by PRIX");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}
void EVENT::Tri_DATE(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from event order by DAT");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}

void EVENT::pdf(Ui::integration *ui)
{

    QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
        if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

        QPrinter printer(QPrinter::PrinterResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setPaperSize(QPrinter::A4);
        printer.setOutputFileName(fileName);

        QTextDocument doc;
        QSqlQuery q;
        q.prepare("SELECT * FROM EVENT ");
        q.exec();
        QString pdf="<br> <h1  style='color:red'>LISTE DES Evenements  <br></h1>\n <br> <table>  <tr>  <th> ID  </th> <th> NOM  </th> <th> Lieu </th> <th> NBparticip </th> <th> PRIX </th> <th> Date </th></tr>" ;


        while ( q.next()) {

            pdf= pdf+ " <br> <tr> <td>"+ q.value(0).toString()+" " + q.value(1).toString() +"</td>   <td>" +q.value(2).toString() +"  "" " "</td>   <td>"+q.value(3).toString()+"</td>   <td>"+q.value(4).toString()+" " " "  " " "</td>   <td>"+q.value(5).toString()+" </td>" ;

        }
        doc.setHtml(pdf);
        doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
        doc.print(&printer);
    }


int EVENT::getValide()
{
    return valide;
}

void EVENT::setValide()
{
   valide = 1;
}

void EVENT::valider_date(Ui::integration *ui)
{
  QString Date = QDateTime::currentDateTime().toString("dd/MM/yyyy");

  QSqlQuery q;
  QSqlQueryModel *modal=new QSqlQueryModel();
  q.prepare("select * from EVENT where ( DAT LIKE '%"+Date+"%')");


  if ( q.exec() )
  { modal->setQuery(q);
    ui->tableView->setModel(modal);


  }

}
int EVENT::recupererID(QString nom)
{  QSqlQuery query;
    int id=0;
    query.prepare("select * from EVENT where nom='"+nom+"'");
    if(query.exec())
     {
        if(query.first())
        {id=query.value(0).toInt();

     }}
    return id;


}
QList<EVENT> EVENT::afficherRole()
{
    QList<EVENT> f;
    QSqlQuery query;
        query.prepare("select id,nom from EVENT ");
        if(query.exec())
         {while(query.next())
            {
                EVENT F;
          F.setID(query.value(0).toInt());
          F.setNOM(query.value(1).toString());
          f.append(F);

         }}
        return f;

}
EVENT EVENT ::afficherR(int id)
{
    QSqlQuery query;
      EVENT F;
       QString res = QString::number(id);
      query.prepare("select * from EVENT where id ='"+res+"'");
      if(query.exec())
       {if(query.first())
        F.setID(query.value(0).toInt());
       F.setNOM(query.value(1).toString());
       F.setlieu(query.value(2).toString());
       F.setNB(query.value(3).toInt());
       F.setPRIX(query.value(4).toInt());
       F.setDAT(query.value(5).toString());


       }


      return F;
}

void EVENT::nbeventpardate(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString rech =ui->nbdate->text();
    q.prepare("select count(*) as nb from EVENT where ( DAT LIKE '%"+rech+"%' )");

    if ( q.exec() )
    { modal->setQuery(q);
      ui->tabdate->setModel(modal);}

}

void EVENT::maxprix(Ui::integration *ui)
{
    QSqlQuery query;
     QSqlQueryModel *modal=new QSqlQueryModel();
         query.prepare("select * FROM EVENT where prix= (select max(prix) from EVENT)");


            if(query.exec())
            {
                while (query.next())
                {
                    modal->setQuery(query);
                          ui->tableView->setModel(modal);
                }
            }

}
void EVENT::minprix(Ui::integration *ui)
{
    QSqlQuery query;
         query.prepare("select * FROM EVENT where prix= (select min(prix) from EVENT)");

        QSqlQueryModel *modal=new QSqlQueryModel();
         if(query.exec())
         {
             while (query.next())
             {
                 modal->setQuery(query);
                       ui->tableView->setModel(modal);
             }
         }


}
void EVENT::maxnb(Ui::integration *ui)
{
    QSqlQuery query;
    query.prepare("select * FROM EVENT where NB= (select max(nb) from EVENT)");

   QSqlQueryModel *modal=new QSqlQueryModel();
    if(query.exec())
    {
        while (query.next())
        {
            modal->setQuery(query);
                  ui->tableView->setModel(modal);
        }
    }
}
void EVENT::minnb(Ui::integration *ui)
{
    QSqlQuery query;
    query.prepare("select * FROM EVENT where NB= (select min(NB) from EVENT)");

   QSqlQueryModel *modal=new QSqlQueryModel();
    if(query.exec())
    {
        while (query.next())
        {
            modal->setQuery(query);
                  ui->tableView->setModel(modal);
        }
    }

}
