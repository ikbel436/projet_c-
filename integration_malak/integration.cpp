#include "integration.h"
#include "ui_integration.h"
#include"event.h"
#include"sponsor.h"
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
#include "send_email_sponsor.h"
#include "smtp_sponsor.h"
#include "stati.h"
double firstNum;
bool userIsTypingSecondNum = false;
#include "arduino.h"
#include <QSerialPort>
#include <QDesktopServices>
#include <QUrl>
#include<QDateEdit>
#include<QListView>
#include<QCalendarWidget>
#include<QVBoxLayout>
#include<QTime>
#include<QDateTime>
#include <QTimer>
#include"joueurs.h"
#include"categories.h"
#include "sport.h"
#include "entraineur.h"
#include "musique.h"
//QT_CHARTS_USE_NAMESPACE

integration::integration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::integration)
{
    ui->setupUi(this);
this->setStyleSheet("color: darkblue; background-color: ");
    son=new QSound("../sons/bruit-clic.wav");
     supp=new QSound("../sons/supprimer.wav");
      ajout=new QSound("../sons/ajouter.wav");
      /************************* MALAK****************************/
    EVENT e ;

    e.afficher(ui);

    sponsor s;

    s.afficher_sponsor(ui);

    QList<EVENT> fi=e.afficherRole();
    QStringList l;

    for(int i=0;i<fi.size();i++)
    {
  EVENT fo;
       fo=fi.at(i);
       l.append(fo.getNOM());
    }ui->event_sp->addItem("");
    ui->event_sp->addItems(l);

    /******************** Calculatrice *************/
    connect(ui->pushButton_0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButt1,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButt2,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButt3,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButt4,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButt5,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButt6,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButt7,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButt8,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButt9,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_signal,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    connect(ui->pushButton_porcentage,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    connect(ui->pushButton_plus,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_minus,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_division,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_times,SIGNAL(released()),this,SLOT(binary_operation_pressed()));

    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_division->setCheckable(true);
    ui->pushButton_times->setCheckable(true);


    /***************************** IKBEL ******************************/


   QRegExp rx("(|\"|/|\\.,|[A-Z,a-z]){30}");
      QRegExp mailREX("\\b[a-z0-9._%+-]+@[a-z0-9.-]+\\.[a-z]{2,4}\\b");
                ui->prenom_j->setValidator(new QRegExpValidator(rx, this));
                ui->nom_j->setValidator(new QRegExpValidator(rx, this));

                ui->email_j->setValidator(new QRegExpValidator(mailREX, this));
          QIntValidator*roll=new
                  QIntValidator(100000000,99999999);
          QIntValidator*roll1=new
                  QIntValidator(100000000,99999999);

          ui->tel->setValidator(roll1);
          ui->id->setValidator(roll1);

   JOUEURS j ;
   j.afficher(ui);
   categories c;
   c.afficher(ui);



   QList<categories> fi1=c.afficherRole();
   QStringList l1;

   for(int i=0;i<fi1.size();i++)
   {
 categories foo;
      foo=fi1.at(i);
      l1.append(foo.getNOM());
   }ui->categ->addItem("");
   ui->categ->addItems(l);
/**************************/


     /************/
     sport s1;
     QList<sport> fi2=s1.afficherRole();
     QStringList l2;

     for(int i=0;i<fi1.size();i++)
     {
   sport fo;
        fo=fi2.at(i);
        l2.append(fo.getNom());
     }ui->sport_2->addItem("");
     ui->sport_2->addItems(l2);
     QTimer *timer=new QTimer(this);
     connect(timer,SIGNAL(timeout()),this,SLOT(showTime()) );
     timer->start();
     QDateTime dateTime=QDateTime::currentDateTime();
     QString datetimetext=dateTime.toString();
     ui->DateTime->setText(datetimetext);
     /***************AZIZ******************/
     entraineur en ;

     en.afficher(ui);
     sport sp;
     sp.afficher_sport(ui);
     sp.afficher_sport(ui);


     QList<sport> fi3=sp.afficherRole();
     QStringList ls;

     for(int i=0;i<fi3.size();i++)
     {
   sport fo;
        fo=fi3.at(i);
        ls.append(fo.getNom());
     }ui->sport_4->addItem("");
     ui->sport_4->addItems(ls);


}

integration::~integration()
{
    delete ui;
}

/************************ Malak********************************/
void integration::on_supprimer_clicked()
{
    EVENT e;
    supp->play();
    e.Supprimer(ui);
    e.afficher(ui);
}

void integration::on_comboBox_currentIndexChanged(int index)
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




void integration::on_search_clicked()
{
    EVENT e;
    son->play();
  e.Recherche(ui);

}

void integration::on_excel_clicked()
{
     ajout->play();
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
        obj.addField(3, "nb", "char(20)");
        obj.addField(4, "prix", "char(20)");
        obj.addField(5, "Dat", "char(20)");


        int retVal = obj.export2Excel();

        if( retVal > 0)
        {
            QMessageBox::information(this, tr("FAIS!"),
                                     QString(tr("%1 enregistrements exportés!")).arg(retVal)
                                     );
        }
}


void integration::on_pdf_clicked()
{
EVENT e;
son->play();
e.pdf(ui);
}

void integration::on_tableView_doubleClicked(const QModelIndex &index)
{
   ui->nom_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),1)).toString());
    ui->lieu_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),2)).toString());
    ui->prix_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),4)).toString());
    ui->date_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),5)).toString());
    ui->id_2->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString());
    ui->stackedWidget->setCurrentIndex(1);

}

