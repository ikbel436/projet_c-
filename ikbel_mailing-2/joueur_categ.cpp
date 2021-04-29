#include "joueur_categ.h"
#include "ui_joueur_categ.h"
#include"joueurs.h"
#include"categories.h"
#include<QDebug>
#include <QMessageBox>
#include <QPdfWriter>
#include <QPainter>
#include <QPaintEvent>
#include <QIntValidator>
#include <QObject>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>

#include"exportexcelobject.h"
#include "smtp_joueur.h"
#include "email.h"
#include "sport.h"
joueur_categ::joueur_categ(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::joueur_categ)
{
    ui->setupUi(this);
    this->setStyleSheet("color: darkblue; background-color: ");
    son=new QSound(":/sons/bruit-clic.wav");
         supp=new QSound(":/sons/supprimer.wav");
          ajout=new QSound(":/sons/ajouter.wav");
     player=new QMediaPlayer(this);
    QRegExp rx("(|\"|/|\\.,|[A-Z,a-z]){30}");
       QRegExp mailREX("\\b[a-z0-9._%+-]+@[a-z0-9.-]+\\.[a-z]{2,4}\\b");
                 ui->prenom->setValidator(new QRegExpValidator(rx, this));
                 ui->nom->setValidator(new QRegExpValidator(rx, this));

                 ui->email->setValidator(new QRegExpValidator(mailREX, this));
           QIntValidator*roll=new
                   QIntValidator(100000000,99999999);
           QIntValidator*roll1=new
                   QIntValidator(100000000,99999999);

           ui->tel->setValidator(roll1);
           ui->id->setValidator(roll1);
    //this->setStyleSheet("{background-image: url(:Desktop\téléchargement.jpg);}");
    //QPixmap x(":/icons/téléchargement.jpg");
    //ui->background->setPixmap(x);
    JOUEURS e ;
    e.afficher(ui);
    categories s;
    s.afficher(ui);



    QList<categories> fi=s.afficherRole();
    QStringList l;

    for(int i=0;i<fi.size();i++)
    {
  categories fo;
       fo=fi.at(i);
       l.append(fo.getNOM());
    }ui->categ->addItem("");
    ui->categ->addItems(l);
/**************************/


      /************/
      sport s1;
      QList<sport> fi1=s1.afficherRole();
      QStringList l1;

      for(int i=0;i<fi1.size();i++)
      {
    sport fo;
         fo=fi1.at(i);
         l1.append(fo.getNom());
      }ui->sport_2->addItem("");
      ui->sport_2->addItems(l1);

}

joueur_categ::~joueur_categ()
{
    delete ui;
}


void joueur_categ::on_supprimer_clicked()
{
    JOUEURS e;
    supp->play();
    e.Supprimer(ui);
    e.afficher(ui);
}

void joueur_categ::on_comboBox_currentIndexChanged(int index)
{
    JOUEURS e;
    if (index==0)
    {e.Tri_NOM(ui);

    }

    else if(index==1)
    {  e.Tri_ID(ui);

    }
    else
    {e.Tri_DATE(ui);
    }
}




void joueur_categ::on_search_clicked()
{
    JOUEURS e;
    son->play();
  e.Recherche(ui);

}




void joueur_categ::on_tableView_doubleClicked(const QModelIndex &index)
{   son->play();
    ui->nom_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),1)).toString());
    ui->prenom_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),2)).toString());
    ui->email_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),4)).toString());
    ui->date_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),3)).toString());
    ui->id_2->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString());
    ui->stackedWidget->setCurrentIndex(1);

}

void joueur_categ::on_modifier_clicked()
{int id=ui->id_2->text().toInt();
    QString nom=ui->nom_modif->text();
    QString prenom=ui->prenom_modif->text();
    QString date_n=ui->date_modif->text();
    QString email=ui->email_modif->text();
     int tel=ui->tel->text().toInt();


categories e;
sport s;

    JOUEURS F(id,nom,prenom,date_n,email,tel,e.recupererID(ui->categ->currentText()),s.recupererID(ui->sport_2->currentText()));


  ajout->play();
    if(F.modifier(ui))
    {
        QMessageBox ::information(this,"","joueur modifié")  ;
        ui->stackedWidget->setCurrentIndex(0);
        F.afficher(ui);
    }
    else
    { QMessageBox ::critical(this,"","erreur de modification") ;}

}


