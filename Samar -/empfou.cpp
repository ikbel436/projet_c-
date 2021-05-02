#include "empfou.h"
#include "ui_empfou.h"
#include"employes.h"
#include"fournisseurs.h"
#include <QDebug>
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
#include "produit.h"
#include "QComboBox"
#include "arduino.h"
#include "QTimer"
#include "time.h"
#include "QTime"
#include"QDateTime"
#include <QCamera>
#include <QCameraImageCapture>
#include <QCameraViewfinderSettings>
#include <QVBoxLayout>
#include <QFile>
#include <QTextStream>


empfou::empfou(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::empfou)
{
    ui->setupUi(this);
    //arduino
        int ret=Ar.connect_arduino(); //lancer la connection à arduino
        switch(ret){
        case(0):qDebug() << "arduino is available and connected to : " << Ar.getarduino_port_name();
            break;
        case(1):qDebug() << "arduino is available butnconnected to : " << Ar.getarduino_port_name();
            break;
        case(-1):qDebug() << "arduino is not available" ;
        }
         QObject::connect(Ar.getserial(),SIGNAL(readyRead()),this,SLOT(update_label())); //permet de lancer
        //le slot update_label suite à la reception du signal readyRead (reception des données).


   // ui->setupUi(this);
this->setStyleSheet("color: darkblue; background-color: ");
    son=new QSound(":/sons/bruit-clic.wav");
     supp=new QSound(":/sons/supprimer.wav");
      ajout=new QSound(":/sons/ajouter.wav");
    EMPLOYES e ;

    e.afficher(ui);
    FOURNISSEURS s;


    s.afficher_FOURNISSEURS(ui);

    produit s1;
    QList<produit> fi1=s1.afficherRole();
    QStringList l1;

    for(int i=0;i<fi1.size();i++)
    {
  produit fo;
       fo=fi1.at(i);
       l1.append(fo.getNom());
    }ui->produit_four->addItem("");
     ui->produit_four->addItems(l1);

     //timerslot

     timer =new QTimer (this);
     QObject::connect(timer, SIGNAL(timeout()),this,SLOT(Timefunction()));
     timer->start(1000);

     //Camera

     mCamera=new QCamera(this);
    // mCameraViewfinder=new QCameraViewfinder(this);

}

empfou::~empfou()
{
    delete ui;
}


void empfou::on_supprimer_emp_clicked()
{
    EMPLOYES e;
    supp->play();
    e.Supprimer(ui);
    e.afficher(ui);
}

void empfou::on_comboBox_emp_currentIndexChanged(int index)
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




