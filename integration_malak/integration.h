#ifndef integration_H
#define integration_H

#include <QDialog>
#include <QSound>
#include "arduino.h"
#include "musique.h"
namespace Ui {
class integration;
}

class integration : public QDialog
{
    Q_OBJECT

public:
    explicit integration(QWidget *parent = nullptr);
    ~integration();
private slots:
    //void on_annuler_clicked();

    void on_supprimer_clicked();

    void on_comboBox_currentIndexChanged(int index);
    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_modifier_clicked();

    void on_search_clicked();

    void on_excel_clicked();

    void on_pdf_clicked();
    void on_Valider_clicked();


    void on_Annuler_clicked();


    void on_event_clicked();

    void on_annuler_clicked();

    void on_ajouter_clicked();

    void on_supprimer_2_clicked();

    void on_comboBox_2_activated(const QString &arg1);

    void on_comboBox_2_currentIndexChanged(const QString &arg1);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_search_2_clicked();

    void on_tableView_2_doubleClicked(const QModelIndex &index);

    void on_modifier_2_clicked();

    void on_sponsor2_clicked();

    void on_sponsor_ajout_clicked();

    void on_Annuler_2_clicked();

    void on_mailing_clicked();

    void on_image_clicked();

    void on_insertion_image_clicked();

    void on_encours_clicked();

    void on_total_clicked();

    void on_pushButton_point_released();

    void on_pushButton_C_released();

    void on_pushButton_equal_released();

    void on_pushButton_signal_pressed();

    void on_pushButton_signal_released();

    void digit_pressed();
    void unary_operation_pressed();
     void binary_operation_pressed();
     void on_pushButton_clicked();

     void on_stat_clicked();

     void on_Annuler_3_clicked();

     void on_arduino_clicked();

     void on_pbdate_clicked();

     void on_openfile_clicked();

     void on_logtest_clicked();

     void on_joueur_test_clicked();
     void showTime();
     void on_supprimer_j_clicked();

     void on_tri_j_currentIndexChanged(int index);

     void on_search_j_clicked();

     void on_joueur_doubleClicked(const QModelIndex &index);

     void on_modifier_j_clicked();

     void on_Valider_j_clicked();

     void on_Annuler_j_clicked();

     void on_traiter_j_clicked();

     void on_aj_joueur_clicked();

     void on_pdf_j_clicked();

     void on_Valider_c_clicked();

     void on_traiter_c_clicked();

     void on_supprimer_c_clicked();

     void on_ajout_c_clicked();

     void on_search_c_clicked();

     void on_tri_c_currentIndexChanged(int index);

     void on_tableView_c_doubleClicked(const QModelIndex &index);

     void on_modifier_c_clicked();

     void on_Annuler_c_clicked();

     void on_mailing_j_clicked();

     void on_insertion_j_clicked();

     void on_trouver_j_clicked();

     void on_pushButton_2_clicked();

     void on_tableView_j_doubleClicked(const QModelIndex &index);

     void on_sport_clicked();

     void on_supprimer_s_clicked();

     void on_tri_s_currentIndexChanged(int index);

     void on_search_s_clicked();

     void on_tableView_s_doubleClicked(const QModelIndex &index);

     void on_modifier_s_clicked();

     void on_Valider_s_clicked();

     void on_Annuler_s_clicked();

     void on_traiter_s_clicked();

     void on_annuler_s_clicked();

     void on_supprimer_e_clicked();

     void on_tri_e_currentIndexChanged(int index);

     void on_search_e_clicked();

     void on_tableView_e_doubleClicked(const QModelIndex &index);

     void on_modifier_e_clicked();

     void on_ajouter_e_clicked();

     void on_traiter_e_clicked();

     void on_entraineur_ajout_clicked();

     void on_Annuler_e_clicked();

     void on_generer_s_clicked();

     void on_mailing_e_clicked();

     void on_btn_image_clicked();

     void on_inserer_image_clicked();

     void on_afficher_clicked();

     void on_pb_sport_clicked();

     void on_music_clicked();

private:
    Ui::integration *ui;
    QSound *son;
    QSound *ajout;
    QSound *supp;
    Arduino Ard;
musique *music;
};

#endif // integration_H