void integration::on_modifier_clicked()
{

ajout->play();
int id=ui->id_2->text().toInt();
QString nom=ui->nom_modif->text();
QString lieu=ui->lieu_modif->text();
int prix=ui->prix_modif->text().toInt();
QString date=ui->date_modif->text();
int nb=ui->nb_modif->text().toInt();

EVENT e(id,nom,lieu,date,prix,nb);
    if(e.modifier(ui))
    {
        QMessageBox ::information(this,"","evenement modifié")  ;
        ui->stackedWidget->setCurrentIndex(0);
        e.afficher(ui);
    }
    else
    { QMessageBox ::critical(this,"","erreur de modification") ;}

}


void integration::on_Valider_clicked()

{
ajout->play();
    QRegExp regex1 ("[a-z]$");
    QRegExp regex2 ("^[a-z]");
    QString msg_nom ="nom invalide";
    QString msg_lieu ="lieu invalide";
     QString msg_nb ="nb invalide";
      QString msg_prix ="prix inva";

    QString msg_vide="";

    int id=ui->id->text().toInt();
    QString NOM=ui->nom->text();
    QString lieu=ui->lieu->text();
    QString DAT=ui->date->text();
    int NB=ui->nb->text().toInt();
     int prix=ui->prix->text().toInt();



    EVENT F(id,NOM,lieu,DAT,NB,prix);
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

    if ((!lieu.contains(regex1))||(!lieu.contains(regex2)))
    {
        ui->lieu->setStyleSheet("QLineEdit { color: red;}");
        ui->text_lieu->setText(msg_lieu);
        ui->text_lieu->setStyleSheet("QLabel { background-color : transparent; color : red; }");
        F.setValide();
    }
    else { ui->lieu->setStyleSheet("QLineEdit { color: black;}");
        ui->text_lieu->setText(msg_vide);

    }
    if ((NB<10)||(NB>2000))
    {
        ui->nb->setStyleSheet("QLineEdit { color: red;}");
        ui->text_nb->setText(msg_nb);
        ui->text_nb->setStyleSheet("QLabel { background-color : transparent; color : red; }");
        F.setValide();
    }
    else { ui->nb->setStyleSheet("QLineEdit { color: black;}");
        ui->text_nb->setText(msg_vide);

    }
    if ((prix<10)||(prix>3000))
    {
        ui->prix->setStyleSheet("QLineEdit { color: red;}");
        ui->text_prix->setText(msg_prix);
        ui->text_prix->setStyleSheet("QLabel { background-color : transparent; color : red; }");
        F.setValide();
    }
    else { ui->nb->setStyleSheet("QLineEdit { color: black;}");
        ui->text_prix->setText(msg_vide);

    }




    if (F.getValide()==0)
    {
    if(F.ajouter()){
        ui->nom->setStyleSheet("QLineEdit { color: green;}");
        ui->lieu->setStyleSheet("QLineEdit { color: green;}");
         ui->prix->setStyleSheet("QLineEdit { color: green;}");
          ui->nb->setStyleSheet("QLineEdit { color: green;}");
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout de event succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        QList<EVENT> fi=F.afficherRole();
          QStringList l;
      ui->event_sp->clear();

          for(int i=0;i<fi.size();i++)
          {
        EVENT fo;
             fo=fi.at(i);
             l.append(fo.getNOM());
          }
          //ui->sport_2->addItem("");
          ui->event_sp->addItems(l);

         ui->stackedWidget_ajout->setCurrentIndex(1);

         F.afficher(ui);
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("ajout failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }



}
}


void integration::on_Annuler_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    son->play();
}

void integration::on_event_clicked()
{   EVENT e;
    e.afficher(ui);
    ui->stackedWidget_ajout->setCurrentIndex(1);
    son->play();
}

void integration::on_annuler_clicked()
{ EVENT e;
 son->play();
    ui->stackedWidget_ajout->setCurrentIndex(0);
    e.ajouter();


}


void integration::on_supprimer_2_clicked()
{
    sponsor s;
     supp->play();
    s.Supprimer_sponsor(ui);
    s.afficher_sponsor(ui);
}




void integration::on_comboBox_2_currentIndexChanged(int index)
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

void integration::on_search_2_clicked()
{
    sponsor s;
    ajout->play();
    s.Recherche_sponsor(ui);

}

void integration::on_tableView_2_doubleClicked(const QModelIndex &index)
{
    ui->nom_modif_2->setText(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),1)).toString());
    ui->adresse_modif->setText(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),3)).toString());
    ui->tel_modif->setText(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),5)).toString());

    ui->id_3->setText(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),0)).toString());
    ui->stackedWidget_2->setCurrentIndex(2);

}

