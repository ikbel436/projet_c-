#include "affichage_event.h"
#include "ui_affichage_event.h"
#include"gestion_event.h"
#include"event.h"
#include<QDebug>
#include <QMessageBox>


affichage_event::affichage_event(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::affichage_event)
{
    ui->setupUi(this);
    EVENT e ;
    e.afficher(ui);
}

affichage_event::~affichage_event()
{
    delete ui;
}

void affichage_event::on_annuler_clicked()
{
    gestion_event *w = new gestion_event;
    hide();
    w->show();
}

void affichage_event::on_supprimer_clicked()
{
    EVENT e;
    e.Supprimer(ui);
    e.afficher(ui);
}

void affichage_event::on_comboBox_currentIndexChanged(int index)
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


void affichage_event::on_modifier_clicked()
{
    EVENT e;
    e.modifier(ui);
    e.afficher(ui);
}

void affichage_event::on_search_clicked()
{
    EVENT e;
  e.Recherche(ui);

}

void affichage_event::on_excel_clicked()
{
    EVENT e;
    e.excel(ui);
}
