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
#include "statistiq.h"
#include "ui_statistiq.h"


QString star, mute ;
const QString nom_mag;



Dialog::Dialog(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    player = new QMediaPlayer (this);
    player->setMedia(QUrl("qrc:/images/music.mp3")) ;
    ui->label_musique->setText("music.mp3");

    star="faux";
    mute="faux";
    connect (player, &QMediaPlayer::positionChanged,this,&Dialog::on_positionchanged) ;
    connect (player, &QMediaPlayer::durationChanged,this,&Dialog::on_durationchanged) ;

son=new QSound(":/images/Mouse-Click-00-c-FesliyanStudios.com.wav");

   ui->tabWidget->setCurrentIndex(1);
ui->tabWidget_2->setCurrentIndex(0);




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


}


void Dialog::update_label()
{
  // qDebug()<<"Test";
   parsed_data=Ar.read_from_arduino();

     ui->temp_lcdNumber->display(parsed_data);

     alertt=parsed_data.toFloat();

     if ((alertt>24)&&(alertt<55))
     {
         ui->label_alert->setText("Temperature Elevée !!!");
     }
     else {
          ui->label_alert->setText("  ");
     }
}




void Dialog::on_buttonon_clicked()
{
    Ar.write_to_arduino("1"); //envoyer 1 à arduino
    ui->label_etat->setText("ON");
}

void Dialog::on_buttonoff_clicked()
{
    Ar.write_to_arduino("0"); //envoyer 0 à arduino
    ui->label_etat->setText("OFF");
}






Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_sauvgarderproduit_clicked()
{ son->play();
    QMessageBox::StandardButton reply ;
    reply=QMessageBox::question(this,"ajouter","voulez vous ajouter le produit ?",
                                      QMessageBox::Yes|QMessageBox::No);
    if (reply==QMessageBox::Yes)
    {
    if (verif_produit()==true)
    {

        int id;
            QString nom;
            int nombre;

            float prix ;
            QString categorie ;

            id=(ui->lineEdit_id_2->text()).toInt();
        nom=ui->lineEdit_nom_2->text();
        nombre=(ui->lineEdit_nombre->text()).toInt();
        prix=(ui->lineEdit_prix->text()).toFloat();
        categorie=ui->comboBox_cat->currentText();
        QString mag=ui->combobox_mag->currentText();


      produit c(id,nom,nombre,prix,categorie) ;

       bool test=c.ajouterProduit(mag);
    if (test)
        {

        c.addToHistory("Ajout du " ,"produit",  QString::number(id));
        ui->listhistorique->setModel( c.afficherHistorique(ui));
         c.afficherProduit(ui);
         vider_produit();
        QMessageBox::information(nullptr,QObject::tr("Ajouter un Produit"),
                                         QObject::tr("PRODUIT  ajouté .\n"
                                                     "Click Cancel to exit ."),QMessageBox::Cancel);
        ui->tabWidget_3->setCurrentIndex(1);
         }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("Ajouter un Produit"),
                                         QObject::tr("Erreur.\n"
                                                     "Click Cancel to exit ."),QMessageBox::Cancel);
    }
}

}}

void Dialog::on_pushButton_modifierproduit_clicked()
{son->play();
    QMessageBox::StandardButton reply ;
    reply=QMessageBox::question(this,"modifier","voulez vous modifier le produit ?",
                                      QMessageBox::Yes|QMessageBox::No);
    if (reply==QMessageBox::Yes)
    {

    if (verif_produit()==true)
    {
magasin m;
//m.REMPLIR_COMBO(ui);
        int id;
            QString nom;
           int  nombre;
           float prix ;
            QString categorie,mag  ;

            id=(ui->lineEdit_id_2->text()).toInt();
        nom=ui->lineEdit_nom_2->text();
        nombre=(ui->lineEdit_nombre->text()).toInt();
        prix=(ui->lineEdit_prix->text()).toFloat();
       categorie=ui->comboBox_cat->currentText();

mag =ui->combobox_mag->currentText();


         produit r(id,nom,nombre,prix,categorie) ;

    bool test=r.modifierProduit(mag);

            if (test)
                {
                r.addToHistory("Modification du " ,"produit",  QString::number(id));
                ui->listhistorique->setModel( r.afficherHistorique(ui));
                r.afficherProduit(ui);
                vider_produit();

            QMessageBox::information(nullptr,QObject::tr("Modifier PRODUIT"),
                                             QObject::tr("PRODUIT  Modifié .\n"
                                                         "Click Cancel to exit ."),QMessageBox::Cancel);
            ui->tabWidget_3->setCurrentIndex(1);

                 }

            else
            {
            QMessageBox::critical(nullptr,QObject::tr("Modifier PRODUIT"),
                                             QObject::tr("ereur .\n"
                                                         "Click Cancel to exit ."),QMessageBox::Cancel);
               }
    }

}}

