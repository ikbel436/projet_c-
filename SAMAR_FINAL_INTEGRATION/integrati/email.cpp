#include "email.h"
#include "ui_email.h"



#include "smtp_joueur.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);


}
Dialog::Dialog(QString e,QString n,QString s,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    QString contenu="Contenu";
    ui->setupUi(this);

    ui->recipient->setText(e);


    // ui->message->setText("Cher Monsieur/Madame "+n+",\n\n"+contenu+"\n\n"+"Cordialement,\n");





}
Dialog::~Dialog()
{
    delete ui;

}

void Dialog::on_pushButton_2_clicked()
{
    Smtp* smtp = new Smtp("ikbel.benmansour@esprit.tn", "191JFT3222", "smtp.gmail.com", 465);

    smtp->sendMail("malak.benmansour@esprit.tn", ui->recipient->text() , ui->subject->text() ,ui->message->toPlainText());

   /* if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );*/

}