void integration::on_modifier_2_clicked()
{
    sponsor s;
ajout->play();
int id=ui->id_3->text().toInt();
QString nom=ui->nom_modif_2->text();
QString type=ui->type_modif->text();
QString adresse=ui->adresse_modif->text();
QString email=ui->email_modif->text();
int tel=ui->tel_modif->text().toInt();
EVENT ef;
sponsor e(id,nom,type,adresse,email,tel,ef.recupererID(ui->event_sp->currentText()));
    if(e.modifier_sponsor(ui))
    {
        QMessageBox ::information(this,"","sponsor modifié")  ;
        ui->stackedWidget_2->setCurrentIndex(1);
        e.afficher_sponsor(ui);
    }
    else
    { QMessageBox ::critical(this,"","erreur de modification") ;}
}

void integration::on_ajouter_clicked()
{
ajout->play();
    QRegExp regex1 ("[a-z]$");
    QRegExp regex2 ("^[a-z]");
    QRegExp regex3("\\b[a-z0-9._%+-]+@[a-z0-9.-]+\\.[a-z]{2,4}\\b");
    QString msg_noms ="nom invalide";
    QString msg_type ="type invalide";
     QString msg_adresse ="adresse invalide";
      QString msg_email ="email inva";
//QString msg_tel ="tel inva";
    QString msg_vide="";
    int id=ui->id_sponsor->text().toInt();
        QString nom=ui->nom_sponsor->text();
        QString type=ui->type->text();
        QString adresse=ui->adresse->text();
        QString email=ui->email->text();
        int tel=ui->tel->text().toInt();
EVENT ef;
        sponsor F(id,nom,type,adresse,email,tel,ef.recupererID(ui->event_sp->currentText()));
        if ((!nom.contains(regex1))||(!nom.contains(regex2)))
        {
            ui->nom->setStyleSheet("QLineEdit { color: red;}");
            ui->text_noms->setText(msg_noms);
            ui->text_noms->setStyleSheet("QLabel { background-color : transparent; color : red; }");
            F.setValide();
        }
        else { ui->nom->setStyleSheet("QLineEdit { color: black;}");
            ui->text_noms->setText(msg_vide);

        }
        if ((!type.contains(regex1))||(!type.contains(regex2)))
        {
            ui->type->setStyleSheet("QLineEdit { color: red;}");
            ui->text_type->setText(msg_type);
            ui->text_type->setStyleSheet("QLabel { background-color : transparent; color : red; }");
            F.setValide();
        }
        else { ui->type->setStyleSheet("QLineEdit { color: black;}");
            ui->text_type->setText(msg_vide);

        }

        if ((!adresse.contains(regex1))||(!adresse.contains(regex2)))
        {
            ui->adresse->setStyleSheet("QLineEdit { color: red;}");
            ui->text_adresse->setText(msg_adresse);
            ui->text_adresse->setStyleSheet("QLabel { background-color : transparent; color : red; }");
            F.setValide();
        }
        else { ui->adresse->setStyleSheet("QLineEdit { color: black;}");
            ui->text_adresse->setText(msg_vide);

        }
        if (!email.contains(regex3))
        {
            ui->email->setStyleSheet("QLineEdit { color: red;}");
            ui->text_email->setText(msg_email);
            ui->text_email->setStyleSheet("QLabel { background-color : transparent; color : red; }");
            F.setValide();
        }
        else { ui->email->setStyleSheet("QLineEdit { color: black;}");
            ui->text_email->setText(msg_vide);

        }

        /*
        if(tel.size()==8)
        {ui->tel->setStyleSheet("QLineEdit { color: black;}");
            ui->text_tel->setText(msg_vide);}
        else {
            ui->tel->setStyleSheet("QLineEdit { color: red;}");
            ui->text_tel->setText(msg_tel);
            ui->text_tel->setStyleSheet("QLabel { background-color : transparent; color : red; }");
        }*/
       if (F.getValide()==0){
        //bool test=F.ajouter();
        if(F.ajouter()){
            ui->nom->setStyleSheet("QLineEdit { color: green;}");
            ui->adresse->setStyleSheet("QLineEdit { color: green;}");
             ui->type->setStyleSheet("QLineEdit { color: green;}");
             ui->email->setStyleSheet("QLineEdit { color: green;}");
            QMessageBox::information(nullptr, QObject::tr("OK"),
                        QObject::tr("ajout de sponsor succesful.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
              ui->stackedWidget_2->setCurrentIndex(1);
              F.afficher_sponsor(ui);
        }
        else{

            QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                        QObject::tr("ajout failed.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
}
}

void integration::on_sponsor2_clicked()
{
    sponsor s;
    son->play();
    s.afficher_sponsor(ui);
    ui->stackedWidget_2->setCurrentIndex(1);

}

void integration::on_sponsor_ajout_clicked()
{
    sponsor s;
    son->play();
    s.ajouter();
    ui->stackedWidget_2->setCurrentIndex(0);
}

void integration::on_Annuler_2_clicked()
{   son->play();
    ui->stackedWidget_2->setCurrentIndex(1);
}

void integration::on_mailing_clicked()
{
    QDialog *d=new Dialog(this);
    d->show();

    d->exec();
}

void integration::on_image_clicked()
{
    son->play();
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

void integration::on_insertion_image_clicked()
{
    son->play();
        QString filename= QFileDialog::getOpenFileName(this,tr("choose"),"",tr("Images (*.png *.jpg *.jpeg"));
        if (QString::compare(filename,QString())!=0)
        {
          QImage label_image;
          bool valid =label_image.load(filename);
          if (valid)
          {   label_image= label_image.scaledToWidth(ui->label_im->width(),Qt::SmoothTransformation);
              ui->label_im->setPixmap(QPixmap::fromImage(label_image));
          }
          else {// error
          }
        }
}

void integration::on_encours_clicked()
{
    EVENT e;
    e.valider_date(ui);
}

void integration::on_total_clicked()
{
    sponsor s;
    s.total(ui);
}
/******************** Calculatrice****************/
void integration::digit_pressed()
{
    QPushButton * button = (QPushButton*)sender();
    QString newLabel;

    double labelNumber;

    if((ui->pushButton_plus->isChecked()||ui->pushButton_minus->isChecked()||ui->pushButton_division->isChecked()||ui->pushButton_times->isChecked()) && (!userIsTypingSecondNum))
    {
        labelNumber = (button->text()).toDouble();
        userIsTypingSecondNum = true;
        newLabel = QString::number(labelNumber,'g',15);
    }
    //new label number
    else
    {
        if(ui->label_52->text().contains(".") && button->text() == "0")
        {
            newLabel = ui->label_52->text() + button->text();
        }
        else
        {
            labelNumber = (ui->label_52->text() + button->text()).toDouble();
            newLabel = QString::number(labelNumber,'g',15);
        }
    }

    //label of the ui
    ui->label_52->setText(newLabel);
}

void integration::on_pushButton_point_released()
{
    ui->label_52->setText(ui->label_52->text()+("."));
}

void integration::unary_operation_pressed()
{
    QPushButton * button = (QPushButton *)sender();
    double labelNumber;
    QString newLabel;
    if(button->text() == "+/-")
    {
        labelNumber = ui->label_52->text().toDouble();
        labelNumber = labelNumber * -1;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label_52->setText(newLabel);
    }
    if(button->text() == "%")
    {
        labelNumber = ui->label_52->text().toDouble();
        labelNumber = labelNumber * 0.01;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label_52->setText(newLabel);
    }
}

void integration::on_pushButton_C_released()
{
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_division->setChecked(false);
    ui->pushButton_times->setChecked(false);

    userIsTypingSecondNum = false;

    ui->label_52->setText("0");
}

void integration::on_pushButton_equal_released()
{
    double labelNumber,secondNum;
    QString newLabel;

    secondNum = ui->label_52->text().toDouble();

    if(ui->pushButton_plus->isChecked())
    {
        labelNumber = firstNum + secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label_52->setText(newLabel);
        ui->pushButton_plus->setChecked(false);
    }
    else if(ui->pushButton_minus->isChecked())
    {
        labelNumber = firstNum - secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label_52->setText(newLabel);
        ui->pushButton_minus->setChecked(false);
    }
    else if(ui->pushButton_division->isChecked())
    {
        labelNumber = firstNum / secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label_52->setText(newLabel);
        ui->pushButton_division->setChecked(false);
    }
    else if(ui->pushButton_times->isChecked())
    {
        labelNumber = firstNum * secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label_52->setText(newLabel);
        ui->pushButton_times->setChecked(false);
    }

    userIsTypingSecondNum = false;
}

void integration::binary_operation_pressed()
{
    QPushButton * button = (QPushButton *)sender();


    firstNum = ui->label_52->text().toDouble();
    button->setChecked(true);
}






/**************** statistiques**************/

void integration::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    son->play();
}

void integration::on_stat_clicked()
{


        stati *b=new stati();
                  b->show();

}

void integration::on_Annuler_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    son->play();
}


void integration::on_arduino_clicked()
{

    QSqlQuery q;
    q.prepare("SELECT count(*)  FROM event");
    q.exec();
    QString arduino;
    while ( q.next()) {

        arduino=q.value(0).toString();
    }

    /*QString temp=ui->lineEdit->text();*/
QByteArray resultat;

resultat.append(arduino);

       Ard.write_to_arduino(resultat);
}

void integration::on_pbdate_clicked()
{
    EVENT e;
    son->play();
  e.nbeventpardate(ui);
}

void integration::on_openfile_clicked()
{
    QString  filename=QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                "C://",
                "All files(*.*);;Text File (*.txt);;Music File (*.mp3) ;; Video File (*.mp4)"

                );
    QDesktopServices::openUrl(QUrl("file:///"+filename,QUrl::TolerantMode));
}

void integration::on_logtest_clicked()
{
    ui->principale->setCurrentIndex(3);
}
/****************IKBEL**************************************************/


void integration::on_joueur_test_clicked()
{
    ui->principale->setCurrentIndex(2);
}
void integration::showTime()
{
QTime time=QTime::currentTime();

QString time_text=time.toString("hh : mm : ss");
if ((time.second() % 2)== 0)
{ time_text[3] = ' ';
   time_text[8] = ' ';
}
ui->Digital_clock->setText(time_text);

}


void integration::on_supprimer_j_clicked()
{
    JOUEURS e;
    supp->play();
    e.Supprimer(ui);
    e.afficher(ui);
}

void integration::on_tri_j_currentIndexChanged(int index)
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



void integration::on_search_j_clicked()
{
    JOUEURS e;
    son->play();
  e.Recherche(ui);
}

void integration::on_joueur_doubleClicked(const QModelIndex &index)
{
    son->play();
        ui->nom_modif_j->setText(ui->tableView_j->model()->data(ui->tableView_j->model()->index(ui->tableView_j->selectionModel()->currentIndex().row(),3)).toString());
        ui->prenom_modif_j->setText(ui->tableView_j->model()->data(ui->tableView_j->model()->index(ui->tableView_j->selectionModel()->currentIndex().row(),4)).toString());
        ui->email_modif_j->setText(ui->tableView_j->model()->data(ui->tableView_j->model()->index(ui->tableView_j->selectionModel()->currentIndex().row(),6)).toString());
        ui->date_modif_j->setText(ui->tableView_j->model()->data(ui->tableView_j->model()->index(ui->tableView_j->selectionModel()->currentIndex().row(),5)).toString());
        ui->id_2_j->setText(ui->tableView_j->model()->data(ui->tableView_j->model()->index(ui->tableView_j->selectionModel()->currentIndex().row(),2)).toString());
        ui->stackedWidget_j->setCurrentIndex(1);
}


void integration::on_modifier_j_clicked()
{
    int id=ui->id_2_j->text().toInt();
        QString nom=ui->nom_modif_j->text();
        QString prenom=ui->prenom_modif_j->text();
        QString date_n=ui->date_modif_j->text();
        QString email=ui->email_modif_j->text();
        int tel=ui->tel_modif_j->text().toInt();


    categories e;
    sport s;

        JOUEURS F(id,nom,prenom,date_n,email,tel,e.recupererID(ui->categ->currentText()),s.recupererID(ui->sport_2->currentText()));


      ajout->play();
        if(F.modifier(ui))
        {
            QMessageBox ::information(this,"","joueur modifié")  ;
            ui->stackedWidget_j->setCurrentIndex(0);
            F.afficher(ui);
        }
        else
        { QMessageBox ::critical(this,"","erreur de modification") ;}

}

void integration::on_Valider_j_clicked()
{
    ajout->play();
    int id=ui->id_j->text().toInt();
        QString nom=ui->nom_j->text();
        QString prenom=ui->prenom_j->text();
        QString date_n=ui->daten_j->text();
        QString email=ui->email_j->text();
         int tel=ui->tel_j->text().toInt();

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

        }
}

void integration::on_Annuler_j_clicked()
{
    ui->stackedWidget_j->setCurrentIndex(0);
    son->play();
}

void integration::on_traiter_j_clicked()
{
    JOUEURS e;
    son->play();
    e.afficher(ui);
    ui->stackedWidget_ajout_j->setCurrentIndex(1);
}

void integration::on_aj_joueur_clicked()
{ JOUEURS e;
    son->play();
        ui->stackedWidget_ajout_j->setCurrentIndex(0);

        e.ajouter();

}

void integration::on_pdf_j_clicked()
{
    ajout->play();
      JOUEURS e;
     // e.pdf(ui);
}

void integration::on_Valider_c_clicked()
{
    ajout->play();
        int id=ui->id_c->text().toInt();
        QString nom=ui->nom_c->text();
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
}
}


