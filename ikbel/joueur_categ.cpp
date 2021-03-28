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
                 ui->date->setValidator(new QRegExpValidator(rx, this));
                 ui->nom->setValidator(new QRegExpValidator(rx, this));

                 ui->prix->setValidator(new QRegExpValidator(mailREX, this));
           QIntValidator*roll=new
                   QIntValidator(100000000,99999999);
           QIntValidator*roll1=new
                   QIntValidator(100000000,99999999);

           ui->nb->setValidator(roll1);
           ui->id->setValidator(roll1);
    //this->setStyleSheet("{background-image: url(:Desktop\téléchargement.jpg);}");
    //QPixmap x(":/icons/téléchargement.jpg");
    //ui->background->setPixmap(x);
    EVENT e ;
    e.afficher(ui);
}

joueur_categ::~joueur_categ()
{
    delete ui;
}


void joueur_categ::on_supprimer_clicked()
{
    EVENT e;
    supp->play();
    e.Supprimer(ui);
    e.afficher(ui);
}

void joueur_categ::on_comboBox_currentIndexChanged(int index)
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




void joueur_categ::on_search_clicked()
{
    EVENT e;
    son->play();
  e.Recherche(ui);

}

void joueur_categ::on_excel_clicked()
{
  ajout->play();
    QString fileName = QFileDialog::getSaveFileName(this, tr("Exportation en fichier Excel"), qApp->applicationDirPath (),
                                                        tr("Fichiers d'extension Excel (*.xls)"));
        if (fileName.isEmpty())
            return;

        ExportExcelObject obj(fileName, "mydata", ui->tableView);

        // you can change the column order and
        // choose which colum to export

        obj.addField(0, "id", "char(20)");
        obj.addField(1, "nom", "char(20)");
        obj.addField(2, "prenom", "char(20)");
        obj.addField(3, "date_n", "char(20)");
        obj.addField(4, "email", "char(20)");
        obj.addField(5, "tel", "char(20)");


        int retVal = obj.export2Excel();

        if( retVal > 0)
        {
            QMessageBox::information(this, tr("FAIS!"),
                                     QString(tr("%1 enregistrements exportés!")).arg(retVal)
                                     );
        }
}



void joueur_categ::on_tableView_doubleClicked(const QModelIndex &index)
{   son->play();
    ui->nom_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),1)).toString());
    ui->lieu_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),2)).toString());
    ui->prix_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),4)).toString());
    ui->date_modif->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),5)).toString());
    ui->id_2->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0)).toString());
    ui->stackedWidget->setCurrentIndex(1);

}

void joueur_categ::on_modifier_clicked()
{
    EVENT e;
  ajout->play();
    if(e.modifier(ui))
    {
        QMessageBox ::information(this,"","evenement modifié")  ;
        ui->stackedWidget->setCurrentIndex(0);
        e.afficher(ui);
    }
    else
    { QMessageBox ::critical(this,"","erreur de modification") ;}

}


void joueur_categ::on_Valider_clicked()

{ajout->play();
int id=ui->id->text().toInt();
    QString nom=ui->nom->text();
    QString prenom=ui->date->text();
    QString date_n=ui->lieu->text();
    QString email=ui->prix->text();
     int tel=ui->nb->text().toInt();


    EVENT F(id,nom,prenom,date_n,email,tel);

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

    EVENT e;
    son->play();
    e.afficher(ui);
    ui->stackedWidget_ajout->setCurrentIndex(1);
}

void joueur_categ::on_annuler_clicked()
{ EVENT e;
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
    QPdfWriter pdf("C:/Users/Espace Sboui/Desktop/club_event/club_event/PDF/pdf");
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
    {  e.Tri_PRIX(ui);

    }

}

void joueur_categ::on_tableView_2_doubleClicked(const QModelIndex &index)
{  supp->play();
    ui->nom_modif_3->setText(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),1)).toString());
    ui->nom_modif_2->setText(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),2)).toString());
    ui->id_4->setText(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->selectionModel()->currentIndex().row(),0)).toString());
    ui->stackedWidget_2->setCurrentIndex(2);

}

void joueur_categ::on_modifier_2_clicked()
{
    categories e;
     ajout->play();

    if(e.modifier(ui))
    {
        QMessageBox ::information(this,"","categorie modifié")  ;
        ui->stackedWidget_2->setCurrentIndex(1);
        e.afficher(ui);
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
