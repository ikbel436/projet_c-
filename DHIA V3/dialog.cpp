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
QString ard;



Dialog::Dialog(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dialog)
{
    ard="on";

    //ui->combotype->setCurrentIndex(3);
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
if(Ar.getarduino_port_name()!=""){
    QPixmap pix (":/images/usb-port.png");
    ui->label_connect->setPixmap(pix);
    }

else{
    QPixmap pix1 (":/images/usb.png");
    ui->label_connect->setPixmap(pix1);
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

       if (alertt>24)
       {
           ui->label_alert->setText("Température Elevée!");
           QPixmap pix1 (":/images/high-temperature.png");
           ui->label_alert_2->setPixmap(pix1);
           if(ard=="on"){
               Ar.write_to_arduino("1");
               QPixmap pix1 (":/images/alarme.png");
               ui->label_etat_2->setPixmap(pix1);
           }

       }
       else {
            ui->label_alert->setText("Température normale.");
            QPixmap pix1 (":/images/thermometerr.png");
            ui->label_alert_2->setPixmap(pix1);
            if(ard=="on"){
                Ar.write_to_arduino("0");
                QPixmap pix1 (":/images/mute.png");
                ui->label_etat_2->setPixmap(pix1);
            }
       }
}




void Dialog::on_buttonon_clicked()
{

    Ar.write_to_arduino("1"); //envoyer 1 à arduino
       QPixmap pix1 (":/images/alarme.png");
       ui->label_etat_2->setPixmap(pix1);
}

void Dialog::on_buttonoff_clicked()
{
    Ar.write_to_arduino("0"); //envoyer 0 à arduino
    QPixmap pix1 (":/images/mute.png");
    ui->label_etat_2->setPixmap(pix1);
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

            id=(ui->lineEdit_idpr->text()).toInt();
        nom=ui->lineEdit_nompr->text();
        nombre=(ui->lineEdit_nombrepr->text()).toInt();
        prix=(ui->lineEdit_prixpr->text()).toFloat();
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
        ui->tabWidget_produit->setCurrentIndex(1);
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

            id=(ui->lineEdit_idpr->text()).toInt();
        nom=ui->lineEdit_nompr->text();
        nombre=(ui->lineEdit_nombrepr->text()).toInt();
        prix=(ui->lineEdit_prixpr->text()).toFloat();
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
            ui->tabWidget_produit->setCurrentIndex(1);

                 }

            else
            {
            QMessageBox::critical(nullptr,QObject::tr("Modifier PRODUIT"),
                                             QObject::tr("ereur .\n"
                                                         "Click Cancel to exit ."),QMessageBox::Cancel);
               }
    }

}}

void Dialog::on_tabWidget_produit_currentChanged(int index)
{

    if (index==1)
   {
       magasin m;
       m.affichermagasin(ui);
   }
}

void Dialog::on_tabWidget_produit_tabBarClicked(int index)
{
    produit c;
     c.afficherProduit(ui);
}

