#include "empfou.h"
#include "ui_empfou.h"
#include"employes.h"
#include"fournisseurs.h"
#include<QDebug>
#include <QMessageBox>
#include <QMediaPlayer>
#include <QObject>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include<QTextStream>
#include <QPropertyAnimation>
#include"exportexcelobject.h"
#include <QSqlTableModel>



empfou::empfou(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::empfou)
{

    ui->setupUi(this);
this->setStyleSheet("color: darkblue; background-color: ");
    son=new QSound(":/sons/bruit-clic.wav");
     supp=new QSound(":/sons/supprimer.wav");
      ajout=new QSound(":/sons/ajouter.wav");
    EMPLOYES e ;

    e.afficher(ui);
    FOURNISSEURS s;

    s.afficher_FOURNISSEURS(ui);
}

empfou::~empfou()
{
    delete ui;
}


void empfou::on_supprimer_clicked()
{
    EMPLOYES e;
    supp->play();
    e.Supprimer(ui);
    e.afficher(ui);
}

void empfou::on_comboBox_currentIndexChanged(int index)
{
    EMPLOYES e;
    if (index==0)
    {e.Tri_NOM(ui);

    }

    else if(index==1)
    {  e.Tri_PRENOM(ui);

    }
    else
    {e.Tri_SALAIRE(ui);
    }
}



/*
void empfou::on_search_clicked()
{
    EMPLOYES e;
    son->play();
 // e.Recherche(ui);
    e.Recherche(ui);
}
*/




void empfou::on_excel_clicked()
{
     ajout->play();
    QString fileName = QFileDialog::getSaveFileName(this, tr("Exportation en fichier Excel"), qApp->applicationDirPath (),
                                                        tr("Fichiers d'extension Excel (*.xls)"));
        if (fileName.isEmpty())
            return;

        ExportExcelObject obj(fileName, "mydata", ui->tableView);

        // you can change the column order and
        // choose which colum to export

        obj.addField(0, "IDE", "char(20)");
        obj.addField(1, "Nom", "char(20)");
        obj.addField(2, "PRENPM", "char(20)");
        obj.addField(3, "EMAIL", "char(20)");
        obj.addField(4, "TEL", "char(20)");
        obj.addField(5, "ROLE", "char(20)");

        obj.addField(6, "SALAIRE", "char(20)");


        int retVal = obj.export2Excel();

        if( retVal > 0)
        {
            QMessageBox::information(this, tr("FAIS!"),
                                     QString(tr("%1 enregistrements exportés!")).arg(retVal)
                                     );
        }
}


void empfou::on_tableView_doubleClicked(const QModelIndex &index)
{
    ajout->play();
    ui->nom_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),1)).toString());
    ui->lieu_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),2)).toString());
    ui->date_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),3)).toString());
    ui->prix_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),4)).toString());
    ui->email_modif_2->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),5)).toString());
    ui->nb_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),6)).toString());
    ui->id_2->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString());
    ui->stackedWidget->setCurrentIndex(1);


}

void empfou::on_modifier_clicked()
{
ajout->play();
int IDE=ui->id_2->text().toInt();
QString NOM=ui->nom_modif->text();
QString PRENOM=ui->lieu_modif->text();
QString EMAIL=ui->date_modif->text();
int TEL=ui->prix_modif->text().toInt();
QString ROLE=ui->nb_modif->text();
int SALAIRE=ui-> email_modif ->text().toInt();

EMPLOYES e(IDE,NOM,PRENOM,EMAIL,TEL,ROLE,SALAIRE);
    if(e.modifier(ui))
    {
        QMessageBox ::information(this,"","employe modifié")  ;
        ui->stackedWidget->setCurrentIndex(0);
        e.afficher(ui);
    }
    else
    { QMessageBox ::critical(this,"","erreur de modification") ;}

}


void empfou::on_Valider_clicked()