void Dialog::on_tabWidget_3_currentChanged(int index)
{

    if (index==1)
   {
       magasin m;
       m.affichermagasin(ui);
   }
}

void Dialog::on_tabWidget_3_tabBarClicked(int index)
{
    produit c;
     c.afficherProduit(ui);
}

void Dialog::on_tableView_2_activated(const QModelIndex &index)
{
  int idp= ui->tableView_2->model()->index(ui->tableView_2->currentIndex().row(),0).data().toInt();

          produit r ;
         r.selectionnerProduit(ui,idp);
         ui->tabWidget_3->setCurrentIndex(0);
         ui->lineEdit_id_2->setReadOnly(true);
}

void Dialog::on_pushButton_supp_pdt_clicked()
{son->play();
    QSqlQuery qry;
       produit r;


        bool test =r.supprimerproduit(ui);
        if(test)
           {
            r.afficherProduit(ui);
            QMessageBox::information(nullptr,QObject::tr("Supprimer PRODUIT"),
                                             QObject::tr("Produit  supprimé .\n"
                                                         "Click Cancel to exit ."),QMessageBox::Cancel);

           }
        else
        {
            QMessageBox::information(nullptr,QObject::tr("Supprimer PRODUIT"),
                                             QObject::tr("Erreur .\n"
                                                         "Click Cancel to exit ."),QMessageBox::Cancel);
           }

}



void Dialog::on_pushButton_2_clicked()
{ son->play();
    produit p ;
    p.creationpdf();

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
{ son->play();
    produit c ;
    c.recherche(ui);
}

void Dialog::on_btn_ajout_clicked()
{son->play();
    QMessageBox::StandardButton reply ;
    reply=QMessageBox::question(this,"ajouter","voulez vous ajouter le magasin ?",
                                      QMessageBox::Yes|QMessageBox::No);
    if (reply==QMessageBox::Yes)
    {
   if (verif_magasin()==true)
   {

      magasin m (ui->Edit_id->text().toInt(),ui->Edit_nom->text(),ui->Edit_adresse->text(),ui->Edit_bloc->text().toInt()) ;

       bool test=m.ajoutermagasin();
    if (test)
        {
        m.addToHistory("Ajout  du " ,"magasin",  ui->Edit_id->text());
        ui->listhistorique->setModel( m.afficherHistorique(ui));

         m.affichermagasin(ui);

         m.REMPLIR_COMBO(ui);
         vider_mag();
        QMessageBox::information(nullptr,QObject::tr("Ajouter un magasin"),
                                         QObject::tr("magasin ajouté .\n Click Cancel to exit ."),QMessageBox::Cancel);
           ui->tabWidget_2->setCurrentIndex(1);
         }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("Ajouter un magasin"),
                                         QObject::tr("Erreur.\n"
                                                     "Click Cancel to exit ."),QMessageBox::Cancel);
    }

}
}
}
void Dialog::on_btn_modifier_clicked()
{son->play();
    QMessageBox::StandardButton reply ;
    reply=QMessageBox::question(this,"modifier","voulez vous modifier le magasin ?",
                                      QMessageBox::Yes|QMessageBox::No);
    if (reply==QMessageBox::Yes)
    {
    if (verif_magasin()==true)
    {



      magasin m (ui->Edit_id->text().toInt(),ui->Edit_nom->text(),ui->Edit_adresse->text(),ui->Edit_bloc->text().toInt()) ;

       bool test=m.modifiermagasin();
    if (test)
        {
        m.addToHistory("Modification  du " ,"magasin",  ui->Edit_id->text());
        ui->listhistorique->setModel( m.afficherHistorique(ui));
         m.affichermagasin(ui);
         m.REMPLIR_COMBO(ui);

         vider_mag();
        QMessageBox::information(nullptr,QObject::tr("Modifier un magasin"),
                                         QObject::tr("magasin modifé .\n"
                                                     "Click Cancel to exit ."),QMessageBox::Cancel);
        ui->tabWidget_2->setCurrentIndex(1);
         }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("Modifier un magasin"),
                                         QObject::tr("Erreur.\n"
                                                     "Click Cancel to exit ."),QMessageBox::Cancel);
    }
}
}
}
void Dialog::on_tabWidget_2_currentChanged(int index)
{
    if (index==1)
    {
    magasin m ;
    m.affichermagasin(ui) ;
    }

}