void Dialog::on_tableView_2_activated(const QModelIndex &index)
{
  int idp= ui->tableView_2->model()->index(ui->tableView_2->currentIndex().row(),0).data().toInt();

          produit r ;
         r.selectionnerProduit(ui,idp);
         ui->tabWidget_produit->setCurrentIndex(0);
         ui->lineEdit_idpr->setReadOnly(true);
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

void Dialog::on_radioButton_nomp_clicked()
{
    produit c ;
    c.TRI1(ui);
}

void Dialog::on_radioButton_prixp_clicked()
{
    produit c ;
    c.TRI2(ui);
}

void Dialog::on_pushButton_recherche_produit_clicked()
{ son->play();
    produit c ;
    c.recherche(ui);
}

void Dialog::on_btn_ajout_mag_clicked()
{son->play();
    QMessageBox::StandardButton reply ;
    reply=QMessageBox::question(this,"ajouter","voulez vous ajouter le magasin ?",
                                      QMessageBox::Yes|QMessageBox::No);
    if (reply==QMessageBox::Yes)
    {
   if (verif_magasin()==true)
   {

      magasin m (ui->Edit_idm->text().toInt(),ui->Edit_nomm->text(),ui->Edit_adressem->text(),ui->Edit_blocm->text().toInt()) ;

       bool test=m.ajoutermagasin();
    if (test)
        {
        m.addToHistory("Ajout  du " ,"magasin",  ui->Edit_idm->text());
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
void Dialog::on_btn_modifier_mag_clicked()
{son->play();
    QMessageBox::StandardButton reply ;
    reply=QMessageBox::question(this,"modifier","voulez vous modifier le magasin ?",
                                      QMessageBox::Yes|QMessageBox::No);
    if (reply==QMessageBox::Yes)
    {
    if (verif_magasin()==true)
    {



      magasin m (ui->Edit_idm->text().toInt(),ui->Edit_nomm->text(),ui->Edit_adressem->text(),ui->Edit_blocm->text().toInt()) ;

       bool test=m.modifiermagasin();
    if (test)
        {
        m.addToHistory("Modification  du " ,"magasin",  ui->Edit_idm->text());
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
      ui->Edit_idm->setReadOnly(true);
}
void Dialog::vider_mag ()
{
    ui->Edit_idm->setText("");
    ui->Edit_nomm->setText("");
    ui->Edit_adressem->setText("");
    ui->Edit_blocm->setText("");
    ui->Edit_idm->setReadOnly(false);


}
void Dialog::vider_produit ()
{
    ui->lineEdit_idpr->setText("");
    ui->lineEdit_nompr->setText("");
    ui->lineEdit_nombrepr->setText("");
    ui->lineEdit_prixpr->setText("");
    ui->lineEdit_idpr->setReadOnly(false);
    ui->comboBox_cat->setCurrentIndex(0);
    ui->combobox_mag->setCurrentIndex(0);


}
void Dialog::on_btn_supp_mag_clicked()
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
            m.addToHistory("Suppresion  du " ,"magasin",  ui->Edit_idm->text());
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


void Dialog::on_pushButton_pdf_2_clicked()
{son->play();
   magasin m ;
   m.creationpdf();
}



void Dialog::on_radioButton_nomm_clicked()
{
    magasin m ;
   m.TRI2(ui);
}

void Dialog::on_radioButton_idm_clicked()
{
    magasin m ;
   m.TRI1(ui);
}

void Dialog::on_radioButton_blocm_clicked()
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
        ui->tabWidget_produit->setCurrentIndex(0);
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
     idp=ui->lineEdit_idpr->text();
     if (idp.length()!=6)
     {
      QMessageBox::warning(nullptr,QObject::tr("Vérification"),"La taille de l'ID doit etre de 6 chiffres",QMessageBox::Cancel);
      ui->lineEdit_idpr->setFocus();
      return 0;
     }
     for(int i=0;i<idp.length();i++)
     {
         if((idp[i]<"0")||(idp[i]>"9"))
          {
             QMessageBox::warning(nullptr,QObject::tr("Vérification"),"L'ID doit contenir que des chiffres ",QMessageBox::Cancel);
      ui->lineEdit_idpr->setFocus();
             return 0;
         }

     }

     //nom
     QString nom ;
       nom=ui->lineEdit_nompr->text();

       if (nom.length()<3)
       {
        QMessageBox::warning(nullptr,QObject::tr("Vérification"),"La taille du nom doit contenir au moins 3 caractères",QMessageBox::Cancel);
        ui->lineEdit_nompr->setFocus();
        return 0;
       }
       for(int i=0;i<nom.length();i++)
       {
           if(((nom[i].toUpper()<"A")||(nom[i].toUpper()>"Z"))&&((nom[i]<"0")||(nom[i]>"9"))&&(nom[i]!="_")&&(nom[i]!=" "))
            {
               QMessageBox::warning(nullptr,QObject::tr("Vérification"),"Le nom doit contenir des lettres ou bien des chiffres ou bien _",QMessageBox::Cancel);
        ui->lineEdit_nompr->setFocus();
               return 0;
           }
       }


           //nombre
        QString nbr ;
            nbr=ui->lineEdit_nombrepr->text();
            if (nbr.length()==0)
            {
             QMessageBox::warning(nullptr,QObject::tr("Vérification")," veuillez saisir un nombre ",QMessageBox::Cancel);
             ui->lineEdit_nombrepr->setFocus();
             return 0;
            }
            for(int i=0;i<nbr.length();i++)
            {
                if((nbr[i]<"0")||(nbr[i]>"9"))
                 {
                    QMessageBox::warning(nullptr,QObject::tr("Vérification"),"Le nombre  doit contenir que des chiffres ",QMessageBox::Cancel);
             ui->lineEdit_nombrepr->setFocus();
                    return 0;
                }

            }
            // prix
            QString prix ;
            float p ;
                prix=ui->lineEdit_prixpr->text();

                     p = prix.toFloat() ;
                if (p==0)
                {
                    QMessageBox::warning(nullptr,QObject::tr("Vérification")," Saisie invalide du prix  ",QMessageBox::Cancel);
             ui->lineEdit_prixpr->setFocus();
                    return 0;
                }

            return 1 ;


}

bool Dialog::verif_magasin ()
{ QString idm ;
    //id
     idm=ui->Edit_idm->text();
     if (idm.length()!=6)
     {
      QMessageBox::warning(nullptr,QObject::tr("Vérification"),"La taille de l'ID doit etre de 6 chiffres",QMessageBox::Cancel);
      ui->Edit_idm->setFocus();
      return 0;
     }
     for(int i=0;i<idm.length();i++)
     {
         if((idm[i]<"0")||(idm[i]>"9"))
          {
             QMessageBox::warning(nullptr,QObject::tr("Vérification"),"L'ID doit contenir que des chiffres ",QMessageBox::Cancel);
      ui->Edit_idm->setFocus();
             return 0;
         }

     }
     //nom
     QString nomm ;
       nomm=ui->Edit_nomm->text();

       if (nomm.length()<3)
       {
        QMessageBox::warning(nullptr,QObject::tr("Vérification"),"La taille du nom doit contenir au moins 3 caractères",QMessageBox::Cancel);
        ui->Edit_nomm->setFocus();
        return 0;
       }
       for(int i=0;i<nomm.length();i++)
       {
           if(((nomm[i].toUpper()<"A")||(nomm[i].toUpper()>"Z"))&&((nomm[i]<"0")||(nomm[i]>"9"))&&(nomm[i]!="_")&&(nomm[i]!=" "))
            {
               QMessageBox::warning(nullptr,QObject::tr("Vérification"),"Le nom doit contenir des lettres ou bien des chiffres ou bien _",QMessageBox::Cancel);
        ui->Edit_nomm->setFocus();
               return 0;
           }
       }

       //adresse
       QString adresse;
         adresse=ui->Edit_adressem->text();

         if (adresse.length()<5)
         {
          QMessageBox::warning(nullptr,QObject::tr("Vérification"),"La taille de l'adresse doit contenir au moins 5 caractères",QMessageBox::Cancel);
          ui->Edit_adressem->setFocus();
          return 0;
         }
         for(int i=0;i<adresse.length();i++)
         {
             if(((adresse[i].toUpper()<"A")||(adresse[i].toUpper()>"Z"))&&((adresse[i]<"0")||(adresse[i]>"9"))&&(adresse[i]!="_")&&(adresse[i]!=" "))
              {
                 QMessageBox::warning(nullptr,QObject::tr("Vérification"),"l'adresse doit contenir des lettres ou bien des chiffres ou bien _",QMessageBox::Cancel);
          ui->Edit_adressem->setFocus();
                 return 0;
             }
         }

         //nombre bloc
      QString nbrb ;
          nbrb=ui->Edit_blocm->text();
          if (nbrb.length()==0)
          {
           QMessageBox::warning(nullptr,QObject::tr("Vérification")," veuillez saisir un nombre ",QMessageBox::Cancel);
           ui->Edit_blocm->setFocus();
           return 0;
          }
          for(int i=0;i<nbrb.length();i++)
          {
              if((nbrb[i]<"0")||(nbrb[i]>"9"))
               {
                  QMessageBox::warning(nullptr,QObject::tr("Vérification"),"Le nombre  doit contenir que des chiffres ",QMessageBox::Cancel);
           ui->Edit_blocm->setFocus();
                  return 0;
              }
              }
          return 1 ;
}


void Dialog::on_pushButton_supprimerpr_clicked()
{son->play();
   produit r;
   int id=(ui->lineEdit_idpr->text()).toInt();

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
          ui->tabWidget_produit->setCurrentIndex(1);
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
    ui->tabWidget_produit->setCurrentIndex(0);
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





void Dialog::on_pushButton_ang_clicked()
{ son->play();
    ui->tabWidget->currentIndex();
    QFile file (":/images/traduction_an.txt");
    if (!file.open(QIODevice::ReadOnly)){
        QMessageBox::information(0,"error",file.errorString());
    }
    else
    {
        QTextStream in (&file);
        while(!in.atEnd())
        { QString line = in.readLine();
            QStringList fields = line.split("|");
            if (fields[0]=="L")
            {
            QList<QLabel *> labels = this ->findChildren<QLabel *>(QRegExp(fields [1])) ;
            labels[0]->setText(fields[2]);
            }
           else  if (fields[0]=="B")
            {
            QList<QPushButton *> buttons = this ->findChildren<QPushButton*>(QRegExp(fields [1])) ;
            buttons[0]->setText(fields[2]);
            }
            else  if (fields[0]=="R")
             {
             QList<QRadioButton *> radios = this ->findChildren<QRadioButton*>(QRegExp(fields [1])) ;
            radios[0]->setText(fields[2]);
             }
            else  if (fields[0]=="W")
             {
             QList<QTabWidget *> widgets = this ->findChildren<QTabWidget*>(QRegExp(fields [1])) ;
              int i , nb ;
              nb=fields[2].toInt();
              for (i=0;i<nb;i++)
              widgets[0]->setTabText(i,fields[3+i]);
             }
            else  if (fields[0]=="G")
             {
             QList<QGroupBox *> groups = this ->findChildren<QGroupBox*>(QRegExp(fields [1])) ;
           groups[0]->setTitle(fields[2]);
             }
            else  if (fields[0]=="E")
             {
             QList<QLineEdit *> edits = this ->findChildren<QLineEdit*>(QRegExp(fields [1])) ;
           edits[0]->setPlaceholderText(fields[2]);
             }
        }
        file.close();
}
}






void Dialog::on_pushButton_supphistory_clicked()
{ son->play();
    QString d , type,mp;
    if (ui->combo_action->currentIndex()==0)
        type="";
   else if (ui->combo_action->currentIndex()==1)
        type="Ajout";
    else if (ui->combo_action->currentIndex()==2)
         type="Modification";
    else if (ui->combo_action->currentIndex()==3)
         type="Suppression";

    if (ui->comboBox_mp->currentIndex()==0)
        mp="";
   else if (ui->comboBox_mp->currentIndex()==1)
        mp="produit";
    else if (ui->comboBox_mp->currentIndex()==2)
         mp="magasin";

    d=ui->dateEdit_history->text();
    QMessageBox::StandardButton reply ;
    reply=QMessageBox::question(this,"supprimer","voulez vous supprimer  l'historique à la date "+ d+" ?",
                                      QMessageBox::Yes|QMessageBox::No);
    if (reply==QMessageBox::Yes)
    {
    produit p ;
    p.supprimerhistory(d,type,mp);
    ui->listhistorique->setModel( p.afficherHistorique(ui));
    }
}

void Dialog::on_comboBox_mp_currentIndexChanged(const QString &arg1)
{
    produit p ;


      ui->listhistorique->setModel( p.afficherHistorique(ui));
}

void Dialog::on_pushButton_fr_clicked()
{
    son->play();
        ui->tabWidget->currentIndex();
        QFile file (":/images/traduction_fr.txt");
        if (!file.open(QIODevice::ReadOnly)){
            QMessageBox::information(0,"error",file.errorString());
        }
        else
        {
            QTextStream in (&file);
            while(!in.atEnd())
            { QString line = in.readLine();
                QStringList fields = line.split("|");
                if (fields[0]=="L")
                {
                QList<QLabel *> labels = this ->findChildren<QLabel *>(QRegExp(fields [1])) ;
                labels[0]->setText(fields[2]);
                }
               else  if (fields[0]=="B")
                {
                QList<QPushButton *> buttons = this ->findChildren<QPushButton*>(QRegExp(fields [1])) ;
                buttons[0]->setText(fields[2]);
                }
                else  if (fields[0]=="R")
                 {
                 QList<QRadioButton *> radios = this ->findChildren<QRadioButton*>(QRegExp(fields [1])) ;
                radios[0]->setText(fields[2]);
                 }
                else  if (fields[0]=="W")
                 {
                 QList<QTabWidget *> widgets = this ->findChildren<QTabWidget*>(QRegExp(fields [1])) ;
                  int i , nb ;
                  nb=fields[2].toInt();
                  for (i=0;i<nb;i++)
                  widgets[0]->setTabText(i,fields[3+i]);
                 }
                else  if (fields[0]=="G")
                 {
                 QList<QGroupBox *> groups = this ->findChildren<QGroupBox*>(QRegExp(fields [1])) ;
               groups[0]->setTitle(fields[2]);
                 }
                else  if (fields[0]=="E")
                 {
                 QList<QLineEdit *> edits = this ->findChildren<QLineEdit*>(QRegExp(fields [1])) ;
               edits[0]->setPlaceholderText(fields[2]);
                 }
            }
            file.close();
    }
    }












void Dialog::on_combotype_currentIndexChanged(const QString &arg1)
{
    if(ui->combotype->currentIndex()==0)
    {
        ard="on";

        ui->buttonon->setEnabled(false);
        ui->buttonoff->setEnabled(false);

    }
    else{
        ard="off";
        ui->buttonon->setEnabled(true);
        ui->buttonoff->setEnabled(true);
    }
}
