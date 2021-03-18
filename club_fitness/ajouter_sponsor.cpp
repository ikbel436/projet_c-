#include "ajouter_sponsor.h"
#include "ui_ajouter_sponsor.h"

ajouter_sponsor::ajouter_sponsor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ajouter_sponsor)
{
    ui->setupUi(this);
}

ajouter_sponsor::~ajouter_sponsor()
{
    delete ui;
}