void integration::on_traiter_c_clicked()
{
    categories e;
         son->play();
        e.afficher(ui);
        ui->stackedWidget_2_j->setCurrentIndex(1);

}

void integration::on_supprimer_c_clicked()
{
    categories e;
         supp->play();
        e.Supprimer(ui);
        e.afficher(ui);

}

void integration::on_ajout_c_clicked()
{
    categories e;
 son->play();
        ui->stackedWidget_2_j->setCurrentIndex(0);

        e.ajouter();
}

void integration::on_search_c_clicked()
{
    categories e;
         ajout->play();
        e.Recherche(ui);

}

void integration::on_tri_c_currentIndexChanged(int index)
{
    categories e;
        if (index==0)
        {e.Tri_NOM(ui);

        }

        else
        {  e.Tri_ID(ui);

        }
}

void integration::on_tableView_c_doubleClicked(const QModelIndex &index)
{
    supp->play();
        ui->nom_modif_c->setText(ui->tableView_c->model()->data(ui->tableView_c->model()->index(ui->tableView_c->selectionModel()->currentIndex().row(),1)).toString());
        ui->desc_modif_c->setText(ui->tableView_c->model()->data(ui->tableView_c->model()->index(ui->tableView_c->selectionModel()->currentIndex().row(),2)).toString());
        ui->id_modif_c->setText(ui->tableView_c->model()->data(ui->tableView_c->model()->index(ui->tableView_c->selectionModel()->currentIndex().row(),0)).toString());
        ui->stackedWidget_2_j->setCurrentIndex(2);

}

