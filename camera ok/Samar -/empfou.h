#ifndef EMPFOU_H
#define EMPFOU_H
#include <QObject>
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

    void on_recherche_textChanged(const QString &arg1);

    void on_buttonon_clicked();

    void on_buttonoff_clicked();

    void Timefunction();

    void on_actualiser_clicked();

    void on_push_photo_emp_clicked();

    void on_pushButton_modifier_clicked();

    void on_pushButton_lire_clicked();

    void on_ajouter_four_clicked();

    void on_modifier_four_clicked();

    void on_Annuler_four_modif_clicked();

    void on_tableView_four_doubleClicked(const QModelIndex &index);

    void on_ajouter_emp_clicked();

    void on_four2_clicked();

    void on_pushButton_camera_clicked();

    void on_nb_four_clicked();

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
