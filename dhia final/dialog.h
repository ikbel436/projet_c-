#ifndef DIALOG_H
#define DIALOG_H

#include <QMainWindow>
#include "qcustomplot.h"
#include "arduino.h"
#include <QSound>
#include <QMediaPlayer>
#include <QDebug>
#include<QSqlQueryModel>
QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QMainWindow
{
    Q_OBJECT

public:
     Dialog(QWidget *parent = nullptr);
    ~Dialog();

bool  verif_produit ();
bool verif_magasin () ;

private slots:
     void on_pushButton_sauvgarderproduit_clicked();

     void on_pushButton_modifierproduit_clicked();

     void on_tabWidget_3_currentChanged(int index);

     void on_tabWidget_3_tabBarClicked(int index);

     void on_tableView_2_activated(const QModelIndex &index);

     void on_pushButton_supp_pdt_clicked();



     void on_pushButton_2_clicked();

     void on_radioButton_4_clicked();

     void on_radioButton_5_clicked();

     void on_pushButton_recherche_2_clicked();

     void on_btn_ajout_clicked();

     void on_btn_modifier_clicked();

     void on_tabWidget_2_currentChanged(int index);

     void on_tableView_mag_activated(const QModelIndex &index);

     void on_btn_supp_clicked();

     void vider_mag ();

     void vider_produit () ;




     void on_pushButton_pdf_clicked();

     void on_radioButton_clicked();

     void on_radioButton_2_clicked();

     void on_radioButton_3_clicked();

     void on_lineEdit_rechercher_textChanged(const QString &arg1);

     void on_lineEdit_rechercher_cursorPositionChanged(int arg1, int arg2);

     void on_pushButton_recherche_clicked();



     void on_pushButton_3_clicked();

     void on_annuler_clicked();

     void on_tabWidget_currentChanged(int index);



     void on_pushButton_supprimerpr_clicked();

     void on_pushButton_actualiserpr_clicked();


     void on_pushButton_ajoutmag_clicked();

     void on_lineEdit_rechercher_2_cursorPositionChanged(int arg1, int arg2);

     void on_supprimer_clicked();

     void on_pushButton_produit_clicked();


     void on_sliderprogress_sliderMoved(int position);



     void on_start_clicked();



     void on_positionchanged(qint64 position) ;

      void on_durationchanged(qint64 position) ;
      void on_stop_clicked();

      void on_fichiermp3_clicked();

      void on_btn_volume_clicked();

      void on_slider_volume_sliderMoved(int position);



      void update_label();

      void on_buttonon_clicked();

      void on_buttonoff_clicked();




      void on_combo_action_currentIndexChanged(const QString &arg1);



private:
    Ui::Dialog *ui;
    QSound *son;
    QMediaPlayer* player ;

    QString parsed_data; //variable contenant les données reçues
    Arduino Ar; //object temporaire
    int alertt;

};
#endif // DIALOG_H
