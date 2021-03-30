#ifndef SPORT_ENTRAINEUR_H
#define SPORT_ENTRAINEUR_H
#include <QSound>
#include <QDialog>

namespace Ui {
class sport_entraineur;
}

class sport_entraineur : public QDialog
{
    Q_OBJECT

public:
    explicit sport_entraineur(QWidget *parent = nullptr);
    ~sport_entraineur();
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

    void on_sport_clicked();

    void on_traiter_clicked();

    void on_entraineur_ajout_clicked();

    void on_image_clicked();

    void on_mailing_clicked();

private:
    Ui::sport_entraineur *ui;
    QSound *son;
            QSound *ajout;
            QSound *supp;
};

#endif // SPORT_ENTRAINEUR_H
