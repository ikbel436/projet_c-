#ifndef INTEGRATION_H
#define INTEGRATION_H

#include <QDialog>
#include <QDialog>
#include <QSound>
#include "arduino.h"
#include "musique.h"
#include <QMediaPlayer>
#include <QVariant>
#include <QListWidgetItem>
#include <QTextTableFormat>
#include"client.h"

namespace Ui {
class integration;
}
class QCamera;
class QCameraViewfinder;
class QCameraImageCapture;
class QVBoxLayout;
class QSystemTrayIcon;

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


     void on_gestion_event_clicked();

     void on_gestion_joueur_clicked();

     void on_gestion_sport_clicked();

     void on_home_sport_clicked();

     void on_home_entraineur_clicked();

     void on_home_joueurs_clicked();

     void on_home_sponsor_clicked();

     void on_home_event_clicked();

     void on_home_catgories_clicked();

     void on_google_clicked();

     void on_activer_bip_clicked();

     void on_des_bip_clicked();
     void update_label();

     void on_home_mouvement_clicked();

     void on_controleAcces_clicked();

     void on_setting_clicked();

     void on_home_settings_clicked();

     void on_save_clicked();

     void on_load_clicked();

     void on_plein_clicked();

     void on_max_clicked();

     void on_min_clicked();
     /***************************Samar**********/

     void on_supprimer_emp_clicked();

     void on_comboBox_emp_currentIndexChanged(int index);

     void on_tableView_emp_doubleClicked(const QModelIndex &index);

     void on_modifier_emp_clicked();

     void on_excel_emp_clicked();

     void on_Valider_emp_clicked();

     void on_Annuler_emp_clicked();

     void on_emp_clicked();

     void on_supprimer_four_clicked();

     void on_comboBox_four_currentIndexChanged(int index);

     void on_search_four_clicked();

     void on_four_ajout_clicked();



     void on_buttonon_clicked();

     void on_buttonoff_clicked();

     void Timefunction();

     void on_actualiser_clicked();

     void on_push_photo_emp_clicked();

     void on_pushButton_modifier_clicked();

     void on_pushButton_lire_clicked();

     void on_four_clicked();

     void on_ajouter_four_clicked();

     void on_modifier_four_clicked();

     void on_Annuler_four_modif_clicked();

     void on_tableView_four_doubleClicked(const QModelIndex &index);

     void on_ajouter_emp_clicked();


     void on_home_employe_clicked();

     void on_home_fournisseur_clicked();

     void on_gestion_employe_clicked();

     void on_four2_clicked();

     void on_details_clicked();

     void on_moins_cher_clicked();

     void on_max_demande_clicked();

     void on_mindemande_clicked();

     void on_Nbevent_clicked();

     void on_musicplus_clicked();

     void on_musicmoins_clicked();

     void on_imprimer_clicked();

     void on_total_sport_clicked();

     void on_en_cours_sport_clicked();

     void on_total_entrain_clicked();

     void on_map_clicked();
     /***chat****/
     void returnPressed();
     void appendMessage(const QString &from, const QString &message);
     void newParticipant(const QString &nick);
     void participantLeft(const QString &nick);
     void on_stopmusic_clicked();

     void on_nb_four_clicked();

     void on_pushButton_camera_clicked();

     void on_recherche_emp_textChanged(const QString &arg1);

signals:
       void setCenter(QVariant,QVariant);

private:
    Ui::integration *ui;
    QMediaPlayer *son=new QMediaPlayer;
    QMediaPlayer *ajout=new QMediaPlayer;
    QMediaPlayer *supp=new QMediaPlayer;
    QMediaPlayer *music2=new QMediaPlayer;
    Arduino Ard;
musique *music;
QByteArray data;
int alertt;
QTimer *timer;
QCamera *mCamera;
QCameraViewfinder *mCameraViewfinder;
QCameraImageCapture *mCameraImageCapture;
QVBoxLayout *mLayout;
 QString parsed_data;
 Arduino Ar;
 QSystemTrayIcon *mSystemTrayIcon;
 /**chat***/

 QString NickName;
   QTextTableFormat tableFormat;
   Client client;
};

#endif // INTEGRATION_H