void Dialog::on_tableView_mag_activated(const QModelIndex &index)
{
   magasin m ;

      m.selectionnermagasin(ui,index);
      ui->tabWidget_2->setCurrentIndex(0);
      ui->Edit_id->setReadOnly(true);
}
void Dialog::vider_mag ()
{
    ui->Edit_id->setText("");
    ui->Edit_nom->setText("");
    ui->Edit_adresse->setText("");
    ui->Edit_bloc->setText("");
    ui->Edit_id->setReadOnly(false);


}
void Dialog::vider_produit ()
{
    ui->lineEdit_id_2->setText("");
    ui->lineEdit_nom_2->setText("");
    ui->lineEdit_nombre->setText("");
    ui->lineEdit_prix->setText("");
    ui->lineEdit_id_2->setReadOnly(false);
    ui->comboBox_cat->setCurrentIndex(0);
    ui->combobox_mag->setCurrentIndex(0);


}
void Dialog::on_btn_supp_clicked()
{son->play();

       magasin m ;

        QMessageBox::StandardButton reply ;
        reply=QMessageBox::question(this,"supprimer","voulez vous supprimer le magasin ?",
                                          QMessageBox::Yes|QMessageBox::No);
        if (reply==QMessageBox::Yes)
        {
        bool test =m.supprimermagasin(ui);
        if(test)
           {
            m.addToHistory("Suppresion  du " ,"magasin",  ui->Edit_id->text());
            ui->listhistorique->setModel( m.afficherHistorique(ui));
            vider_mag();
            m.REMPLIR_COMBO(ui);

            QMessageBox::information(nullptr,QObject::tr("Supprimer MAGASIN "),
                                             QObject::tr("MAGASIN  supprimé .\n"
                                                         "Click Cancel to exit ."),QMessageBox::Cancel);
            m.affichermagasin(ui);
             ui->tabWidget_2->setCurrentIndex(1);

           }
        else
        {
            QMessageBox::information(nullptr,QObject::tr("Supprimer MAGASIN "),
                                             QObject::tr("Erreur .\n"
                                                         "Click Cancel to exit ."),QMessageBox::Cancel);
           }

}}


void Dialog::on_pushButton_pdf_clicked()
{son->play();
   magasin m ;
   m.creationpdf();
}



void Dialog::on_radioButton_2_clicked()
{
    magasin m ;
   m.TRI2(ui);
}

void Dialog::on_radioButton_clicked()
{
    magasin m ;
   m.TRI1(ui);
}

void Dialog::on_radioButton_3_clicked()
{
    magasin m ;
   m.TRI3(ui);
}

void Dialog::on_lineEdit_rechercher_textChanged(const QString &arg1)
{
    magasin m ;
    m.recherche(ui);
}

void Dialog::on_lineEdit_rechercher_cursorPositionChanged(int arg1, int arg2)
{
    magasin m ;
    m.recherche(ui);
}

void Dialog::on_pushButton_recherche_clicked()
{son->play();
    magasin m ;
    m.recherche(ui);
}


void Dialog::on_pushButton_3_clicked()
{ son->play();
    statistiq *a=new statistiq() ;
    a->show();
}

void Dialog::on_annuler_clicked()
{
    vider_mag();
   ui-> tabWidget_2->setCurrentIndex(0);
}

