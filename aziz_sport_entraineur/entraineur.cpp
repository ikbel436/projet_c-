#include "entraineur.h"
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QTextDocument>
#include <QMessageBox>
#include "sport_entraineur.h"
#include "ui_sport_entraineur.h"
#include<QTextDocument>


entraineur::entraineur()
{
    id=0;
    NOM="";
    prenom="";
     dat="";
    email="";
    tel=0;


}


entraineur::entraineur(int id,QString NOM ,QString prenom,QString DAT,QString email,int tel){
    this->id=id;
    this->NOM=NOM;
    this->prenom=prenom;
    this->dat=DAT;
    this->email=email;
    this->tel=tel;

}

int entraineur::getID(){
return id;
}
QString entraineur::getNOM(){
return NOM;
}
QString entraineur::getprenom(){
return prenom;
}
QString entraineur::getDAT(){
return dat;
}
QString entraineur::getemail(){
return email;
}
int entraineur::gettel(){
return tel;
}

void entraineur::setID(int id ){
this->id=id;
}
void entraineur::setNOM(QString NOM ){
this->NOM=NOM;
}

void entraineur::setprenom(QString prenom){
this->prenom=prenom;
}

void entraineur::setDAT(QString dat){
this->dat=dat;
}
void entraineur::setemail(QString email){
this->email=email;
}
void entraineur::settel(int tel){
this->tel=tel;
}


bool entraineur::ajouter(){
    QSqlQuery query;
    QString id_string= QString::number(id);

       QString tel_string= QString::number(tel);
          query.prepare("INSERT INTO entraineur ( id, NOM, prenom , dat, email,tel) "
                        "VALUES (:id, :NOM, :prenom, :dat ,:email, :tel)");
          query.bindValue(":id", id_string);
          query.bindValue(":NOM", NOM);
          query.bindValue(":prenom",prenom);
          query.bindValue(":dat",dat);
           query.bindValue(":email",email);
          query.bindValue(":tel",tel_string);

         return query.exec();

                        }
void entraineur::afficher(Ui:: sport_entraineur *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    q.prepare("select * from entraineur");
    q.exec();
    modal->setQuery(q);
    ui->tableView_4->setModel(modal);
}



bool entraineur::Supprimer(Ui:: sport_entraineur *ui)
{
    QSqlQuery q;
    QString id = ui->tableView_4->model()->data(ui->tableView_4->model()->index(ui->tableView_4->selectionModel()->currentIndex().row(),0)).toString();
    q.prepare("DELETE FROM entraineur WHERE id ='"+id+"'");
    q.exec();
}

bool entraineur::modifier(Ui:: sport_entraineur *ui)
{

        QSqlQuery q;

        QString id=ui->tableView_4->model()->data(ui->tableView_4->model()->index(ui->tableView_4->selectionModel()->currentIndex().row(),0)).toString();

        q.prepare("UPDATE entraineur set NOM:=nom_modif,prenom:=prenom_modif, DAT:=DAT_modif, tel:=tel_modif where id='"+id+"'");

        q.bindValue(":nom_modif",ui->nom_modif_en->text());
        q.bindValue(":prenom_modif",ui->prenom_modif_en->text());
        q.bindValue(":DAT_modif",ui->dat_modif_en->text());
        q.bindValue(":tel_modif",ui->tel_modif_en->text());

        return q.exec();

    }




void entraineur::Recherche(Ui:: sport_entraineur *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString rech =ui->recherche_2->text();
    q.prepare("select * from entraineur where ( tel LIKE '%"+rech+"%' or NOM LIKE '%"+rech+"%' or prenom LIKE'%"+rech+"%' or DAT LIKE '%"+rech+"%' )");

    if ( q.exec() )
    { modal->setQuery(q);
      ui->tableView_4->setModel(modal);}

}

void entraineur::Tri_NOM(Ui:: sport_entraineur *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from entraineur order by NOM");
    q.exec();
    model->setQuery(q);
    ui->tableView_4->setModel(model);
}
void entraineur::Tri_prenom(Ui:: sport_entraineur *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from entraineur order by prenom");
    q.exec();
    model->setQuery(q);
    ui->tableView_4->setModel(model);
}
void entraineur::Tri_DATE(Ui:: sport_entraineur *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from entraineur order by DAT");
    q.exec();
    model->setQuery(q);
    ui->tableView_4->setModel(model);
}
/*
void entraineur::pdf(Ui:: sport_entraineur *ui)
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
    QString dat = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),5)).toString();
    QString email= ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),3)).toString();
    QString tel = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),4)).toString();
    doc.setHtml("<br> <h1>Information de entraineur  " " " +nom+ " " +prenom+ " <br> <br> </h1>\n <h4 >Identifiant:" " " +id +" </h4> \n <h4> Nom et lieu : " " "+ nom+ " " + lieu +" </h4> \n <h4>Date  : " " "+dat+" </h4> \n <h4>prix:" " "+prix+" " " </h4> \n <h4> Nbre participants :" " "+nb+" </h4> ");
    doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
    doc.print(&printer);
    }

*/



