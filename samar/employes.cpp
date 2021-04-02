#include "employes.h"
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


EMPLOYES::EMPLOYES()
{
    ide=0;
    nom="";
    prenom="";
    email="";
    tel=0;
    role="";
    salaire=0;


}


EMPLOYES::EMPLOYES(int ide, QString nom ,QString prenom,QString email,int tel,QString role,int salaire){
    this->ide=ide;
    this->nom=nom;
    this->prenom=prenom;
    this->email=email;
    this->tel=tel;
    this->role=role;
    this->salaire=salaire;
}

int EMPLOYES::getide(){
return ide;
}
QString EMPLOYES::getnom(){
return nom;
}
QString EMPLOYES::getprenom(){
return prenom;
}
QString EMPLOYES::getemail(){
return email;
}
int EMPLOYES::gettel(){
return tel;
}
QString EMPLOYES::getrole(){
return role;
}

int EMPLOYES::getsalaire(){
return salaire;
}


void EMPLOYES::setide (int ide ){
this->ide=ide;
}
void EMPLOYES::setnom(QString nom ){
this->nom=nom;
}

void EMPLOYES::setprenom(QString prenom){
this->prenom=prenom;
}
void EMPLOYES::setemail(QString email){
this->email=email;
}
void EMPLOYES::settel(int tel){
this->tel=tel;
}
void EMPLOYES::setrole(QString role){
this->role=role;
}

void EMPLOYES::setsalire(int salaire){
this->salaire=salaire;
}


bool EMPLOYES::ajouter(){
    QSqlQuery query;
    QString id_string= QString::number(ide);
    //QString dat_string= QString::number(DAT);

       QString tel_string= QString::number(tel);
       QString sal_string= QString::number(salaire);
          query.prepare("INSERT INTO EMPLOYES (ide, nom, prenom,email, tel, role ,salaire) "
                        "VALUES (:ide, :nom, :prenom, :email, :tel ,:role, :salaire)");
          query.bindValue(":ide",id_string);
          query.bindValue(":nom",nom);
          query.bindValue(":prenom",prenom);
          query.bindValue(":email",email);
         query.bindValue(":tel",tel_string);
          query.bindValue(":role",role);

           query.bindValue(":salaire",sal_string);
         return query.exec();

                        }
void EMPLOYES::afficher(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    q.prepare("select * from EMPLOYES");
    q.exec();
    modal->setQuery(q);
    ui->tableView->setModel(modal);
}



bool EMPLOYES::Supprimer(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QString ide = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString();
    q.prepare("DELETE FROM EMPLOYES WHERE ide ='"+ide+"'");
    q.exec();
}

bool EMPLOYES::modifier(Ui::joueur_categ *ui)
{

        QSqlQuery q;

        QString ide=ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString();

        q.prepare("UPDATE EMPLOYES set nom:=nom_modif,prenom:=lieu_modif, role:=DAT_modif, email:=prix_modif where ide='"+ide+"'");

        q.bindValue(":nom_modif",ui->nom_modif->text());
       //q.bindValue(":lieu_modif",ui->lieu_modif->text());
        //q.bindValue(":DAT_modif",ui->date_modif->text());
       // q.bindValue(":prix_modif",ui->prix_modif->text());

        return q.exec();

    }




void EMPLOYES::Recherche(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString rech =ui->recherche->text();
    q.prepare("select * from EMPLOYES where ( email LIKE '%"+rech+"%' or nom LIKE '%"+rech+"%' or prenom LIKE'%"+rech+"%' or role LIKE '%"+rech+"%' )");

    if ( q.exec() )
    { modal->setQuery(q);
      ui->tableView->setModel(modal);}

}

void EMPLOYES::Tri_NOM(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from EMPLOYES order by nom");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}
/*
void EMPLOYES::Tri_PRIX(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from EMPLOYES order by id");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}
void EMPLOYES::Tri_DATE(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from EMPLOYES order by ROLE");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}

void EMPLOYES::pdf(Ui::joueur_categ *ui)
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


