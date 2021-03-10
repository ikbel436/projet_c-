#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "etudiant.h"
#include "QMessageBox"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tableView->setModel(tmpetudiant.afficher());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{
    // Recuperation des donnees saisies dans les champs de formulaire
    int id=ui->le_id->text().toInt(); // recuper id et convertir en entier
    QString nom=ui->le_nom->text();
    QString prenom=ui->le_prenom->text();

    Etudiant E(id,nom,prenom); // instance  objet de la classe Etudiant en utilisant les parametres dans les interferances

    bool test=E.ajouter(); // inserer l'objet etudiant instancie dans la table etudiant et recuper val de exec()
    if(test) // si requete executee==> QMessageBox::information
    { // refresh actualiser

        ui->tableView->setModel(tmpetudiant.afficher());
        QMessageBox::information(nullptr, QObject::tr("Ajouter un étudiant"),
                              QObject::tr("Etudiant ajouté.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);


    }
    else
          QMessageBox::critical(nullptr, QObject::tr("Ajouter un étudiant"),
                      QObject::tr("Erreur !.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_pb_supprimer_clicked()
{
    int id= ui->le_id_2->text().toInt();
    bool test=tmpetudiant.supprimer(id);
    if(test)
    {
        // refresh actualiser

                ui->tableView->setModel(tmpetudiant.afficher());

        QMessageBox::information(nullptr, QObject::tr("Supprimer un étudiant"),
                                 QObject::tr("Etudiant supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un étudiant"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

