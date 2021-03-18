#include "gestion_sponsor.h"
#include "ui_gestion_sponsor.h"

gestion_sponsor::gestion_sponsor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gestion_sponsor)
{
    ui->setupUi(this);
}

gestion_sponsor::~gestion_sponsor()
{
    delete ui;
}