void integration::on_modifier_c_clicked()
{
    int id=ui->id_modif_c->text().toInt();
        QString nom=ui->nom_modif_c->text();
        QString description=ui->desc_modif_c->text();



        categories F(id,nom,description);


         ajout->play();

        if(F.modifier(ui))
        {
            QMessageBox ::information(this,"","categorie modifié")  ;
            ui->stackedWidget_2_j->setCurrentIndex(1);
            F.afficher(ui);
        }
        else
        { QMessageBox ::critical(this,"","erreur de modification") ;}
}

void integration::on_Annuler_c_clicked()
{
    son->play();
        ui->stackedWidget_2_j->setCurrentIndex(1);
}

void integration::on_mailing_j_clicked()
{

    QDialog *d=new Dialog(this);
    d->show();

    d->exec();
}

void integration::on_insertion_j_clicked()
{
    son->play();
        QString filename= QFileDialog::getOpenFileName(this,tr("choose"),"",tr("Images (*.png *.jpg *.jpeg"));
        if (QString::compare(filename,QString())!=0)
        {
          QImage label_image;
          bool valid =label_image.load(filename);
          if (valid)
          {   label_image= label_image.scaledToWidth(ui->image_j->width(),Qt::SmoothTransformation);
              ui->image_j->setPixmap(QPixmap::fromImage(label_image));
          }
          else {// error
          }
        }
}

