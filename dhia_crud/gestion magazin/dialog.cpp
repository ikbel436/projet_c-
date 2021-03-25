#include "dialog.h"
#include "ui_dialog.h"
#include<QMessageBox>
#include<QSqlQueryModel>
#include<QDebug>
#include <QPdfWriter>
#include <QPainter>
#include <QTextDocument>
#include<QFileDialog>
#include"produit.h"
#include"magasin.h"
#include <QPdfWriter>
#include <QPainter>
#include <QTextDocument>
#include<QPrinter>
#include<QPrintDialog>
#include<QFileDialog>


Dialog::Dialog(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    produit c;
    magasin m (0,"","",0);
     m.affichermagasin(ui);
     c.afficherProduit(ui);

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_sauvgarderreservatio_clicked()
{
    QSqlQuery qry;


        QString id;
            QString nom;
            QString nombre;
            QString adresse;
            QString prix ;
            QString marque ;

            id=ui->lineEdit_id_2->text();
        nom=ui->lineEdit_nom_2->text();
        nombre=ui->lineEdit_nombre->text();
        adresse=ui->lineEdit_adresse->text();
        prix=ui->lineEdit_prix->text();
        marque=ui->lineEdit_marque->text();

      produit c(id,nom,nombre,adresse,prix,marque) ;

       bool test=c.ajouterProduit();
    if (test)
        {
         c.afficherProduit(ui);
        QMessageBox::information(nullptr,QObject::tr("Ajouter un Produit"),
                                         QObject::tr("Client ajouté .\n"
                                                     "Click Cancel to exit ."),QMessageBox::Cancel);
         }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("Ajouter un Produit"),
                                         QObject::tr("Erreur.\n"
                                                     "Click Cancel to exit ."),QMessageBox::Cancel);
    }


}

void Dialog::on_pushButton_modifierreservation_clicked()
{
    QSqlQuery qry ;

        QString id;
            QString nom;
            QString nombre;
            QString adresse;
            QString prix ;
            QString marque ;

            id=ui->lineEdit_id_2->text();
        nom=ui->lineEdit_nom_2->text();
        nombre=ui->lineEdit_nombre->text();
        adresse=ui->lineEdit_adresse->text();
        prix=ui->lineEdit_prix->text();
        marque=ui->lineEdit_marque->text();
         produit r(id,nom,nombre,adresse,prix,marque) ;

    bool test=r.modifierProduit();
            if (test)
                {
            QMessageBox::information(nullptr,QObject::tr("Modifier PRODUIT"),
                                             QObject::tr("Equipement Modifié .\n"
                                                         "Click Cancel to exit ."),QMessageBox::Cancel);

                 }
            else
            {
            QMessageBox::critical(nullptr,QObject::tr("Modifier PRODUIT"),
                                             QObject::tr("ereur .\n"
                                                         "Click Cancel to exit ."),QMessageBox::Cancel);
               }

}

void Dialog::on_tabWidget_3_currentChanged(int index)
{
   //
}

void Dialog::on_tabWidget_3_tabBarClicked(int index)
{
    produit c;
     c.afficherProduit(ui);
}

void Dialog::on_tableView_2_activated(const QModelIndex &index)
{
    produit r ;
      r.selectionnerProduit(ui,index);
}

void Dialog::on_pushButton_supp_pdt_clicked()
{
    QSqlQuery qry;
       produit r;


        bool test =r.supprimerproduit(ui);
        if(test)
           {
            QMessageBox::information(nullptr,QObject::tr("Supprimer PRODUIT"),
                                             QObject::tr("Equipement supprimé .\n"
                                                         "Click Cancel to exit ."),QMessageBox::Cancel);

           }
        else
        {
            QMessageBox::information(nullptr,QObject::tr("Supprimer PRODUIT"),
                                             QObject::tr("Erreur .\n"
                                                         "Click Cancel to exit ."),QMessageBox::Cancel);
           }

}

void Dialog::on_pushButton_modifierreservation_3_clicked()
{
    produit c;
     c.afficherProduit(ui);
}