void empfou::on_excel_emp_clicked()
{
     ajout->play();
    QString fileName = QFileDialog::getSaveFileName(this, tr("Exportation en fichier Excel"), qApp->applicationDirPath (),
                                                        tr("Fichiers d'extension Excel (*.xls)"));
        if (fileName.isEmpty())
            return;

        ExportExcelObject obj(fileName, "mydata", ui->tableView_emp);

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


void empfou::on_tableView_emp_doubleClicked(const QModelIndex &index)
{
    ajout->play();
    ui->nom_emp_modif->setText(ui->tableView_emp->model()->data(ui->tableView_emp->model()->index(ui->tableView_emp->selectionModel()->currentIndex().row(),1)).toString());
    ui->prenom_emp_modif->setText(ui->tableView_emp->model()->data(ui->tableView_emp->model()->index(ui->tableView_emp->selectionModel()->currentIndex().row(),2)).toString());
    ui->email_emp_modif->setText(ui->tableView_emp->model()->data(ui->tableView_emp->model()->index(ui->tableView_emp->selectionModel()->currentIndex().row(),3)).toString());
    ui->tel_emp_modif->setText(ui->tableView_emp->model()->data(ui->tableView_emp->model()->index(ui->tableView_emp->selectionModel()->currentIndex().row(),4)).toString());
    ui->role_emp_modif->setText(ui->tableView_emp->model()->data(ui->tableView_emp->model()->index(ui->tableView_emp->selectionModel()->currentIndex().row(),5)).toString());
    ui->salaire_emp_modif->setText(ui->tableView_emp->model()->data(ui->tableView_emp->model()->index(ui->tableView_emp->selectionModel()->currentIndex().row(),6)).toString());
    ui->id_emp_modif->setText(ui->tableView_emp->model()->data(ui->tableView_emp->model()->index(ui->tableView_emp->selectionModel()->currentIndex().row(),0)).toString());
    ui->stackedWidget->setCurrentIndex(1);


}

void empfou::on_modifier_emp_clicked()
{
ajout->play();
int IDE=ui->id_emp_modif->text().toInt();
QString NOM=ui->nom_emp_modif->text();
QString PRENOM=ui->prenom_emp_modif->text();
QString EMAIL=ui->email_emp_modif->text();
int TEL=ui->tel_emp_modif->text().toInt();
QString ROLE=ui->role_emp_modif->text();
int SALAIRE=ui-> salaire_emp_modif ->text().toInt();

FOURNISSEURS f;
//produit p;

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


void empfou::on_Valider_emp_clicked()

{
ajout->play();
    QRegExp regex1 ("[a-z]$");
    QRegExp regex2 ("^[a-z]");
    QRegExp regex3("\\b[a-z0-9._%+-]+@[a-z0-9.-]+\\.[a-z]{2,4}\\b");
    QString msg_nom ="nom invalide";
    QString msg_lieu ="prenom invalide";
     QString msg_tel ="num invalide";
      QString msg_prix ="salaire inva";
      QString msg_date ="email inva";
     QString msg_role ="role invalide";

    QString msg_vide="";

    int IDE=ui->id_emp->text().toInt();
    QString NOM=ui->nom_emp->text();
    QString PRENOM=ui->prenom_emp->text();
    QString EMAIL=ui->email_emp->text();
    int TEL=ui->tel_emp->text().toInt();
    QString ROLE=ui->role_emp->text();
    int SALAIRE=ui->salaire_emp->text().toInt();



    EMPLOYES F(IDE,NOM,PRENOM,EMAIL,TEL,ROLE,SALAIRE);
    if ((!NOM.contains(regex1))||(!NOM.contains(regex2)))
    {
        ui->nom_emp->setStyleSheet("QLineEdit { color: red;}");
        ui->text_nom->setText(msg_nom);
        ui->text_nom->setStyleSheet("QLabel { background-color : transparent; color : red; }");
        F.setValide();
    }
    else { ui->nom_emp->setStyleSheet("QLineEdit { color: black;}");
        ui->text_nom->setText(msg_vide);

    }

    if ((!PRENOM.contains(regex1))||(!PRENOM.contains(regex2)))
    {
        ui->prenom_emp->setStyleSheet("QLineEdit { color: red;}");
        ui->text_lieu->setText(msg_lieu);
        ui->text_lieu->setStyleSheet("QLabel { background-color : transparent; color : red; }");
        F.setValide();
    }
    else { ui->prenom_emp->setStyleSheet("QLineEdit { color: black;}");
        ui->text_lieu->setText(msg_vide);

    }

    if((TEL<1000000)||(TEL>999999999))
    {
        ui->tel_emp->setStyleSheet("QLineEdit { color: red;}");
        ui->text_prix->setText(msg_tel);
        ui->text_prix->setStyleSheet("QLabel { background-color : transparent; color : red; }");
        F.setValide();
    }
    else { ui->tel_emp->setStyleSheet("QLineEdit { color: black;}");
        ui->text_prix->setText(msg_vide);

    }

    if (!EMAIL.contains(regex3))
    {
        ui->email_emp->setStyleSheet("QLineEdit { color: red;}");
        ui->text_date->setText(msg_date);
        ui->text_date->setStyleSheet("QLabel { background-color : transparent; color : red; }");
        F.setValide();
    }
    else { ui->email_emp->setStyleSheet("QLineEdit { color: black;}");
        ui->text_date->setText(msg_vide);

    }
    if ((!ROLE.contains(regex1))||(!ROLE.contains(regex2)))
    {
        ui->prenom_emp->setStyleSheet("QLineEdit { color: red;}");
        ui->text_lieu->setText(msg_role);
        ui->text_lieu->setStyleSheet("QLabel { background-color : transparent; color : red; }");
        F.setValide();
    }
    else { ui->prenom_emp->setStyleSheet("QLineEdit { color: black;}");
        ui->text_lieu->setText(msg_vide);
    }

    if ((SALAIRE<500)||(SALAIRE>5000))
     {
         ui->salaire_emp->setStyleSheet("QLineEdit { color: red;}");
         ui->text_nb->setText(msg_prix);
         ui->text_nb->setStyleSheet("QLabel { background-color : transparent; color : red; }");
         F.setValide();
     }
     else { ui->salaire_emp->setStyleSheet("QLineEdit { color: black;}");
         ui->text_nb->setText(msg_vide);}



    if (F.getValide()==0)
    {
    if(F.ajouter()){
        ui->nom_emp->setStyleSheet("QLineEdit { color: green;}");
        ui->prenom_emp->setStyleSheet("QLineEdit { color: green;}");
        ui->email_emp->setStyleSheet("QLineEdit { color: green;}");
        ui->tel_emp->setStyleSheet("QLineEdit { color: green;}");
        ui->role_emp->setStyleSheet("QLineEdit { color: green;}");
        ui->salaire_emp->setStyleSheet("QLineEdit { color: green;}");

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
void empfou::on_Annuler_emp_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    son->play();
}

void empfou::on_emp_clicked()
{   EMPLOYES e;
    e.afficher(ui);
    ui->stackedWidget_ajout->setCurrentIndex(1);
    son->play();
}


void empfou::on_ajouter_emp_clicked()
{ EMPLOYES e;
 son->play();
    ui->stackedWidget_ajout->setCurrentIndex(0);
    e.ajouter();
}


void empfou::on_supprimer_four_clicked()
{
    FOURNISSEURS s;
     supp->play();
    s.Supprimer_FOURNISSEURS(ui);
    s.afficher_FOURNISSEURS(ui);
}




void empfou::on_comboBox_four_currentIndexChanged(int index)
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

void empfou::on_search_four_clicked()
{
    FOURNISSEURS s;
    ajout->play();
    s.Recherche_FOURNISSEURS(ui);

}

void empfou::on_tableView_four_doubleClicked(const QModelIndex &index)
{
    ui->nom_four_modif->setText(ui->tableView_four->model()->data(ui->tableView_four->model()->index(ui->tableView_four->selectionModel()->currentIndex().row(),1)).toString());
    ui->prenom_four_modif->setText(ui->tableView_four->model()->data(ui->tableView_four->model()->index(ui->tableView_four->selectionModel()->currentIndex().row(),2)).toString());
    ui->email_four_modif->setText(ui->tableView_four->model()->data(ui->tableView_four->model()->index(ui->tableView_four->selectionModel()->currentIndex().row(),3)).toString());
    ui->tel_four_modif->setText(ui->tableView_four->model()->data(ui->tableView_four->model()->index(ui->tableView_four->selectionModel()->currentIndex().row(),4)).toString());
    ui->id_four_modif->setText(ui->tableView_four->model()->data(ui->tableView_four->model()->index(ui->tableView_four->selectionModel()->currentIndex().row(),0)).toString());
    ui->stackedWidget_2->setCurrentIndex(2);

}

void empfou::on_modifier_four_clicked()
{

ajout->play();
int IDE=ui->id_four_modif->text().toInt();
QString NOM=ui->nom_four_modif->text();
QString PRENOM=ui->prenom_four_modif->text();
QString EMAIL=ui->email_four_modif->text();
int TEL=ui->tel_four_modif->text().toInt();
FOURNISSEURS s;
produit p;
FOURNISSEURS e(IDE,NOM,PRENOM,EMAIL,TEL,p.recupererID(ui->produit_four->currentText()));
    if(e.modifier_FOURNISSEURS())
    {
        QMessageBox ::information(this,"","FOURNISSEURS modifié")  ;
        ui->stackedWidget_2->setCurrentIndex(1);
        e.afficher_FOURNISSEURS(ui);
    }
    else
    { QMessageBox ::critical(this,"","erreur de modification") ;}
}


void empfou::on_four_clicked()
{
    FOURNISSEURS s;
    son->play();
    s.afficher_FOURNISSEURS(ui);
    ui->stackedWidget_2->setCurrentIndex(1);
}

void empfou::on_ajouter_four_clicked()
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


            int IDF=ui->id_four->text().toInt();
            QString NOM=ui->nom_four->text();
            QString PRENOM=ui->prenom_four->text();
            QString EMAIL=ui->email_four->text();
            int TEL=ui->tel_four->text().toInt();
            produit p;

            FOURNISSEURS F(IDF,NOM,PRENOM,EMAIL,TEL,p.recupererID(ui->produit_four->currentText()));
            if ((!NOM.contains(regex1))||(!NOM.contains(regex2)))
            {
                ui->nom_four->setStyleSheet("QLineEdit { color: red;}");
                ui->text_nom_four->setText(msg_noms);
                ui->text_nom_four->setStyleSheet("QLabel { background-color : transparent; color : red; }");
                F.setValide();
            }
            else { ui->nom_four->setStyleSheet("QLineEdit { color: black;}");
                ui->text_nom_four->setText(msg_vide);

            }
            if ((!PRENOM.contains(regex1))||(!PRENOM.contains(regex2)))
            {
                ui->prenom_four->setStyleSheet("QLineEdit { color: red;}");
                ui->text_prenom_four->setText(msg_type);
                ui->text_prenom_four->setStyleSheet("QLabel { background-color : transparent; color : red; }");
                F.setValide();
            }
            else { ui->prenom_four->setStyleSheet("QLineEdit { color: black;}");
                ui->prenom_four->setText(msg_vide);

            }


            if (!EMAIL.contains(regex3))
            {
                ui->email_four->setStyleSheet("QLineEdit { color: red;}");
                ui->text_email_four->setText(msg_email);
                ui->text_email_four->setStyleSheet("QLabel { background-color : transparent; color : red; }");
                F.setValide();
            }
            else { ui->email_four->setStyleSheet("QLineEdit { color: black;}");
                ui->email_four->setText(msg_vide);

            }

            if ((TEL<1000000)||(TEL>999999999))
            {
                ui->tel_four->setStyleSheet("QLineEdit { color: red;}");
                ui->text_tel_four->setText(msg_tel);
                ui->text_tel_four->setStyleSheet("QLabel { background-color : transparent; color : red; }");
                F.setValide();
            }
            else { ui->tel_four->setStyleSheet("QLineEdit { color: black;}");
                ui->text_prix->setText(msg_vide);

            }


           if (F.getValide()==0){
            //bool test=F.ajouter();
            if(F.ajouter()){
                ui->text_nom_four->setStyleSheet("QLineEdit { color: green;}");
                ui->text_prenom_four->setStyleSheet("QLineEdit { color: green;}");
                ui->text_email_four->setStyleSheet("QLineEdit { color: green;}");
                ui->text_tel_four->setStyleSheet("QLineEdit { color: green;}");
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
    };
}



void empfou::on_four_ajout_clicked()
{
    FOURNISSEURS s;
    son->play();
    s.ajouter();
    ui->stackedWidget_2->setCurrentIndex(0);
}

void empfou::on_Annuler_four_modif_clicked()
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
         ui->tableView_emp->setModel(model);
};

void empfou::on_buttonon_clicked()
{
    Ar.write_to_arduino("1"); //envoyer 1 à arduino
    ui->label_etat->setText("ON");
}


void empfou::on_buttonoff_clicked()
{
    Ar.write_to_arduino("0"); //envoyer 0 à arduino
    ui->label_etat->setText("OFF");
}

void empfou::Timefunction()
{
    /*
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    ui->label_date_time->setText(time_text);
    */

    ui->lbl_time->setText(QTime::currentTime().toString("hh:mm:ss"));
}



void empfou::on_actualiser_clicked()
{

    FOURNISSEURS F;
    son->play();
    F.afficher_FOURNISSEURS(ui);


}

void empfou::on_push_photo_emp_clicked()
{
    son->play();

        QString filePh= QFileDialog::getOpenFileName(this,tr("choose"),"",tr("Images (*.png *.jpg *.jpeg "));
        if (QString::compare(filePh,QString())!=0)
        {
          QImage PHOTO;
          bool valid =PHOTO.load(filePh);
          if (valid)
          {
              ui->image->setPixmap(QPixmap::fromImage(PHOTO.scaled(191,91,Qt::KeepAspectRatio)));
              //ui->label_pic->setPixmap(pix.scaled(400,200,Qt::KeepAspectRatio));
          }

        }

}

void empfou::on_pushButton_modifier_clicked()
{
  QFile file ("C:/Users/samar/Desktop/myfile.txt");
  if (!file.open(QFile::Append | QFile::Text))
  {QMessageBox::warning(this,"title","file not open");
  }
  QTextStream out(&file);
  QString text=ui->TextEdit_text->toPlainText();
  out << text;
  file.flush();
  file.close();
}

void empfou::on_pushButton_lire_clicked()
{
    QFile file ("C:/Users/samar/Desktop/myfile.txt");
    if (!file.open(QFile::ReadOnly | QFile::Text))
    {QMessageBox::warning(this,"title","file not open");
    }
    QTextStream in(&file);
    QString text=in.readAll();
    ui->TextEdit_text->setPlainText(text);
    file.close();

}

