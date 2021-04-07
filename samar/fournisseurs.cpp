#include "fournisseurs.h"

#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QTextDocument>
#include <QMessageBox>
#include"exportexcelobject.h"
#include "joueur_categ.h"
#include "ui_joueur_categ.h"
#include<QTextDocument>

Fournisseurs::Fournisseurs()
{
    idf=0;
    nom="";
    prenom="";
    email="";
    tel=0;



}


Fournisseurs::Fournisseurs(int idf,QString nom ,QString prenom,QString email, int tel){
    this->idf=idf;
    this->nom=nom;
    this->prenom=prenom;
    this->email=email;
    this->tel=tel;


}

int Fournisseurs::getidf(){
return idf;
}
QString Fournisseurs::getnom(){
return nom;
}
QString Fournisseurs::getemail(){
return email;
}

void Fournisseurs::setidf(int idf ){
this->idf=idf;
}
void Fournisseurs::setnom(QString nom ){
this->nom=nom;
}

void Fournisseurs::setprenom(QString prenom){
this->prenom=prenom;
}

void Fournisseurs::setemail(QString email){
this->email=email;
}
void Fournisseurs::settel(int tel){
this->tel=tel;
}

bool Fournisseurs::ajouter(){
    QSqlQuery query;
    QString idf_string= QString::number(idf);
    //QString dat_string= QString::number(DAT);

          query.prepare("INSERT INTO FOURNISSEURS ( idf, nom, prenom,email,tel ) "
                        "VALUES (:idf, :nom, :prenom,:email, :tel)");
          query.bindValue(":idf", idf_string);
          query.bindValue(":nom", nom);
          query.bindValue(":prenom",prenom);
          query.bindValue(":email",email);
          query.bindValue(":tel",tel);

         return query.exec();

                        }
void Fournisseurs::afficher(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    q.prepare("select * from FOURNISSEURS");
    q.exec();
    modal->setQuery(q);
    ui->tableView_2->setModel(modal);
}



bool Fournisseurs::Supprimer(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QString idf = ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),0)).toString();
    q.prepare("DELETE FROM FOURNISSEURS WHERE idf ='"+idf+"'");
    q.exec();
}

bool Fournisseurs::modifier(Ui::joueur_categ *ui)
{

        QSqlQuery q;

        QString idf=ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),0)).toString();

        q.prepare("UPDATE FOURNISSEURS set nom:=nom ,prenom:=prenom, email:=email, tel:=tel where idf='"+idf+"'");

        q.bindValue(":nom",ui->nom_modif_3->text());
        q.bindValue(":prenom",ui->nom_modif_2->text());
        //q.bindValue(":email",ui->nom_modif_2->text());
        q.bindValue(":tel",ui->nom_modif_2->text());

        return q.exec();

    }




void Fournisseurs::Recherche(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString rech =ui->recherche_2->text();
    q.prepare("select * from FOURNISSEURS where (  nom LIKE '%"+rech+"%' or prenom LIKE'%"+rech+"%' or email LIKE'%"+rech+"%' or tel LIKE'%"+rech+"%'  )");

    if ( q.exec() )
    { modal->setQuery(q);
      ui->tableView_2->setModel(modal);}

}

void Fournisseurs::Tri_NOM(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from FOURNISSEURS order by nom");
    q.exec();
    model->setQuery(q);
    ui->tableView_2->setModel(model);
}
/*
void Fournisseurs::Tri_PRIX(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from categories order by id");
    q.exec();
    model->setQuery(q);
    ui->tableView_2->setModel(model);
}
void categories::Tri_DATE(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from categories order by date_n");
    q.exec();
    model->setQuery(q);
    ui->tableView_2->setModel(model);


void EVENT::pdf(Ui::joueur_categ *ui)
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
    QString prenom = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),2)).toString();
    QString date_n = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),5)).toString();
    QString email= ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),3)).toString();
    QString tel = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),4)).toString();
    doc.setHtml("<br> <h1>Information de joueurs  " " " +nom+ " " +prenom+ " <br> <br> </h1>\n <h4 >Identifiant:" " " +id +" </h4> \n <h4> Nom et prenom : " " "+ nom+ " " + prenom +" </h4> \n <h4>Date  : " " "+date_n+" </h4> \n <h4>email:" " "+email+" " " </h4> \n <h4> téléphone :" " "+tel+" </h4> ");
    doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
    doc.print(&printer);
    }

*/

