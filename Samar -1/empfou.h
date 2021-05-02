#ifndef EMPFOU_H
#define EMPFOU_H

#include <QDialog>
#include <QSound>
#include <arduino.h>
#include "QTimer"

namespace Ui {
class empfou;
}

class QCamera;
class QCameraViewfinder;
class QCameraImageCapture;
class QVBoxLayout;

class empfou : public QDialog
{
    Q_OBJECT

public:
    explicit empfou(QWidget *parent = nullptr);
    ~empfou();
private slots:

    void on_supprimer_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_modifier_clicked();

     void on_excel_clicked();

    void on_Valider_clicked();

    void on_Annuler_clicked();

    void on_event_clicked();

    void on_annuler_clicked();

    void on_ajouter_clicked();

    void on_supprimer_2_clicked();

    void on_comboBox_2_currentIndexChanged(int index);

    void on_search_2_clicked();

    void on_tableView_2_doubleClicked(const QModelIndex &index);

    void on_modifier_2_clicked();

    void on_sponsor2_clicked();

    void on_sponsor_ajout_clicked();

    void on_Annuler_2_clicked();

    void on_recherche_textChanged(const QString &arg1);

    void on_buttonon_clicked();

    void on_buttonoff_clicked();

    void Timefunction();

    void on_actualiser_clicked();

    void on_push_photo_clicked();

    void on_pushButton_modifier_clicked();

    void on_pushButton_lire_clicked();

private:
    Ui::empfou *ui;
    QSound *son;
    QSound *ajout;
    QSound *supp;
    QString parsed_data; //variable contenant les données reçues
        Arduino Ar; //object temporaire
        int alertt;
        QTimer *timer;
        QCamera *mCamera;
        QCameraViewfinder *mCameraViewfinder;
        QCameraImageCapture *mCameraImageCapture;
        QVBoxLayout *mLayout;

};

#endif // EMPFOU_H