void Dialog::on_tabWidget_currentChanged(int index)
{
    if (index==0)
    {
        ui->tabWidget_3->setCurrentIndex(0);
        magasin m ;
        m.REMPLIR_COMBO(ui);
    }

   else  if (index==2)
    { produit p ;
        ui->combo_action->setCurrentIndex(0);
        ui->listhistorique->setModel( p.afficherHistorique(ui));

    }
}
bool Dialog::verif_produit ()
{ QString idp ;
    //id
     idp=ui->lineEdit_id_2->text();
     if (idp.length()!=6)
     {
      QMessageBox::warning(nullptr,QObject::tr("Vérification"),"La taille de l'ID doit etre de 6 chiffres",QMessageBox::Cancel);
      ui->lineEdit_id_2->setFocus();
      return 0;
     }
     for(int i=0;i<idp.length();i++)
     {
         if((idp[i]<"0")||(idp[i]>"9"))
          {
             QMessageBox::warning(nullptr,QObject::tr("Vérification"),"L'ID doit contenir que des chiffres ",QMessageBox::Cancel);
      ui->lineEdit_id_2->setFocus();
             return 0;
         }

     }

     //nom
     QString nom ;
       nom=ui->lineEdit_nom_2->text();

       if (nom.length()<3)
       {
        QMessageBox::warning(nullptr,QObject::tr("Vérification"),"La taille du nom doit contenir au moins 3 caractères",QMessageBox::Cancel);
        ui->lineEdit_nom_2->setFocus();
        return 0;
       }
       for(int i=0;i<nom.length();i++)
       {
           if(((nom[i].toUpper()<"A")||(nom[i].toUpper()>"Z"))&&((nom[i]<"0")||(nom[i]>"9"))&&(nom[i]!="_")&&(nom[i]!=" "))
            {
               QMessageBox::warning(nullptr,QObject::tr("Vérification"),"Le nom doit contenir des lettres ou bien des chiffres ou bien _",QMessageBox::Cancel);
        ui->lineEdit_nom_2->setFocus();
               return 0;
           }
       }


           //nombre
        QString nbr ;
            nbr=ui->lineEdit_nombre->text();
            if (nbr.length()==0)
            {
             QMessageBox::warning(nullptr,QObject::tr("Vérification")," veuillez saisir un nombre ",QMessageBox::Cancel);
             ui->lineEdit_nombre->setFocus();
             return 0;
            }
            for(int i=0;i<nbr.length();i++)
            {
                if((nbr[i]<"0")||(nbr[i]>"9"))
                 {
                    QMessageBox::warning(nullptr,QObject::tr("Vérification"),"Le nombre  doit contenir que des chiffres ",QMessageBox::Cancel);
             ui->lineEdit_nombre->setFocus();
                    return 0;
                }

            }
            // prix
            QString prix ;
            float p ;
                prix=ui->lineEdit_prix->text();

                     p = prix.toFloat() ;
                if (p==0)
                {
                    QMessageBox::warning(nullptr,QObject::tr("Vérification")," Saisie invalide du prix  ",QMessageBox::Cancel);
             ui->lineEdit_prix->setFocus();
                    return 0;
                }

            return 1 ;


}

