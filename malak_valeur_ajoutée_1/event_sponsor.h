#ifndef EVENT_SPONSOR_H
#define EVENT_SPONSOR_H

#include <QDialog>
#include <QSound>

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

private:
    Ui::event_sponsor *ui;
    QSound *son;
    QSound *ajout;
    QSound *supp;

};

#endif // EVENT_SPONSOR_H