{
ajout->play();
    QRegExp regex1 ("[a-z]$");
    QRegExp regex2 ("^[a-z]");
    QRegExp regex3("\\b[a-z0-9._%+-]+@[a-z0-9.-]+\\.[a-z]{2,4}\\b");
    QString msg_nom ="nom invalide";
    QString msg_lieu ="prenom invalide";
     QString msg_nb ="num invalide";
      QString msg_prix ="salaire inva";
      QString msg_date ="email inva";

    QString msg_vide="";

    int IDE=ui->id->text().toInt();
    QString NOM=ui->nom->text();
    QString PRENOM=ui->lieu->text();
    QString EMAIL=ui->date->text();
    int TEL=ui->nb->text().toInt();
    QString ROLE=ui->role->text();
     int SALAIRE=ui->prix->text().toInt();



    EMPLOYES F(IDE,NOM,PRENOM,EMAIL,TEL,ROLE,SALAIRE);
    if ((!NOM.contains(regex1))||(!NOM.contains(regex2)))
    {
        ui->nom->setStyleSheet("QLineEdit { color: red;}");
        ui->text_nom->setText(msg_nom);
        ui->text_nom->setStyleSheet("QLabel { background-color : transparent; color : red; }");
        F.setValide();
    }
    else { ui->nom->setStyleSheet("QLineEdit { color: black;}");
        ui->text_nom->setText(msg_vide);

    }

    if ((!PRENOM.contains(regex1))||(!PRENOM.contains(regex2)))
    {
        ui->lieu->setStyleSheet("QLineEdit { color: red;}");
        ui->text_lieu->setText(msg_lieu);
        ui->text_lieu->setStyleSheet("QLabel { background-color : transparent; color : red; }");
        F.setValide();
    }
    else { ui->lieu->setStyleSheet("QLineEdit { color: black;}");
        ui->text_lieu->setText(msg_vide);

    }
   /*if ((SALAIRE>10)||(SALAIRE<10000))
    {
        ui->nb->setStyleSheet("QLineEdit { color: red;}");
        ui->text_nb->setText(msg_vide);
        ui->text_nb->setStyleSheet("QLabel { background-color : transparent; color : red; }");
        F.setValide();
    }
    else { ui->nb->setStyleSheet("QLineEdit { color: black;}");
        ui->text_nb->setText(msg_vide);
*/

    if ((TEL<0)||(TEL>1000000000))
    {
        ui->prix->setStyleSheet("QLineEdit { color: red;}");
        ui->text_prix->setText(msg_prix);
        ui->text_prix->setStyleSheet("QLabel { background-color : transparent; color : red; }");
        F.setValide();
    }
    else { ui->nb->setStyleSheet("QLineEdit { color: black;}");
        ui->text_prix->setText(msg_vide);

    }

    if (!EMAIL.contains(regex3))
    {
        ui->date->setStyleSheet("QLineEdit { color: red;}");
        ui->text_date->setText(msg_date);
        ui->text_date->setStyleSheet("QLabel { background-color : transparent; color : red; }");
        F.setValide();
    }
    else { ui->date->setStyleSheet("QLineEdit { color: black;}");
        ui->text_date->setText(msg_vide);

    }


    if (F.getValide()==0)
    {
    if(F.ajouter()){
        ui->nom->setStyleSheet("QLineEdit { color: green;}");
        ui->lieu->setStyleSheet("QLineEdit { color: green;}");
        ui->date->setStyleSheet("QLineEdit { color: green;}");
        ui->prix->setStyleSheet("QLineEdit { color: green;}");

        ui->role->setStyleSheet("QLineEdit { color: green;}");
         ui->nb->setStyleSheet("QLineEdit { color: green;}");

        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout de EMPLOYES succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
         ui->stackedWidget_ajout->setCurrentIndex(1);
         F.afficher(ui);
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("ajout failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }



}}
void empfou::on_Annuler_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    son->play();
}

void empfou::on_event_clicked()
{   EMPLOYES e;
    e.afficher(ui);
    ui->stackedWidget_ajout->setCurrentIndex(1);
    son->play();
}

void empfou::on_annuler_clicked()
{ EMPLOYES e;
 son->play();
    ui->stackedWidget_ajout->setCurrentIndex(0);
    e.ajouter();


}


void empfou::on_supprimer_2_clicked()
{
    FOURNISSEURS s;
     supp->play();
    s.Supprimer_FOURNISSEURS(ui);
    s.afficher_FOURNISSEURS(ui);
}




void empfou::on_comboBox_2_currentIndexChanged(int index)
{

    FOURNISSEURS s;
    if (index==0)
    {s.Tri_NOM_FOURNISSEURS(ui);

    }

    else if(index==1)
    {  s.Tri_PRENOM_FOURNISSEURS(ui);

    }
    else
    {s.Tri_TEL_FOURNISSEURS(ui);
    }
}

void empfou::on_search_2_clicked()
{
    FOURNISSEURS s;
    ajout->play();
    s.Recherche_FOURNISSEURS(ui);

}

void empfou::on_tableView_2_doubleClicked(const QModelIndex &index)
{
    ui->nom_modif_2->setText(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),1)).toString());
    ui->type_modif->setText(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),2)).toString());
    ui->email_modif->setText(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),3)).toString());
    ui->tel_modif->setText(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),4)).toString());
    ui->id_3->setText(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),0)).toString());
    ui->stackedWidget_2->setCurrentIndex(2);

}

