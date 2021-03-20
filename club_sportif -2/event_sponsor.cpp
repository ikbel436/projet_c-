#include "event_sponsor.h"
#include "ui_event_sponsor.h"
#include"event.h"
#include"sponsor.h"
#include<QDebug>
#include <QMessageBox>
#include <QMediaPlayer>
#include <QObject>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QPropertyAnimation>
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
    sponsor s;

    s.afficher_sponsor(ui);
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
    QPropertyAnimation *animation;
    animation = new QPropertyAnimation(ui->Valider,"geometry");
    animation->setDuration(1000);
    animation->setStartValue(QRect(420,460,111,23));
    animation->setEndValue(QRect(540,560,130,23));
    animation->setEasingCurve(QEasingCurve::InOutQuint);

    animation->start();
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


void event_sponsor::on_supprimer_2_clicked()
{
    sponsor s;
    s.Supprimer_sponsor(ui);
    s.afficher_sponsor(ui);
}




void event_sponsor::on_comboBox_2_currentIndexChanged(int index)
{

    sponsor s;
    if (index==0)
    {s.Tri_NOM_Sponsor(ui);

    }

    else if(index==1)
    {  s.Tri_Adresse(ui);

    }
    else
    {s.Tri_Tel(ui);
    }
}

void event_sponsor::on_search_2_clicked()
{
    sponsor s;
    s.Recherche_sponsor(ui);
}

void event_sponsor::on_tableView_2_doubleClicked(const QModelIndex &index)
{
    ui->nom_modif_2->setText(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),1)).toString());
    ui->adresse_modif->setText(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),3)).toString());
    ui->tel_modif->setText(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),4)).toString());

    ui->id_3->setText(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),0)).toString());
    ui->stackedWidget_2->setCurrentIndex(2);

}

void event_sponsor::on_modifier_2_clicked()
{
    sponsor s;

    if(s.modifier_sponsor(ui))
    {
        QMessageBox ::information(this,"","evenement modifié")  ;
        ui->stackedWidget_2->setCurrentIndex(1);
        s.afficher_sponsor(ui);
    }
    else
    { QMessageBox ::critical(this,"","erreur de modification") ;}
}

void event_sponsor::on_ajouter_clicked()
{
    int id=ui->id_sponsor->text().toInt();
        QString nom=ui->nom_sponsor->text();
        QString type=ui->type->text();
        QString adresse=ui->adresse->text();
        QString email=ui->email->text();
        int tel=ui->tel->text().toInt();




        sponsor F(id,nom,type,adresse,email,tel);

        bool test=F.ajouter();
        if(test){
            QMessageBox::information(nullptr, QObject::tr("OK"),
                        QObject::tr("ajout de sponsor succesful.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
              //ui->tableView->setModel(F.afficher());
        }
        else{

            QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                        QObject::tr("ajout failed.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
}

void event_sponsor::on_sponsor2_clicked()
{
    sponsor s;
    s.afficher_sponsor(ui);
    ui->stackedWidget_2->setCurrentIndex(1);

}

void event_sponsor::on_sponsor_ajout_clicked()
{
    sponsor s;
    ui->stackedWidget_2->setCurrentIndex(0);
    s.ajouter();
}

void event_sponsor::on_Annuler_2_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}
