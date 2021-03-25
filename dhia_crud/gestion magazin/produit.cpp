#include "produit.h"
#include<QMessageBox>
#include<QPrinter>
#include<QTextDocument>

produit::produit()
{
id="";
nom="";
prix="";
  adresse="";
  nombre="";
  marque="";
}

produit::produit(QString id,QString nom,QString nombre ,QString adresse ,QString prix,QString marque)
{
    this->id=id;
    this->nom=nom;
    this->nombre=nombre;
    this->adresse=adresse;
    this->prix=prix;
    this->marque=marque ;
}

bool produit::ajouterProduit()
{
    QSqlQuery qry ;
    qry.prepare("insert into PRODUIT (ID,NOM,NOMBRE,ADRESSE,PRIX,MARQUE) values ('"+id+"','"+nom+"','"+nombre+"','"+adresse+"','"+prix+"','"+marque+"')") ;
       qry.bindValue(":ID",id);
      qry.bindValue(":NOM",nom);
      qry.bindValue(":NOMBRE",nombre);
      qry.bindValue(":ADRESSE",adresse);
      qry.bindValue(":PRIX",prix);
      qry.bindValue(":MARQUE",marque);


      return qry.exec();
}

void produit::afficherProduit(Ui::Dialog *ui)
{

        QSqlQuery q;
        QSqlQueryModel *modal=new QSqlQueryModel();
        q.prepare("select * from PRODUIT");
        q.exec();
        modal->setQuery(q);
        ui->tableView_2->setModel(modal);

}

bool produit::modifierProduit()
{
    QSqlQuery qry ;

       qry.prepare("update PRODUIT set ID='"+id+"',NOM='"+nom+"',NOMBRE='"+nombre+"',ADRESSE='"+adresse+"',PRIX='"+prix+"',MARQUE='"+marque+"' where ID='"+id+"' ");
       qry.bindValue(":ID",id);
       qry.bindValue(":NOM",nom);
       qry.bindValue(":NOMBRE",nombre);
       qry.bindValue(":ADRESSE",adresse);
       qry.bindValue(":PRIX",prix);
       qry.bindValue(":MARQUE",marque);

          return qry.exec();
}
void produit::selectionnerProduit(Ui::Dialog *ui, const QModelIndex &index)
{ QSqlQuery qry;
    QString val;
   val=ui->tableView_2->model()->data(index).toString();

   qry.prepare("SELECT * FROM PRODUIT  where ID='"+val+"' or NOM='"+val+"' or NOMBRE='"+val+"' or ADRESSE='"+val+"' or PRIX='"+val+"'or MARQUE='"+val+"' ");
       if(qry.exec())
       {
           while (qry.next())

           {

               ui->lineEdit_id_2->setText(qry.value(0).toString());
                ui->lineEdit_nom_2->setText(qry.value(1).toString());
                ui->lineEdit_nombre->setText(qry.value(2).toString());
                ui->lineEdit_adresse->setText(qry.value(3).toString());
                ui->lineEdit_prix->setText(qry.value(4).toString());
                ui->lineEdit_marque->setText(qry.value(5).toString());
           }

       }


}

bool produit::supprimerproduit(Ui::Dialog *ui)
{
    QString id;
    id=ui->lineEdit_id_2->text();
  QSqlQuery query ;
  query.prepare("DELETE FROM PRODUIT WHERE ID='"+id+"'");
  if(query.exec())
  {
              return query.exec();
  }
  else return false;


}

void produit::creationpdf()
{
    QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
        if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

        QPrinter printer(QPrinter::PrinterResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setPaperSize(QPrinter::A4);
        printer.setOutputFileName(fileName);

        QTextDocument doc;
        QSqlQuery q;
        q.prepare("SELECT * FROM RESERVATION ");
        q.exec();
        QString pdf="<br> <h1  style='color:red'>LISTE DES EQUIPEMENT  <br></h1>\n <br> <table>  <tr>  <th> ID  </th> <th> NOM GP MUSIC </th> <th> NOM GP SERVEUR </th> <th> NOM GP DECO </th> <th> NOM GP PATISERIE </th> <th> NOM GP PHOTOGRAPHIE </th></tr>" ;


        while ( q.next()) {

            pdf= pdf+ " <br> <tr> <td>"+ q.value(0).toString()+" " + q.value(1).toString() +"</td>   <td>" +q.value(2).toString() +"  "" " "</td>   <td>"+q.value(3).toString()+"</td>   <td>"+q.value(4).toString()+" " "ans "  " " "</td>   <td>"+q.value(5).toString()+" </td> <td>"+q.value(5).toString()+" </td>" ;

        }
        doc.setHtml(pdf);
        doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
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
    q.prepare("select * from PRODUIT where (ID LIKE '%"+mot+"%' or NOM LIKE '%"+mot+"%' or MARQUE LIKE '%"+mot+"%' )");

    q.exec() ;
    modal->setQuery(q);
    ui->tableView_2->setModel(modal);
}

