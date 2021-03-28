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
    ui->date_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),5)).toString());
    ui->id_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString());
    ui->stackedWidget->setCurrentIndex(1);

}

void sport_entraineur::on_modifier_clicked()
{
    sport e;
   ajout->play();
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
    //QRegExp regex3("\\b[a-z0-9._%+-]+@[a-z0-9.-]+\\.[a-z]{2,4}\\b");
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
         //ui->prix->setStyleSheet("QLineEdit { color: green;}");
          //ui->nb->setStyleSheet("QLineEdit { color: green;}");
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout de entraineur succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
          //ui->tableView->setModel(F.afficher());
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("ajout failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
    /*
    QPropertyAnimation *animation;
    animation = new QPropertyAnimation(ui->Valider,"geometry");
    animation->setDuration(1000);
    animation->setStartValue(QRect(420,460,111,23));
    animation->setEndValue(QRect(540,560,130,23));
    animation->setEasingCurve(QEasingCurve::InOutQuint);

    animation->start();*/
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
    entraineur s;
ajout->play();
    if(s.modifier(ui))
    {
        QMessageBox ::information(this,"","entraineur modifié")  ;
        ui->stackedWidget_2->setCurrentIndex(1);
        s.afficher(ui);
    }
    else
    { QMessageBox ::critical(this,"","erreur de modification") ;}
}

void sport_entraineur::on_ajouter_clicked()
{
    ajout->play();
   /* QRegExp regex1 ("[a-z]$");
        QRegExp regex2 ("^[a-z]");
        QString msg_nom ="nom invalide";
        QString msg_prenom ="prenom invalide";
         QString msg_date ="date invalide";
          QString msg_tel ="tel inva";
    int id=ui->id_ent->text().toInt();
        QString nom=ui->nom_ent->text();
        QString prenom=ui->prenom_ent->text();
        QString dat=ui->date_ent->text();
        QString email=ui->email_ent->text();
        int tel=ui->tel_ent->text().toInt();




        entraineur F(id,nom,prenom,dat,email,tel);

        bool test=F.ajouter();
        if(test){
            QMessageBox::information(nullptr, QObject::tr("OK"),
                        QObject::tr("ajout de l'entraineur succesful.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
              //ui->tableView->setModel(F.afficher());
        }
        else{

            QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                        QObject::tr("ajout failed.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }*/






        QRegExp regex1 ("[a-z]$");
        QRegExp regex2 ("^[a-z]");
        QRegExp regex3("\\b[a-z0-9._%+-]+@[a-z0-9.-]+\\.[a-z]{2,4}\\b");
        QString msg_nom ="nom invalide";
        QString msg_prenom ="prenom invalide";
         QString msg_email ="email invalide";
         // QString msg_date ="date inva";
          //QString msg_tel="tel inval"

        QString msg_vide="";

        int id=ui->id->text().toInt();
        QString nom=ui->nom_ent->text();
        QString prenom=ui->prenom_ent->text();
        QString DAT=ui->date_ent->text();
        int tel=ui->tel_ent->text().toInt();
         QString email=ui->email_ent->text();



        entraineur F(id,nom,prenom,DAT,email,tel);
        if ((nom.contains(regex1))||(!nom.contains(regex2)))
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
             //ui->date_ent->setStyleSheet("QLineEdit { color: green;}");
              ui->email_ent->setStyleSheet("QLineEdit { color: green;}");
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
