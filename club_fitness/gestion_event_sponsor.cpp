#include "gestion_event_sponsor.h"
#include "ui_gestion_event_sponsor.h"
#include "gestion_event.h"
#include "gestion_sponsor.h"

gestion_event_sponsor::gestion_event_sponsor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gestion_event_sponsor)
{
    ui->setupUi(this);
}

gestion_event_sponsor::~gestion_event_sponsor()
{
    delete ui;
}

void gestion_event_sponsor::on_event_clicked()
{

    gestion_event *w = new gestion_event;
    hide();
    w->show();
}



void gestion_event_sponsor::on_sponsor_clicked()
{

    gestion_sponsor *w = new gestion_sponsor;
    hide();
    w->show();
}

void gestion_event_sponsor::on_pushButton_clicked()
{


}

