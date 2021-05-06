#include "statistique.h"
#include "ui_statistique.h"
#include"ui_integration.h"
#include<iostream>
#include "produit.h"

statistique::statistique(QWidget *parent) :
    QDialog(parent),
    i(new Ui::statistique)

{
    ui->setupUi(this);

}

statistique::~statistique()
{
    delete ui;
}







void statistique::paintEvent(QPaintEvent *)
{
produit p ;
    int b=p.nombre_produit("FOOTBALL");
cout << ""<<b<< endl ;
    int c=p.nombre_produit("HANDBALL");

    int d=p.nombre_produit("BASKETBALL");
    int e=p.nombre_produit("VOLLEYBALL");

    float nb = b+c+d+e ;
        float s1= b/nb ;
        float s2= c/nb;
        float s3=d/nb;
        float s4=e/nb;


    QPainter painter(this);
    QRectF size=QRectF(150,40,this->width()-300,this->width()-300);
cout << "sssssss"<<s1<< endl ;
    painter.setBrush(Qt::blue);
    //painter.drawPie(size,0,16*s1);
     painter.drawPie(size,0,360*s1);
    ui->label_2->setText("Basketball ") ;
    painter.setBrush(Qt::green);
   // painter.drawPie(size,16*s2,16*s2);
//       painter.drawPie(size,5760*s1,5760*s2);
    ui->label_3->setText(" Handball") ;
    painter.setBrush(Qt::red);
   // painter.drawPie(size,16*s3,16*s3);
    // painter.drawPie(size,(5760*s2 + 5760 * s1),5760*s3);
    ui->label_4->setText(" Football") ;
    painter.setBrush(Qt::yellow);
   // painter.drawPie(size,16*s3,16*s3);
    // painter.drawPie(size,(5760*s1 + 5760*s2+5760*s3),5760*s4);
   // ui->label_4->setText(" Football") ;

}
void statistique::on_pushButton_clicked()
{
    hide();
}