void integration::on_trouver_j_clicked()
{
    JOUEURS j;
    j.Recherche1(ui);
}

void integration::on_pushButton_2_clicked()
{
    QString  filename=QFileDialog::getOpenFileName(
                   this,
                   tr("Open File"),
                   "C://",
                   " Video File (*.mp4)"

                   );
       QDesktopServices::openUrl(QUrl("file:///"+filename,QUrl::TolerantMode));
}

void integration::on_tableView_j_doubleClicked(const QModelIndex &index)
{
    son->play();
        ui->nom_modif_j->setText(ui->tableView_j->model()->data(ui->tableView_j->model()->index(ui->tableView_j->selectionModel()->currentIndex().row(),3)).toString());
        ui->prenom_modif_j->setText(ui->tableView_j->model()->data(ui->tableView_j->model()->index(ui->tableView_j->selectionModel()->currentIndex().row(),4)).toString());
        ui->email_modif_j->setText(ui->tableView_j->model()->data(ui->tableView_j->model()->index(ui->tableView_j->selectionModel()->currentIndex().row(),6)).toString());
        ui->date_modif_j->setText(ui->tableView_j->model()->data(ui->tableView_j->model()->index(ui->tableView_j->selectionModel()->currentIndex().row(),5)).toString());
        ui->id_2_j->setText(ui->tableView_j->model()->data(ui->tableView_j->model()->index(ui->tableView_j->selectionModel()->currentIndex().row(),2)).toString());
        ui->stackedWidget_j->setCurrentIndex(1);
}


/*****************AZIZ***********************/

void integration::on_sport_clicked()
{
 ui->principale->setCurrentIndex(1);
}

