#include "sport_entraineur.h"
#include "ui_sport_entraineur.h"
#include"entraineur.h"
#include"sport.h"
#include<QDebug>
#include <QMessageBox>
#include <QMediaPlayer>
#include <QObject>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QPropertyAnimation>
#include <QPainter>
#include <QSound>
#include "smtp_entraineur.h"
#include "email_entraineur.h"
#include "QPixmap"
#include "video.h"

sport_entraineur::sport_entraineur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sport_entraineur)
{
    ui->setupUi(this);
    son=new QSound(":/sons/bruit-clic.wav");
             supp=new QSound(":/sons/supprimer.wav");
              ajout=new QSound(":/sons/ajouter.wav");
    entraineur e ;

    e.afficher(ui);
    sport s;
    s.afficher_sport(ui);
    s.afficher_sport(ui);


    QList<sport> fi=s.afficherRole();
    QStringList l;

    for(int i=0;i<fi.size();i++)
    {
  sport fo;
       fo=fi.at(i);
       l.append(fo.getNom());
    }ui->sport_2->addItem("");
    ui->sport_2->addItems(l);
}

sport_entraineur::~sport_entraineur()
{
    delete ui;
}

void  sport_entraineur::on_supprimer_clicked()
{
    supp->play();
    sport e;
    e.Supprimer_sport(ui);
    e.afficher_sport(ui);
}

void  sport_entraineur::on_comboBox_currentIndexChanged(int index)
{
    sport e;
    if (index==0)
    {e.Tri_NOM(ui);

    }

    else if(index==1)
    {  e.Tri_DAT(ui);

    }
    else
    {e.Tri_NB(ui);
    }
}




void  sport_entraineur::on_search_clicked()
{
    sport e;
    son->play();
  e.Recherche_sport(ui);

}

void sport_entraineur::on_tableView_doubleClicked(const QModelIndex &index)
{
    ui->nom_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),1)).toString());
    ui->nb_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),2)).toString());
    //ui->tel_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),4)).toString());
    ui->date_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),3)).toString());
    ui->id_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString());
    ui->stackedWidget->setCurrentIndex(1);

}

void sport_entraineur::on_modifier_clicked()
{

   ajout->play();
   int id=ui->id_modif->text().toInt();
   QString nom=ui->nom_modif->text();
   QString dat=ui->date_modif->text();
   int nb=ui->nb_modif->text().toInt();

 sport   e(id,nom,dat,nb);
       if(e.modifier_sport(ui))
       {
           QMessageBox ::information(this,"","sport modifié")  ;
           ui->stackedWidget->setCurrentIndex(0);
           e.afficher_sport(ui);
       }
       else
       { QMessageBox ::critical(this,"","erreur de modification") ;}

}


void sport_entraineur::on_Valider_clicked()

