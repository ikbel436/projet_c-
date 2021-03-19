#include "event_sponsor.h"
#include "ui_event_sponsor.h"
#include"event.h"
#include<QDebug>
#include <QMessageBox>

#include <QObject>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>

#include"exportexcelobject.h"

event_sponsor::event_sponsor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::event_sponsor)
{
    ui->setupUi(this);
    //this->setStyleSheet("{background-image: url(:Desktop\téléchargement.jpg);}");
    //QPixmap x(":/icons/téléchargement.jpg");
    //ui->background->setPixmap(x);
    EVENT e ;
    e.afficher(ui);
}

event_sponsor::~event_sponsor()
{
    delete ui;
}


void event_sponsor::on_supprimer_clicked()
{
    EVENT e;
    e.Supprimer(ui);
    e.afficher(ui);
}

void event_sponsor::on_comboBox_currentIndexChanged(int index)
{
    EVENT e;
    if (index==0)
    {e.Tri_NOM(ui);

    }

    else if(index==1)
    {  e.Tri_PRIX(ui);

    }
    else
    {e.Tri_DATE(ui);
    }
}




void event_sponsor::on_search_clicked()
{
    EVENT e;
  e.Recherche(ui);

}

void event_sponsor::on_excel_clicked()
{

    QString fileName = QFileDialog::getSaveFileName(this, tr("Exportation en fichier Excel"), qApp->applicationDirPath (),
                                                        tr("Fichiers d'extension Excel (*.xls)"));
        if (fileName.isEmpty())
            return;

        ExportExcelObject obj(fileName, "mydata", ui->tableView);

        // you can change the column order and
        // choose which colum to export

        obj.addField(0, "Id", "char(20)");
        obj.addField(1, "Nom", "char(20)");
        obj.addField(2, "Lieu", "char(20)");
        obj.addField(3, "Dat", "char(20)");
        obj.addField(4, "prix", "char(20)");
        obj.addField(5, "nb", "char(20)");


        int retVal = obj.export2Excel();

        if( retVal > 0)
        {
            QMessageBox::information(this, tr("FAIS!"),
                                     QString(tr("%1 enregistrements exportés!")).arg(retVal)
                                     );
        }
}


void event_sponsor::on_pdf_clicked()
{
EVENT e;
e.pdf(ui);
}

void event_sponsor::on_tableView_doubleClicked(const QModelIndex &index)
{
    ui->nom_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),1)).toString());
    ui->lieu_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),2)).toString());
    ui->prix_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),4)).toString());
    ui->date_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),5)).toString());
    ui->id_2->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString());
    ui->stackedWidget->setCurrentIndex(1);

}

void event_sponsor::on_modifier_clicked()
{
    EVENT e;

    if(e.modifier(ui))
    {
        QMessageBox ::information(this,"","evenement modifié")  ;
        ui->stackedWidget->setCurrentIndex(0);
        e.afficher(ui);
    }
    else
    { QMessageBox ::critical(this,"","erreur de modification") ;}

}


void event_sponsor::on_Valider_clicked()

{  int id=ui->id->text().toInt();
    QString NOM=ui->nom->text();
    QString lieu=ui->lieu->text();
    QString DAT=ui->date->text();
    int NB=ui->nb->text().toInt();
     int prix=ui->prix->text().toInt();


    EVENT F(id,NOM,lieu,DAT,NB,prix);

    bool test=F.ajouter();
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout de event succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
          //ui->tableView->setModel(F.afficher());
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("ajout failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}


void event_sponsor::on_Annuler_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void event_sponsor::on_event_clicked()
{   EVENT e;
    e.afficher(ui);
    ui->stackedWidget_ajout->setCurrentIndex(1);
}

void event_sponsor::on_annuler_clicked()
{ EVENT e;

    ui->stackedWidget_ajout->setCurrentIndex(0);
    e.ajouter();

}