void integration::on_supprimer_s_clicked()
{
    supp->play();
    sport e;
    e.Supprimer_sport(ui);
    e.afficher_sport(ui);
}

void integration::on_tri_s_currentIndexChanged(int index)
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

void integration::on_search_s_clicked()
{
    sport e;
    son->play();
  e.Recherche_sport(ui);
}

void integration::on_tableView_s_doubleClicked(const QModelIndex &index)
{
    ui->nom_modif_s->setText(ui->tableView_s->model()->data(ui->tableView_s->model()->index(ui->tableView_s->selectionModel()->currentIndex().row(),1)).toString());
    ui->nb_modif_s->setText(ui->tableView_s->model()->data(ui->tableView_s->model()->index(ui->tableView_s->selectionModel()->currentIndex().row(),2)).toString());
    //ui->tel_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),4)).toString());
    ui->date_modif_s->setText(ui->tableView_s->model()->data(ui->tableView_s->model()->index(ui->tableView_s->selectionModel()->currentIndex().row(),3)).toString());
    ui->id_modif_s->setText(ui->tableView_s->model()->data(ui->tableView_s->model()->index(ui->tableView_s->selectionModel()->currentIndex().row(),0)).toString());
    ui->stackedWidget_s->setCurrentIndex(1);
}

void integration::on_modifier_s_clicked()
{
    ajout->play();
    int id=ui->id_modif_s->text().toInt();
    QString nom=ui->nom_modif_s->text();
    QString dat=ui->date_modif_s->text();
    int nb=ui->nb_modif_s->text().toInt();

  sport   e(id,nom,dat,nb);
        if(e.modifier_sport(ui))
        {
            QMessageBox ::information(this,"","sport modifié")  ;
            ui->stackedWidget_s->setCurrentIndex(0);
            e.afficher_sport(ui);
        }
        else
        { QMessageBox ::critical(this,"","erreur de modification") ;}
}