void joueur_categ::on_Valider_clicked()

{ajout->play();
int id=ui->id->text().toInt();
    QString nom=ui->nom->text();
    QString prenom=ui->prenom->text();
    QString date_n=ui->daten->text();
    QString email=ui->email->text();
     int tel=ui->tel->text().toInt();

categories e;
sport s;
    JOUEURS F(id,nom,prenom,date_n,email,tel,e.recupererID(ui->categ->currentText()),s.recupererID(ui->sport_2->currentText()));

    bool test=F.ajouter();
    if(test){

        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout du joueur succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
          //ui->tableView->setModel(F.afficher());


    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("ajout failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        player->setMedia(QUrl::fromLocalFile("C:/Users/Espace Sboui/Downloads/Music/bruit-clic.mp3"));
                    player->play();
                    qDebug()<<player ->errorString();
    }
}


void joueur_categ::on_Annuler_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    son->play();
   // player->setMedia(QUrl::fromLocalFile("C:/Users/Espace Sboui/Downloads/Music/bruit-clic.mp3"));
     //  player->play();
     //  qDebug()<<player ->errorString();
}

void joueur_categ::on_event_clicked()
{  // player->setMedia(QUrl::fromLocalFile("C:/Users/Espace Sboui/Downloads/Music/bruit-clic.mp3"));
   // player->play();
  //  qDebug()<<player ->errorString();

    JOUEURS e;
    son->play();
    e.afficher(ui);
    ui->stackedWidget_ajout->setCurrentIndex(1);
}

void joueur_categ::on_annuler_clicked()
{ JOUEURS e;
son->play();
    ui->stackedWidget_ajout->setCurrentIndex(0);
    //player->setMedia(QUrl::fromLocalFile("C:/Users/Espace Sboui/Downloads/Music/bruit-clic.mp3"));
    //   player->play();
    //   qDebug()<<player ->errorString();
    e.ajouter();

}

/*void joueur_categ::on_pdf_clicked()
{
    EVENT e;
    e.pdf(ui);
}*/

void joueur_categ::on_excel_5_clicked()
{   ajout->play();
    QPdfWriter pdf("C:/Users/Espace Sboui/Desktop/ikbel_mailing/PDF/pdf");
                          QPainter painter(&pdf);
                         int i = 4000;
                              painter.setPen(Qt::blue);
                              painter.setFont(QFont("Arial", 40));
                              painter.drawText(3000,2000,"Liste Des joueurs");
                              painter.setPen(Qt::black);
                              painter.setFont(QFont("Arial", 30));
                             //painter.drawText(1100,2000,afficheDC);
                              painter.drawRect(100,100,9300,2800);



                              painter.drawRect(0,3000,9600,500);
                              painter.setFont(QFont("Arial", 9));
                              painter.drawText(200,3300,"id");
                              painter.drawText(1300,3300,"nom");
                              painter.drawText(2500,3300,"prenom");
                              painter.drawText(3100,3300,"date_n ");
                              painter.drawText(5100,3300,"email ");
                               painter.drawText(6100,3300,"tel ");





                              QSqlQuery query;
                              query.prepare("select * from joueurs");

                              query.exec();
                              while (query.next())
                              {
                                  painter.drawText(200,i,query.value(0).toString());
                                  painter.drawText(1300,i,query.value(1).toString());
                                  painter.drawText(2200,i,query.value(2).toString());
                                    painter.drawText(2900,i,query.value(3).toString());
                                    painter.drawText(3700,i,query.value(4).toString());
                                    painter.drawText(6100,i,query.value(5).toString());
                                    painter.drawText(8100,i,query.value(6).toString());




                                 i = i + 500;
                              }
                              QMessageBox::information(nullptr, QObject::tr("PDF "),
                                                QObject::tr(" PDF ajouté a pfd.\n"
                                                            "Click Cancel to exit."), QMessageBox::Cancel);
}