bool Dialog::verif_magasin ()
{ QString idm ;
    //id
     idm=ui->Edit_id->text();
     if (idm.length()!=6)
     {
      QMessageBox::warning(nullptr,QObject::tr("Vérification"),"La taille de l'ID doit etre de 6 chiffres",QMessageBox::Cancel);
      ui->Edit_id->setFocus();
      return 0;
     }
     for(int i=0;i<idm.length();i++)
     {
         if((idm[i]<"0")||(idm[i]>"9"))
          {
             QMessageBox::warning(nullptr,QObject::tr("Vérification"),"L'ID doit contenir que des chiffres ",QMessageBox::Cancel);
      ui->Edit_id->setFocus();
             return 0;
         }

     }
     //nom
     QString nomm ;
       nomm=ui->Edit_nom->text();

       if (nomm.length()<3)
       {
        QMessageBox::warning(nullptr,QObject::tr("Vérification"),"La taille du nom doit contenir au moins 3 caractères",QMessageBox::Cancel);
        ui->Edit_nom->setFocus();
        return 0;
       }
       for(int i=0;i<nomm.length();i++)
       {
           if(((nomm[i].toUpper()<"A")||(nomm[i].toUpper()>"Z"))&&((nomm[i]<"0")||(nomm[i]>"9"))&&(nomm[i]!="_")&&(nomm[i]!=" "))
            {
               QMessageBox::warning(nullptr,QObject::tr("Vérification"),"Le nom doit contenir des lettres ou bien des chiffres ou bien _",QMessageBox::Cancel);
        ui->Edit_nom->setFocus();
               return 0;
           }
       }

       //adresse
       QString adresse;
         adresse=ui->Edit_adresse->text();

         if (adresse.length()<5)
         {
          QMessageBox::warning(nullptr,QObject::tr("Vérification"),"La taille de l'adresse doit contenir au moins 5 caractères",QMessageBox::Cancel);
          ui->Edit_adresse->setFocus();
          return 0;
         }
         for(int i=0;i<adresse.length();i++)
         {
             if(((adresse[i].toUpper()<"A")||(adresse[i].toUpper()>"Z"))&&((adresse[i]<"0")||(adresse[i]>"9"))&&(adresse[i]!="_")&&(adresse[i]!=" "))
              {
                 QMessageBox::warning(nullptr,QObject::tr("Vérification"),"l'adresse doit contenir des lettres ou bien des chiffres ou bien _",QMessageBox::Cancel);
          ui->Edit_adresse->setFocus();
                 return 0;
             }
         }

         //nombre bloc
      QString nbrb ;
          nbrb=ui->Edit_bloc->text();
          if (nbrb.length()==0)
          {
           QMessageBox::warning(nullptr,QObject::tr("Vérification")," veuillez saisir un nombre ",QMessageBox::Cancel);
           ui->Edit_bloc->setFocus();
           return 0;
          }
          for(int i=0;i<nbrb.length();i++)
          {
              if((nbrb[i]<"0")||(nbrb[i]>"9"))
               {
                  QMessageBox::warning(nullptr,QObject::tr("Vérification"),"Le nombre  doit contenir que des chiffres ",QMessageBox::Cancel);
           ui->Edit_bloc->setFocus();
                  return 0;
              }
              }
          return 1 ;
}


void Dialog::on_pushButton_supprimerpr_clicked()
{son->play();
   produit r;
   int id=(ui->lineEdit_id_2->text()).toInt();

   QMessageBox::StandardButton reply ;
   reply=QMessageBox::question(this,"supprimer","voulez vous supprimer le produit ?",
                                     QMessageBox::Yes|QMessageBox::No);
   if (reply==QMessageBox::Yes)
   {


     bool test =r.supprimerproduits(ui);

     if(test)
        {
         vider_produit();
         r.addToHistory("Suppression  du " ,"produit",  QString::number(id));
         ui->listhistorique->setModel( r.afficherHistorique(ui));

         QMessageBox::information(nullptr,QObject::tr("Supprimer Produit "),
                                          QObject::tr("Produit Supprimé .\n"
                                                      "Click Cancel to exit ."),QMessageBox::Cancel);
         r.afficherProduit(ui);
          ui->tabWidget_3->setCurrentIndex(1);
        }
     else
     {
         QMessageBox::information(nullptr,QObject::tr("Supprimer Produit "),
                                          QObject::tr("Erreur .\n"
                                                      "Click Cancel to exit ."),QMessageBox::Cancel);
        }
}}

void Dialog::on_pushButton_actualiserpr_clicked()
{
    produit p ;
    p.afficherProduit(ui);
}




void Dialog::on_pushButton_ajoutmag_clicked()
{ son->play();
    vider_mag();
    ui->tabWidget_2->setCurrentIndex(0);
}

void Dialog::on_lineEdit_rechercher_2_cursorPositionChanged(int arg1, int arg2)
{
  produit p ;
    p.recherche(ui);
}