{
    ajout->play();
    QRegExp regex1 ("[a-z]$");
    QRegExp regex2 ("^[a-z]");

    QString msg_noms ="nom invalide";
    QString msg_nb ="type invalide";
    QString msg_vide="";

    int id=ui->id->text().toInt();
    QString NOM=ui->nom->text();
    QString dat=ui->date->text();

     int nb=ui->nb->text().toInt();

    sport F(id,NOM,dat,nb);

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
    if ((nb<2)||(nb>50))
    {
        ui->nb->setStyleSheet("QLineEdit { color: red;}");
        ui->text_nb->setText(msg_nb);
        ui->text_nb->setStyleSheet("QLabel { background-color : transparent; color : red; }");
        F.setValide();
    }
    else { ui->nb->setStyleSheet("QLineEdit { color: black;}");
        ui->text_nb->setText(msg_vide);

    }


    if (F.getValide()==0)
    {
    if(F.ajouter()){
        ui->nom->setStyleSheet("QLineEdit { color: green;}");
        ui->nb->setStyleSheet("QLineEdit { color: green;}");
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout de sport succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        QList<sport> fi=F.afficherRole();

        QStringList l;

        ui->sport_2->clear();

          for(int i=0;i<fi.size();i++)
          {
        sport fo;
             fo=fi.at(i);
             l.append(fo.getNom());
          }
          //ui->sport_2->addItem("");
          ui->sport_2->addItems(l);




         ui->stackedWidget_ajout->setCurrentIndex(1);
         F.afficher_sport(ui);
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("ajout failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }

}
}


void sport_entraineur::on_Annuler_clicked()
{
    son->play();
    ui->stackedWidget->setCurrentIndex(0);
}

void sport_entraineur::on_sport_clicked()
{   son->play();
    sport e;
    e.afficher_sport(ui);
    ui->stackedWidget_ajout->setCurrentIndex(1);
}

void sport_entraineur::on_annuler_clicked()
{ sport e;
son->play();
    ui->stackedWidget_ajout->setCurrentIndex(0);
    e.ajouter();

}


void sport_entraineur::on_supprimer_2_clicked()
{
    supp->play();
    entraineur s;
    s.Supprimer(ui);
    s.afficher(ui);
}




void sport_entraineur::on_comboBox_2_currentIndexChanged(int index)
{

    entraineur s;
    if (index==0)
    {s.Tri_NOM(ui);

    }

    else if(index==1)
    {  s.Tri_prenom(ui);

    }
    else
    {s.Tri_DATE(ui);
    }
}

void sport_entraineur::on_search_2_clicked()
{
    ajout->play();
    entraineur s;
    s.Recherche(ui);
}

void sport_entraineur::on_tableView_2_doubleClicked(const QModelIndex &index)
{
    ui->nom_modif_en->setText(ui->tableView_4->model()->data(ui->tableView_4->model()->index(ui->tableView_4->selectionModel()->currentIndex().row(),1)).toString());
    ui->prenom_modif_en->setText(ui->tableView_4->model()->data(ui->tableView_4->model()->index(ui->tableView_4->selectionModel()->currentIndex().row(),2)).toString());
    ui->dat_modif_en->setText(ui->tableView_4->model()->data(ui->tableView_4->model()->index(ui->tableView_4->selectionModel()->currentIndex().row(),5)).toString());
     ui->tel_modif_en->setText(ui->tableView_4->model()->data(ui->tableView_4->model()->index(ui->tableView_4->selectionModel()->currentIndex().row(),4)).toString());

    ui->id_modif_en->setText(ui->tableView_4->model()->data(ui->tableView_4->model()->index(ui->tableView_4->selectionModel()->currentIndex().row(),0)).toString());
    ui->stackedWidget_2->setCurrentIndex(2);

}

void sport_entraineur::on_modifier_2_clicked()
{

ajout->play();
int id=ui->id_modif_en->text().toInt();
QString nom=ui->nom_modif_en->text();
QString prenom=ui->prenom_modif_en->text();
QString dat=ui->dat_modif_en->text();
QString email=ui->email_modif->text();
int tel=ui->tel_modif_en->text().toInt();
sport f;
entraineur e(id,nom,prenom,dat,email,tel,f.recupererID(ui->sport_2->currentText()));
    if(e.modifier(ui))
    {
        QMessageBox ::information(this,"","entraineur modifié")  ;
        ui->stackedWidget_2->setCurrentIndex(1);
        e.afficher(ui);
    }
    else
    { QMessageBox ::critical(this,"","erreur de modification") ;}
}

void sport_entraineur::on_ajouter_clicked()
{
    ajout->play();
        QRegExp regex1 ("[a-z]$");
        QRegExp regex2 ("^[a-z]");
        QRegExp regex3("\\b[a-z0-9._%+-]+@[a-z0-9.-]+\\.[a-z]{2,4}\\b");
        QString msg_nom ="nom invalide";
        QString msg_prenom ="prenom invalide";
         QString msg_email ="email invalide";

        QString msg_vide="";

        int id=ui->id_ent->text().toInt();
        QString nom=ui->nom_ent->text();
        QString prenom=ui->prenom_ent->text();
        QString DAT=ui->date_ent->text();
        int tel=ui->tel_ent->text().toInt();
         QString email=ui->email_ent->text();

sport f;

        entraineur F(id,nom,prenom,DAT,email,tel,f.recupererID(ui->sport_2->currentText()));
        if ((!nom.contains(regex1))||(!nom.contains(regex2)))
        {
            ui->nom_ent->setStyleSheet("QLineEdit { color: red;}");
            ui->text_nom->setText(msg_nom);
            ui->text_nom->setStyleSheet("QLabel { background-color : transparent; color : red; }");
            F.setValide();
        }
        else { ui->nom_ent->setStyleSheet("QLineEdit { color: black;}");
            ui->text_nom->setText(msg_vide);

        }

        if ((!prenom.contains(regex1))||(!prenom.contains(regex2)))
        {
            ui->prenom_ent->setStyleSheet("QLineEdit { color: red;}");
            ui->text_prenom->setText(msg_prenom);
            ui->text_prenom->setStyleSheet("QLabel { background-color : transparent; color : red; }");
            F.setValide();
        }
        else { ui->prenom_ent->setStyleSheet("QLineEdit { color: black;}");
            ui->text_prenom->setText(msg_vide);

        }

        if (!email.contains(regex3))
        {
            ui->email_ent->setStyleSheet("QLineEdit { color: red;}");
            ui->text_email->setText(msg_email);
            ui->text_email->setStyleSheet("QLabel { background-color : transparent; color : red; }");
            F.setValide();
        }
        else { ui->email_ent->setStyleSheet("QLineEdit { color: black;}");
            ui->text_email->setText(msg_vide);

        }


        if (F.getValide()==0)
        {
        if(F.ajouter()){
            ui->nom_ent->setStyleSheet("QLineEdit { color: green;}");
            ui->prenom_ent->setStyleSheet("QLineEdit { color: green;}");

              ui->email_ent->setStyleSheet("QLineEdit { color: green;}");
            QMessageBox::information(nullptr, QObject::tr("OK"),
                        QObject::tr("ajout de entraineur succesful.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
              //ui->tableView->setModel(F.afficher());
            ui->stackedWidget_2->setCurrentIndex(1);
            F.afficher(ui);
        }
        else{

            QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                        QObject::tr("ajout failed.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }



    }
}

void sport_entraineur::on_traiter_clicked()
{
    son->play();
    entraineur s;
    s.afficher(ui);
    ui->stackedWidget_2->setCurrentIndex(1);

}

void sport_entraineur::on_entraineur_ajout_clicked()
{
    son->play();
    entraineur s;
    ui->stackedWidget_2->setCurrentIndex(0);
    s.ajouter();
}

void sport_entraineur::on_Annuler_2_clicked()
{
    son->play();
    ui->stackedWidget_2->setCurrentIndex(1);
}


void sport_entraineur::on_image_clicked()
{
son->play();
   sport s;
   s.image();

}

void sport_entraineur::on_mailing_clicked()
{
    QDialog *d=new Dialog(this);
    d->show();

    d->exec();
}

void sport_entraineur::on_tableView_4_doubleClicked(const QModelIndex &index)
{
    ui->nom_modif_en->setText(ui->tableView_4->model()->data(ui->tableView_4->model()->index(ui->tableView_4->selectionModel()->currentIndex().row(),1)).toString());
    ui->prenom_modif_en->setText(ui->tableView_4->model()->data(ui->tableView_4->model()->index(ui->tableView_4->selectionModel()->currentIndex().row(),2)).toString());
    ui->dat_modif_en->setText(ui->tableView_4->model()->data(ui->tableView_4->model()->index(ui->tableView_4->selectionModel()->currentIndex().row(),5)).toString());
     ui->tel_modif_en->setText(ui->tableView_4->model()->data(ui->tableView_4->model()->index(ui->tableView_4->selectionModel()->currentIndex().row(),4)).toString());

    ui->id_modif_en->setText(ui->tableView_4->model()->data(ui->tableView_4->model()->index(ui->tableView_4->selectionModel()->currentIndex().row(),0)).toString());
    ui->stackedWidget_2->setCurrentIndex(2);

}

void sport_entraineur::on_btn_image_clicked()
{ son->play();
    QString filename= QFileDialog::getOpenFileName(this,tr("choose"),"",tr("Images (*.png *.jpg *.jpeg"));
    if (QString::compare(filename,QString())!=0)
    {
      QImage image_2;
      bool valid =image_2.load(filename);
      if (valid)
      {   image_2= image_2.scaledToWidth(ui->image_2->width(),Qt::SmoothTransformation);
          ui->image_2->setPixmap(QPixmap::fromImage(image_2));
      }
      else {// error
      }
    }
}

void sport_entraineur::on_inserer_image_clicked()
{ son->play();
    QString filename= QFileDialog::getOpenFileName(this,tr("choose"),"",tr("Images (*.png *.jpg *.jpeg"));
    if (QString::compare(filename,QString())!=0)
    {
      QImage label_image;
      bool valid =label_image.load(filename);
      if (valid)
      {   label_image= label_image.scaledToWidth(ui->label_image->width(),Qt::SmoothTransformation);
          ui->label_image->setPixmap(QPixmap::fromImage(label_image));
      }
      else {// error
      }
    }
}

void sport_entraineur::on_afficher_clicked()
{
    entraineur e;
    e.test(ui);
}


void sport_entraineur::on_pushButton_clicked()
{
    video1=new video(this);
     video1->show();
}

void sport_entraineur::on_pushButton_2_clicked()
{
   sport s;
   s.calculer(ui);
}