void joueur_categ::on_Valider_2_clicked()
{  ajout->play();
    int id=ui->id_3->text().toInt();
    QString nom=ui->nom_2->text();
    QString description=ui->desc->text();


    categories F(id,nom,description);

    bool test=F.ajouter();
    if(test){

        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout de categorie succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
          //ui->tableView->setModel(F.afficher());
        QList<categories> fi=F.afficherRole();
          QStringList l;
      ui->categ->clear();

          for(int i=0;i<fi.size();i++)
          {
        categories fo;
             fo=fi.at(i);
             l.append(fo.getNOM());
          }
          //ui->sport_2->addItem("");
          ui->categ->addItems(l);



    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("ajout failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        player->setMedia(QUrl::fromLocalFile("C:/Users/Espace Sboui/Downloads/Music/bruit-clic.mp3"));
                    player->play();
                    qDebug()<<player ->errorString();
    }

}

void joueur_categ::on_event_2_clicked()
{ categories e;
     son->play();
    e.afficher(ui);
    ui->stackedWidget_2->setCurrentIndex(1);

}

void joueur_categ::on_supprimer_2_clicked()
{ categories e;
     supp->play();
    e.Supprimer(ui);
    e.afficher(ui);

}

void joueur_categ::on_annuler_2_clicked()
{
    categories e;
 son->play();
        ui->stackedWidget_2->setCurrentIndex(0);
       /* player->setMedia(QUrl::fromLocalFile("C:/Users/Espace Sboui/Downloads/Music/bruit-clic.mp3"));
           player->play();
           qDebug()<<player ->errorString();*/
        e.ajouter();
}

void joueur_categ::on_search_2_clicked()
{ categories e;
     ajout->play();
    e.Recherche(ui);

}


void joueur_categ::on_comboBox_2_currentIndexChanged(int index)
{  categories e;
    if (index==0)
    {e.Tri_NOM(ui);

    }

    else
    {  e.Tri_ID(ui);

    }

}

void joueur_categ::on_tableView_2_doubleClicked(const QModelIndex &index)
{  supp->play();
    ui->nom_modif_3->setText(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),1)).toString());
    ui->desc_modif->setText(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),2)).toString());
    ui->id_4->setText(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),0)).toString());
    ui->stackedWidget_2->setCurrentIndex(2);

}

void joueur_categ::on_modifier_2_clicked()
{int id=ui->id_4->text().toInt();
    QString nom=ui->nom_modif_3->text();
    QString description=ui->desc_modif->text();



    categories F(id,nom,description);


     ajout->play();

    if(F.modifier(ui))
    {
        QMessageBox ::information(this,"","categorie modifié")  ;
        ui->stackedWidget_2->setCurrentIndex(1);
        F.afficher(ui);
    }
    else
    { QMessageBox ::critical(this,"","erreur de modification") ;}

}

void joueur_categ::on_Annuler_2_clicked()
{  son->play();
    ui->stackedWidget_2->setCurrentIndex(1);
    /*player->setMedia(QUrl::fromLocalFile("C:/Users/Espace Sboui/Downloads/Music/bruit-clic.mp3"));
       player->play();
       qDebug()<<player ->errorString();*/

}

void joueur_categ::on_mailing_clicked()
{
    QDialog *d=new Dialog(this);
    d->show();

    d->exec();
}
/*
void joueur_categ::on_Valider_3_clicked()
{ int id=ui->id->text().toInt();
    QString nom=ui->nom->text();
    QString prenom=ui->prenom->text();
    QString date_n=ui->daten->text();
    QString email=ui->email->text();
     int tel=ui->tel->text().toInt();

categories e;
    JOUEURS F(id,nom,prenom,date_n,email,tel,e.recupererID(ui->categ->currentText()));



    bool test=F.modifierb();
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("update de joueur succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
         // ui->tableView->setModel(F.afficher());
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("update failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }





}
*/
void joueur_categ::on_insertion_clicked()
{
    son->play();
        QString filename= QFileDialog::getOpenFileName(this,tr("choose"),"",tr("Images (*.png *.jpg *.jpeg"));
        if (QString::compare(filename,QString())!=0)
        {
          QImage label_image;
          bool valid =label_image.load(filename);
          if (valid)
          {   label_image= label_image.scaledToWidth(ui->image->width(),Qt::SmoothTransformation);
              ui->image->setPixmap(QPixmap::fromImage(label_image));
          }
          else {// error
          }
        }
}

void joueur_categ::on_tri_currentIndexChanged(int index1)
{
    JOUEURS e;
    if (index1==0)
    {e.Tri_NOM(ui);

    }

    else if(index1==1)
    {  e.Tri_ID(ui);

    }
    else
    {e.Tri_DATE(ui);
    }
}

void joueur_categ::on_trouver_clicked()
{
    JOUEURS j;
    j.Recherche1(ui);
}