void Dialog::on_pushButton_2_clicked()
{
    QString str;
              str.append("<html><head></head><body><center>"+QString("GESTION PRODUIT"));
              str.append("<table border=1><tr>") ;
              str.append("<td>"+QString("ID")+"</td>") ;
              str.append("<td>"+QString("NOM")+"</td>") ;
              str.append("<td>"+QString("NOMBRE")+"</td>") ;
              str.append("<td>"+QString("ADRESSE")+"</td>") ;
              str.append("<td>"+QString("PRIX")+"</td>") ;
              str.append("<td>"+QString("MARQUE")+"</td>") ;



              QSqlQuery* query=new QSqlQuery();
              query->exec("SELECT ID,NOM,NOMBRE,ADRESSE,PRIX,MARQUE FROM PRODUIT");

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
              str.append("</td><td>") ;
              str.append(query->value(5).toString());
              str.append("</td></td>");
              str.append(query->value(6).toString());
              str.append("</td></tr>");


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

void Dialog::on_radioButton_4_clicked()
{
    produit c ;
    c.TRI1(ui);
}

void Dialog::on_radioButton_5_clicked()
{
    produit c ;
    c.TRI2(ui);
}

void Dialog::on_pushButton_recherche_2_clicked()
{
    produit c ;
    c.recherche(ui);
}

void Dialog::on_btn_ajout_clicked()
{
    QSqlQuery qry;








      magasin m (ui->Edit_id->text().toInt(),ui->Edit_nom->text(),ui->Edit_adresse->text(),ui->Edit_bloc->text().toInt()) ;

       bool test=m.ajoutermagasin();
    if (test)
        {
         m.affichermagasin(ui);
         ui->Edit_id->setReadOnly(true);
        QMessageBox::information(nullptr,QObject::tr("Ajouter un magasin"),
                                         QObject::tr("magasin ajouté .\n"
                                                     "Click Cancel to exit ."),QMessageBox::Cancel);
         }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("Ajouter un magasin"),
                                         QObject::tr("Erreur.\n"
                                                     "Click Cancel to exit ."),QMessageBox::Cancel);
    }


}

void Dialog::on_btn_modifier_clicked()
{
    QSqlQuery qry;



      magasin m (ui->Edit_id->text().toInt(),ui->Edit_nom->text(),ui->Edit_adresse->text(),ui->Edit_bloc->text().toInt()) ;

       bool test=m.modifiermagasin();
    if (test)
        {
         m.affichermagasin(ui);
         ui->Edit_id->setReadOnly(true);
        QMessageBox::information(nullptr,QObject::tr("Modifier un magasin"),
                                         QObject::tr("magasin modifé .\n"
                                                     "Click Cancel to exit ."),QMessageBox::Cancel);
         }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("Modifier un magasin"),
                                         QObject::tr("Erreur.\n"
                                                     "Click Cancel to exit ."),QMessageBox::Cancel);
    }

}

void Dialog::on_tabWidget_2_currentChanged(int index)
{
    magasin m ;
    m.affichermagasin(ui) ;
}

void Dialog::on_tableView_mag_activated(const QModelIndex &index)
{
   magasin m ;

      m.selectionnermagasin(ui,index);
      ui->tabWidget_2->setCurrentIndex(0);
}
void Dialog::vider_mag ()
{
    ui->Edit_id->setText("");
    ui->Edit_nom->setText("");
    ui->Edit_adresse->setText("");
    ui->Edit_bloc->setText("");



}
void Dialog::on_btn_supp_clicked()
{

       magasin m ;


        bool test =m.supprimermagasin(ui);
        if(test)
           {
            vider_mag();
            QMessageBox::information(nullptr,QObject::tr("Supprimer MAGASIN "),
                                             QObject::tr("MAGASIN  supprimé .\n"
                                                         "Click Cancel to exit ."),QMessageBox::Cancel);

           }
        else
        {
            QMessageBox::information(nullptr,QObject::tr("Supprimer MAGASIN "),
                                             QObject::tr("Erreur .\n"
                                                         "Click Cancel to exit ."),QMessageBox::Cancel);
           }

}