void Dialog::on_supprimer_clicked()
{ son->play();
    magasin m ;


     bool test =m.supprimermagasin(ui);
     if(test)
        {
         vider_mag();

         QMessageBox::information(nullptr,QObject::tr("Supprimer MAGASIN "),
                                          QObject::tr("MAGASIN  supprimé .\n"
                                                      "Click Cancel to exit ."),QMessageBox::Cancel);
         m.affichermagasin(ui);
          ui->tabWidget_2->setCurrentIndex(1);

        }
     else
     {
         QMessageBox::information(nullptr,QObject::tr("Supprimer MAGASIN "),
                                          QObject::tr("Erreur .\n"
                                                      "Click Cancel to exit ."),QMessageBox::Cancel);
        }

}

void Dialog::on_pushButton_produit_clicked()
{ son->play();
    vider_produit();
    magasin m;
    m.REMPLIR_COMBO(ui);
    ui->tabWidget_3->setCurrentIndex(0);
}



void Dialog::on_sliderprogress_sliderMoved(int position)
{

    //  int min , sec ;
    //  min=position/60000;
    //  sec=(position/1000)-(min*60);
    //  QString m = QString::number(min);
    //  if(min<10)
    //  {m="0"+m;}
    //  QString s = QString::number(sec);
    //  if(sec<10)
    //  {s="0"+s;}
    //  ui->duree->setText(m+":"+s);
player->setPosition(position);
   // player->play();

}



void Dialog::on_start_clicked()
{
  // load the file
   // player->setMedia(QUrl::fromLocalFile("C:/Users/msi/Desktop/dhiafinal/SoundPlayer/test.mp3")) ;
    if( star=="faux")
       {
      player->play();
      //ui->btn_play->setText("Pause");
    star="vrai";
       ui->start->setIcon(QIcon(":/images/pause.png"));
       }
      else
      {
           player->pause();
          // ui->btn_play->setText("Play");
    star="faux";
           ui->start->setIcon(QIcon(":/images/music.png"));
      }
    //qDebug() << player->errorString ;




}



void Dialog::on_positionchanged(qint64 position)
{
 ui->sliderprogress->setValue(position) ;

}

void Dialog::on_durationchanged(qint64 position)
{
ui->sliderprogress->setMaximum(position) ;
//int min , sec ;
//min=position/60000;
//sec=(position/1000)-(min*60);
//ui->duree->setText(QString::number(min)+":"+QString::number(sec));
}

void Dialog::on_stop_clicked()
{
    player->stop();
    player->setMedia(QUrl("qrc:/images/music.mp3")) ;
    star="faux";
    ui->start->setIcon(QIcon(":/images/music.png"));
}

void Dialog::on_fichiermp3_clicked()
{
    QString musique ="";

        musique= QFileDialog::getOpenFileName(this, tr("Open File"),"C://","Musique (*.mp3)");
        if (musique!="")
        {
          player->setMedia(QUrl::fromLocalFile(musique));
        ui->label_musique->setText(musique.right(musique.length()-(musique.lastIndexOf("/",-1,Qt::CaseSensitive)+1)));
          player->play();
          //ui->btn_play->setText("Pause");
   star="vrai";
          ui->start->setIcon(QIcon(":/images/pause.png"));
        }
}

void Dialog::on_btn_volume_clicked()
{
    if( mute=="faux")
       {
           mute="vrai";
      player->setMuted(true);

       ui->btn_volume->setIcon(QIcon(":/images/mute.png"));

       }
      else
      {
           mute="faux";
           player->setMuted(false);

            ui->btn_volume->setIcon(QIcon(":/images/audio.png"));   }
}

void Dialog::on_slider_volume_sliderMoved(int position)
{
    player->setVolume(position);
    ui->valeur_volume->setText(QString::number(position));
    if(position==0)
       {
           mute="vrai";
      player->setMuted(true);

       ui->btn_volume->setIcon(QIcon(":/images/mute.png"));

       }
      else
      {
           mute="faux";
           player->setMuted(false);

            ui->btn_volume->setIcon(QIcon(":/images/audio.png"));   }
}


void Dialog::on_combo_action_currentIndexChanged(const QString &arg1)
{ produit p ;

    ui->listhistorique->setModel( p.afficherHistorique(ui));
}


