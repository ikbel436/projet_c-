#include "gestion_event.h"
#include "ui_gestion_event.h"
#include "ajouter_event.h"

#include "affichage_event.h"
#include "gestion_event_sponsor.h"
#include <QDebug>

gestion_event::gestion_event(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gestion_event)
{
    ui->setupUi(this);
}

gestion_event::~gestion_event()
{
    delete ui;
}

void gestion_event::on_event_clicked()
{
    ajouter_event *w = new ajouter_event;
    hide();
    w->show();
}

void gestion_event::on_pushButton_clicked()
{
    gestion_event_sponsor *w = new gestion_event_sponsor;
    hide();
    w->show();
}

void gestion_event::on_event2_clicked()
{
    affichage_event *w = new affichage_event;
    hide();
    w->show();
}

