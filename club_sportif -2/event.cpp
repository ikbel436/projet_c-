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
#include "event_sponsor.h"
#include "ui_event_sponsor.h"
#include<QTextDocument>


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
void EVENT::afficher(Ui::event_sponsor *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    q.prepare("select * from event");
    q.exec();
    modal->setQuery(q);
    ui->tableView->setModel(modal);
}



bool EVENT::Supprimer(Ui::event_sponsor *ui)
{
    QSqlQuery q;
    QString id = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString();
    q.prepare("DELETE FROM event WHERE id ='"+id+"'");
    q.exec();
}

bool EVENT::modifier(Ui::event_sponsor *ui)
{

        QSqlQuery q;

        QString id=ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString();

        q.prepare("UPDATE event set NOM:=nom_modif,lieu:=lieu_modif, DAT:=DAT_modif, prix:=prix_modif where id='"+id+"'");

        q.bindValue(":nom_modif",ui->nom_modif->text());
        q.bindValue(":lieu_modif",ui->lieu_modif->text());
        q.bindValue(":DAT_modif",ui->date_modif->text());
        q.bindValue(":prix_modif",ui->prix_modif->text());

        return q.exec();

    }




void EVENT::Recherche(Ui::event_sponsor *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString rech =ui->recherche->text();
    q.prepare("select * from EVENT where ( prix LIKE '%"+rech+"%' or NOM LIKE '%"+rech+"%' or LIEU LIKE'%"+rech+"%' or DAT LIKE '%"+rech+"%' )");

    if ( q.exec() )
    { modal->setQuery(q);
      ui->tableView->setModel(modal);}

}

void EVENT::Tri_NOM(Ui::event_sponsor *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from event order by NOM");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}
void EVENT::Tri_PRIX(Ui::event_sponsor *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from event order by PRIX");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}
void EVENT::Tri_DATE(Ui::event_sponsor *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from event order by DAT");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}

void EVENT::pdf(Ui::event_sponsor *ui)
{

    QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
    if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }
    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName(fileName);

    QTextDocument doc;
    QString id = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString();
    QString nom = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),1)).toString();
    QString lieu = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),2)).toString();
    QString dat = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),5)).toString();
    QString prix= ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),3)).toString();
    QString nb = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),4)).toString();
    doc.setHtml("<br> <h1>Information de event  " " " +nom+ " " +lieu+ " <br> <br> </h1>\n <h4 >Identifiant:" " " +id +" </h4> \n <h4> Nom et lieu : " " "+ nom+ " " + lieu +" </h4> \n <h4>Date  : " " "+dat+" </h4> \n <h4>prix:" " "+prix+" " " </h4> \n <h4> Nbre participants :" " "+nb+" </h4> ");
    doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
    doc.print(&printer);
    }




