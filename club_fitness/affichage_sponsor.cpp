#include "affichage_sponsor.h"
#include "ui_affichage_sponsor.h"

affichage_sponsor::affichage_sponsor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::affichage_sponsor)
{
    ui->setupUi(this);
}

affichage_sponsor::~affichage_sponsor()
{
    delete ui;
}
