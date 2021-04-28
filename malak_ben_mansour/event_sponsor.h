#ifndef EVENT_SPONSOR_H
#define EVENT_SPONSOR_H

#include <QDialog>
#include <QSound>
#include "arduino.h"
namespace Ui {
class event_sponsor;
}

class event_sponsor : public QDialog
{
    Q_OBJECT

public:
    explicit event_sponsor(QWidget *parent = nullptr);
    ~event_sponsor();
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

private:
    Ui::event_sponsor *ui;
    QSound *son;
    QSound *ajout;
    QSound *supp;
    Arduino Ard;

};

#endif // EVENT_SPONSOR_H