void empfou::on_modifier_2_clicked()
{
    FOURNISSEURS s;
ajout->play();
int IDE=ui->id_3->text().toInt();
QString NOM=ui->nom_modif_2->text();
QString PRENOM=ui->type_modif->text();
QString EMAIL=ui->email_modif->text();
int TEL=ui->tel_modif->text().toInt();

FOURNISSEURS e(IDE,NOM,PRENOM,EMAIL,TEL);
    if(e.modifier_FOURNISSEURS(ui))
    {
        QMessageBox ::information(this,"","FOURNISSEURS modifié")  ;
        ui->stackedWidget_2->setCurrentIndex(1);
        e.afficher_FOURNISSEURS(ui);
    }
    else
    { QMessageBox ::critical(this,"","erreur de modification") ;}
}

void empfou::on_ajouter_clicked()
{
ajout->play();
    QRegExp regex1 ("[a-z]$");
    QRegExp regex2 ("^[a-z]");
    QRegExp regex3("\\b[a-z0-9._%+-]+@[a-z0-9.-]+\\.[a-z]{2,4}\\b");
    QString msg_noms ="nom invalide";
    QString msg_type ="type invalide";
    QString msg_email ="email inva";
    QString msg_tel ="tel inva";
    QString msg_vide="";


        int IDF=ui->id_sponsor->text().toInt();
        QString NOM=ui->nom_sponsor->text();
        QString PRENOM=ui->type->text();
        QString EMAIL=ui->email->text();
        int TEL=ui->tel->text().toInt();

        FOURNISSEURS F(IDF,NOM,PRENOM,EMAIL,TEL);
        if ((!NOM.contains(regex1))||(!NOM.contains(regex2)))
        {
            ui->nom->setStyleSheet("QLineEdit { color: red;}");
            ui->text_noms->setText(msg_noms);
            ui->text_noms->setStyleSheet("QLabel { background-color : transparent; color : red; }");
            F.setValide();
        }
        else { ui->nom->setStyleSheet("QLineEdit { color: black;}");
            ui->text_noms->setText(msg_vide);

        }
        if ((!PRENOM.contains(regex1))||(!PRENOM.contains(regex2)))
        {
            ui->type->setStyleSheet("QLineEdit { color: red;}");
            ui->text_type->setText(msg_type);
            ui->text_type->setStyleSheet("QLabel { background-color : transparent; color : red; }");
            F.setValide();
        }
        else { ui->type->setStyleSheet("QLineEdit { color: black;}");
            ui->text_type->setText(msg_vide);

        }


        if (!EMAIL.contains(regex3))
        {
            ui->email->setStyleSheet("QLineEdit { color: red;}");
            ui->text_email->setText(msg_email);
            ui->text_email->setStyleSheet("QLabel { background-color : transparent; color : red; }");
            F.setValide();
        }
        else { ui->email->setStyleSheet("QLineEdit { color: black;}");
            ui->text_email->setText(msg_vide);

        }


       if (F.getValide()==0){
        //bool test=F.ajouter();
        if(F.ajouter()){
            ui->nom->setStyleSheet("QLineEdit { color: green;}");
             ui->type->setStyleSheet("QLineEdit { color: green;}");
             ui->email->setStyleSheet("QLineEdit { color: green;}");
            QMessageBox::information(nullptr, QObject::tr("OK"),
                        QObject::tr("ajout de FOURNISSEURS succesful.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
              ui->stackedWidget_2->setCurrentIndex(1);
              F.afficher_FOURNISSEURS(ui);
        }
        else{

            QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                        QObject::tr("ajout failed.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
}
}

void empfou::on_sponsor2_clicked()
{
    FOURNISSEURS s;
    son->play();
    s.afficher_FOURNISSEURS(ui);
    ui->stackedWidget_2->setCurrentIndex(1);

}

void empfou::on_sponsor_ajout_clicked()
{
    FOURNISSEURS s;
    son->play();
    s.ajouter();
    ui->stackedWidget_2->setCurrentIndex(0);
}

void empfou::on_Annuler_2_clicked()
{   son->play();
    ui->stackedWidget_2->setCurrentIndex(1);
}

void empfou::on_recherche_textChanged(const QString &arg1)
{
    QString rech;
          rech= arg1.toCaseFolded();
            QSqlQueryModel * model= new QSqlQueryModel();
        QSqlQuery* qry=new QSqlQuery();

         qry->prepare("SELECT * from EMPLOYES where NOM like concat (:rech,'%')   or PRENOM like concat (:rech,'%') or EMAIL  like concat (:rech,'%') or TEL like concat (:rech,'%') or ROLE like concat (:rech,'%') or SALAIRE like concat (:rech,'%')  ");
         qry->bindValue(":rech",rech);
         qry->exec();
         model->setQuery(*qry);
         ui->tableView->setModel(model);
}
