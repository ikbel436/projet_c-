#include "joueurs.h"
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


JOUEURS::JOUEURS()
{
    id=0;
    nom="";
    prenom="";
     date_n="";
    email="";
   tel=0;


}


JOUEURS::JOUEURS(int id,QString nom ,QString prenom,QString date_n,QString email,int tel){
    this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->date_n=date_n;
    this->email=email;
    this->tel=tel;

}

int JOUEURS::getID(){
return id;
}
QString JOUEURS::getNOM(){
return nom;
}
QString JOUEURS::getPRENOM(){
return prenom;
}
QString JOUEURS::getDAT(){
return date_n;
}
QString JOUEURS::getEMAIL(){
return email;
}
int JOUEURS::getTEL(){
return tel;
}

void JOUEURS::setID(int id ){
this->id=id;
}
void JOUEURS::setNOM(QString nom ){
this->nom=nom;
}

void JOUEURS::setPRENOM(QString prenom){
this->prenom=prenom;
}

void JOUEURS::setDAT(QString date_n){
this->date_n=date_n;
}
void JOUEURS::setEMAIL(QString email){
this->email=email;
}
void JOUEURS::setTEL(int tel){
this->tel=tel;
}


bool JOUEURS::ajouter(){
    QSqlQuery query;
    QString id_string= QString::number(id);
    //QString dat_string= QString::number(DAT);

       QString tel_string= QString::number(tel);
          query.prepare("INSERT INTO joueurs ( id, nom, prenom , date_n ,email, tel) "
                        "VALUES (:id, :nom, :prenom, :date_n ,:email, :tel)");
          query.bindValue(":id", id_string);
          query.bindValue(":nom", nom);
          query.bindValue(":prenom",prenom);
          query.bindValue(":date_n", date_n);
           query.bindValue(":email",email);
          query.bindValue(":tel",tel_string);

         return query.exec();

                        }
void JOUEURS::afficher(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    q.prepare("select * from joueurs");
    q.exec();
    modal->setQuery(q);
    ui->tableView->setModel(modal);
}



bool JOUEURS::Supprimer(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QString id = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString();
    q.prepare("DELETE FROM joueurs WHERE id ='"+id+"'");
    q.exec();
}

bool JOUEURS::modifier(Ui::joueur_categ *ui)
{

        QSqlQuery q;

       // QString id=ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString();

       // q.prepare("UPDATE joueurs set nom:=nom_modif,prenom:=lieu_modif, date_n:=DAT_modif, email:=prix_modif where id='"+id+"'");
        QString id_string= QString::number(id);
        QString dat_string= QString::number(tel);

              q.prepare("UPDATE joueurs SET id=:id,nom=:nom,prenom=:prenom,date_n=:date_n,email=:email,tel=:tel where id=:id");
       /* q.bindValue(":nom_modif",ui->nom_modif->text());
        q.bindValue(":lieu_modif",ui->lieu_modif->text());
        q.bindValue(":DAT_modif",ui->date_modif->text());
        q.bindValue(":prix_modif",ui->prix_modif->text());*/
              q.bindValue(":id", id_string);
              q.bindValue(":nom", nom);
              q.bindValue(":prenom", prenom);
              q.bindValue(":date_n",date_n);
               q.bindValue(":email",email);

               q.bindValue(":tel",dat_string);

        return q.exec();

    }




void JOUEURS::Recherche(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *modal=new QSqlQueryModel();
    QString rech =ui->recherche->text();
    q.prepare("select * from joueurs where ( email LIKE '%"+rech+"%' or nom LIKE '%"+rech+"%' or prenom LIKE'%"+rech+"%' or date_n LIKE '%"+rech+"%' )");

    if ( q.exec() )
    { modal->setQuery(q);
      ui->tableView->setModel(modal);}

}

void JOUEURS::Tri_NOM(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from joueurs order by nom");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}
void JOUEURS::Tri_ID(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from joueurs order by id");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}
void JOUEURS::Tri_DATE(Ui::joueur_categ *ui)
{
    QSqlQuery q;
    QSqlQueryModel *model=new QSqlQueryModel();
    q.prepare("select * from joueurs order by date_n");
    q.exec();
    model->setQuery(q);
    ui->tableView->setModel(model);
}

/*void JOUEURS::pdf(Ui::joueur_categ *ui)
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

bool JOUEURS::modifierb(){
    QSqlQuery query;
    QString id_string= QString::number(id);
    QString dat_string= QString::number(tel);

          query.prepare("UPDATE joueurs SET id=:id,nom=:nom,prenom=:prenom,date_n=:date_n,email=:email,tel=:tel where id=:id");
          query.bindValue(":id", id_string);
          query.bindValue(":nom", nom);
          query.bindValue(":prenom", prenom);
          query.bindValue(":date_n",date_n);
           query.bindValue(":email",email);

           query.bindValue(":tel",dat_string);
         return query.exec();

                        }