void integration::on_Valider_s_clicked()
{
    ajout->play();
    QRegExp regex1 ("[a-z]$");
    QRegExp regex2 ("^[a-z]");

    QString msg_noms ="nom invalide";
    QString msg_nb ="type invalide";
    QString msg_vide="";

    int id=ui->id_s->text().toInt();
    QString NOM=ui->nom_s->text();
    QString dat=ui->date_s->text();

     int nb=ui->nb_s->text().toInt();

    sport F(id,NOM,dat,nb);

    if ((!NOM.contains(regex1))||(!NOM.contains(regex2)))
    {
        ui->nom_s->setStyleSheet("QLineEdit { color: red;}");
        ui->text_noms_2->setText(msg_noms);
        ui->text_noms_2->setStyleSheet("QLabel { background-color : transparent; color : red; }");
        F.setValide();
    }
    else { ui->nom_s->setStyleSheet("QLineEdit { color: black;}");
        ui->text_noms_2->setText(msg_vide);

    }
    if ((nb<2)||(nb>50))
    {
        ui->nb_s->setStyleSheet("QLineEdit { color: red;}");
        ui->text_nb_2->setText(msg_nb);
        ui->text_nb_2->setStyleSheet("QLabel { background-color : transparent; color : red; }");
        F.setValide();
    }
    else { ui->nb_s->setStyleSheet("QLineEdit { color: black;}");
        ui->text_nb_2->setText(msg_vide);

    }


    if (F.getValide()==0)
    {
    if(F.ajouter()){
        ui->nom_s->setStyleSheet("QLineEdit { color: green;}");
        ui->nb_s->setStyleSheet("QLineEdit { color: green;}");
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout de sport succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        QList<sport> fi=F.afficherRole();

        QStringList l;

        ui->sport_4->clear();

          for(int i=0;i<fi.size();i++)
          {
        sport fo;
             fo=fi.at(i);
             l.append(fo.getNom());
          }
          //ui->sport_2->addItem("");
          ui->sport_4->addItems(l);




         ui->stackedWidget_ajout_s->setCurrentIndex(1);
         F.afficher_sport(ui);
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("ajout failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }

}
}

void integration::on_Annuler_s_clicked()
{
    son->play();
    ui->stackedWidget_s->setCurrentIndex(0);
}

void integration::on_traiter_s_clicked()
{
    son->play();
       sport e;
       e.afficher_sport(ui);
       ui->stackedWidget_ajout_s->setCurrentIndex(1);
}

void integration::on_annuler_s_clicked()
{
    sport e;
    son->play();
        ui->stackedWidget_ajout_s->setCurrentIndex(0);
        e.ajouter();
}

void integration::on_supprimer_e_clicked()
{
    supp->play();
    entraineur s;
    s.Supprimer(ui);
    s.afficher(ui);
}

void integration::on_tri_e_currentIndexChanged(int index)
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

void integration::on_search_e_clicked()
{
    ajout->play();
    entraineur s;
    s.Recherche(ui);
}

void integration::on_tableView_e_doubleClicked(const QModelIndex &index)
{
    ui->nom_modif_en->setText(ui->tableView_e->model()->data(ui->tableView_e->model()->index(ui->tableView_e->selectionModel()->currentIndex().row(),1)).toString());
    ui->prenom_modif_en->setText(ui->tableView_e->model()->data(ui->tableView_e->model()->index(ui->tableView_e->selectionModel()->currentIndex().row(),2)).toString());
    ui->dat_modif_en->setText(ui->tableView_e->model()->data(ui->tableView_e->model()->index(ui->tableView_e->selectionModel()->currentIndex().row(),5)).toString());
     ui->tel_modif_en->setText(ui->tableView_e->model()->data(ui->tableView_e->model()->index(ui->tableView_e->selectionModel()->currentIndex().row(),4)).toString());

    ui->id_modif_en->setText(ui->tableView_e->model()->data(ui->tableView_e->model()->index(ui->tableView_e->selectionModel()->currentIndex().row(),0)).toString());
    ui->stackedWidget_e->setCurrentIndex(2);

}

void integration::on_modifier_e_clicked()
{
    ajout->play();
    int id=ui->id_modif_en->text().toInt();
    QString nom=ui->nom_modif_en->text();
    QString prenom=ui->prenom_modif_en->text();
    QString dat=ui->dat_modif_en->text();
    QString email=ui->email_modif->text();
    int tel=ui->tel_modif_en->text().toInt();
    sport f;
    entraineur e(id,nom,prenom,dat,email,tel,f.recupererID(ui->sport_4->currentText()));
        if(e.modifier(ui))
        {
            QMessageBox ::information(this,"","entraineur modifié")  ;
            ui->stackedWidget_e->setCurrentIndex(1);
            e.afficher(ui);
        }
        else
        { QMessageBox ::critical(this,"","erreur de modification") ;}
}

void integration::on_ajouter_e_clicked()
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

        entraineur F(id,nom,prenom,DAT,email,tel,f.recupererID(ui->sport_4->currentText()));
        if ((!nom.contains(regex1))||(!nom.contains(regex2)))
        {
            ui->nom_ent->setStyleSheet("QLineEdit { color: red;}");
            ui->text_nom_e->setText(msg_nom);
            ui->text_nom_e->setStyleSheet("QLabel { background-color : transparent; color : red; }");
            F.setValide();
        }
        else { ui->nom_ent->setStyleSheet("QLineEdit { color: black;}");
            ui->text_nom_e->setText(msg_vide);

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
            ui->text_email_e->setText(msg_email);
            ui->text_email_e->setStyleSheet("QLabel { background-color : transparent; color : red; }");
            F.setValide();
        }
        else { ui->email_ent->setStyleSheet("QLineEdit { color: black;}");
            ui->text_email_e->setText(msg_vide);

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
            ui->stackedWidget_e->setCurrentIndex(1);
            F.afficher(ui);
        }
        else{

            QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                        QObject::tr("ajout failed.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }



    }
}

void integration::on_traiter_e_clicked()
{
    son->play();
    entraineur s;
    s.afficher(ui);
    ui->stackedWidget_e->setCurrentIndex(1);
}

void integration::on_entraineur_ajout_clicked()
{
    son->play();
    entraineur s;
    ui->stackedWidget_e->setCurrentIndex(0);
    s.ajouter();
}

void integration::on_Annuler_e_clicked()
{
    son->play();
    ui->stackedWidget_e->setCurrentIndex(1);
}

void integration::on_generer_s_clicked()
{
    son->play();
       sport s;
       s.image();
}

void integration::on_mailing_e_clicked()
{
    QDialog *d=new Dialog(this);
    d->show();

    d->exec();
}

void integration::on_btn_image_clicked()
{
    son->play();
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

void integration::on_inserer_image_clicked()
{
    son->play();
        QString filename= QFileDialog::getOpenFileName(this,tr("choose"),"",tr("Images (*.png *.jpg *.jpeg"));
        if (QString::compare(filename,QString())!=0)
        {
          QImage label_image;
          bool valid =label_image.load(filename);
          if (valid)
          {   label_image= label_image.scaledToWidth(ui->label_image_2->width(),Qt::SmoothTransformation);
              ui->label_image_2->setPixmap(QPixmap::fromImage(label_image));
          }
          else {// error
          }
        }
}

void integration::on_afficher_clicked()
{
    entraineur e;
    e.test(ui);
}

void integration::on_pb_sport_clicked()
{
    sport s;
    s.calculer(ui);
}

void integration::on_music_clicked()
{
    music=new musique(this);
    music->show();
}
