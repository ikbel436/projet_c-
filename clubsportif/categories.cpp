#include "categories.h"

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

categories::categories()
{
    id=0;
    nom="";
    description="";



}


categories::categories(int id,QString nom ,QString description){
    this->id=id;
    this->nom=nom;
    this->description=description;


}

int categories::getID(){
return id;
}
QString categories::getNOM(){
return nom;
}
QString categories::getDESCRIPTION(){
return description;
}

void categories::setID(int id ){
this->id=id;
}
void categories::setNOM(QString nom ){
this->nom=nom;
}

void categories::setDESCRIPTION(QString description){
this->description=description;
}



bool categories::ajouter(){
    QSqlQuery query;
    QString id_string= QString::number(id);
    //QString dat_string= QString::number(DAT);

          query.prepare("INSERT INTO categories ( id, nom, description ) "
                        "VALUES (:id, :nom, :description)");
          query.bindValue(":id", id_string);
          query.bindValue(":nom", nom);
          query.bindValue(":description",description);

         return query.exec();

                        }
void categories::afficher(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    q.prepare("select * from categories");
    q.exec();
    modal->setQuery(q);
    ui->tableView_c->setModel(modal);
}



bool categories::Supprimer(Ui::integration *ui)
{
    QSqlQuery q;
    QString id = ui->tableView_c->model()->data(ui->tableView_c->model()->index(ui->tableView_c->selectionModel()->currentIndex().row(),0)).toString();
    q.prepare("DELETE FROM categories WHERE id ='"+id+"'");
    q.exec();
}

bool categories::modifier(Ui::integration *ui)
{

    QSqlQuery q;


    QString id_string= QString::number(id);
    //QString dat_string= QString::number(tel);

          q.prepare("UPDATE categories SET id=:id,nom=:nom,description=:description where id=:id");
   /* q.bindValue(":nom_modif",ui->nom_modif->text());
    q.bindValue(":lieu_modif",ui->lieu_modif->text());
    q.bindValue(":DAT_modif",ui->date_modif->text());
    q.bindValue(":prix_modif",ui->prix_modif->text());*/
          q.bindValue(":id", id_string);
          q.bindValue(":nom", nom);
          q.bindValue(":description", description);


    return q.exec();

    }




void categories::Recherche(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString rech =ui->recherche_c->text();
    q.prepare("select * from categories where (  nom LIKE '%"+rech+"%' or description LIKE'%"+rech+"%'  )");

    if ( q.exec() )
    { modal->setQuery(q);
      ui->tableView_c->setModel(modal);}

}

void categories::Tri_NOM(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from categories order by nom");
    q.exec();
    model->setQuery(q);
    ui->tableView_c->setModel(model);
}
void categories::Tri_ID(Ui::integration *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from categories order by id");
    q.exec();
    model->setQuery(q);
    ui->tableView_c->setModel(model);
}

/*
void categories::pdf(Ui::integration *ui)
{

    QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
    if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }
    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName(fileName);

    QTextDocument doc;
    QString id = ui->tableView_c->model()->data(ui->tableView_c->model()->index(ui->tableView_c->selectionModel()->currentIndex().row(),0)).toString();
    QString nom = ui->tableView_c->model()->data(ui->tableView_c->model()->index(ui->tableView_c->selectionModel()->currentIndex().row(),1)).toString();
    QString prenom = ui->tableView_c->model()->data(ui->tableView_c->model()->index(ui->tableView_c->selectionModel()->currentIndex().row(),2)).toString();
    QString date_n = ui->tableView_c->model()->data(ui->tableView_c->model()->index(ui->tableView_c->selectionModel()->currentIndex().row(),5)).toString();
    QString email= ui->tableView_c->model()->data(ui->tableView_c->model()->index(ui->tableView_c->selectionModel()->currentIndex().row(),3)).toString();
    QString tel = ui->tableView_c->model()->data(ui->tableView_c->model()->index(ui->tableView_c->selectionModel()->currentIndex().row(),4)).toString();
    doc.setHtml("<br> <h1>Information de joueurs  " " " +nom+ " " +prenom+ " <br> <br> </h1>\n <h4 >Identifiant:" " " +id +" </h4> \n <h4> Nom et prenom : " " "+ nom+ " " + prenom +" </h4> \n <h4>Date  : " " "+date_n+" </h4> \n <h4>email:" " "+email+" " " </h4> \n <h4> téléphone :" " "+tel+" </h4> ");
    doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
    doc.print(&printer);
    }

*/
int categories::recupererID(QString nom)
{  QSqlQuery query;
    int id=0;
    query.prepare("select * from categories where nom='"+nom+"'");
    if(query.exec())
     {
        if(query.first())
        {id=query.value(0).toInt();

     }}
    return id;


}
QList<categories> categories::afficherRole()
{
    QList<categories> f;
    QSqlQuery query;
        query.prepare("select id,nom from categories ");
        if(query.exec())
         {while(query.next())
            {
                categories F;
          F.setID(query.value(0).toInt());
          F.setNOM(query.value(1).toString());
          f.append(F);

         }}
        return f;

}
categories categories ::afficherR(int id)
{
    QSqlQuery query;
      categories F;
       QString res = QString::number(id);
      query.prepare("select * from CATEGORIES where id ='"+res+"'");
      if(query.exec())
       {if(query.first())
        F.setID(query.value(0).toInt());
       F.setNOM(query.value(1).toString());
       F.setDESCRIPTION(query.value(2).toString());


       }


      return F;
}

