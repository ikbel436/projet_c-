#include "email_entraineur.h"
#include "ui_email_entraineur.h"
#include "smtp_entraineur.h"

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
    Smtp* smtp = new Smtp("benmansourmalak18@gmail.com", "malak2001", "smtp.gmail.com", 465);

    smtp->sendMail("mohamedaziz.benzarti@esprit.tn", ui->recipient->text() , ui->subject->text() ,ui->message->toPlainText());

   /* if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );*/

}
