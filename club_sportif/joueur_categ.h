#ifndef JOUEUR_CATEG_H
#define JOUEUR_CATEG_H

#include <QDialog>
#include<QRegExpValidator>
#include <QMediaPlayer>

namespace Ui {
class joueur_categ;
}

class joueur_categ : public QDialog
{
    Q_OBJECT

public:
    explicit joueur_categ(QWidget *parent = nullptr);
    ~joueur_categ();
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

    void on_excel_5_clicked();

    void on_Valider_2_clicked();

    void on_event_2_clicked();

    void on_supprimer_2_clicked();

    void on_annuler_2_clicked();

    void on_search_2_clicked();

    void on_comboBox_2_activated(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_tableView_2_doubleClicked(const QModelIndex &index);

    void on_modifier_2_clicked();

    void on_Annuler_2_clicked();

private:
    Ui::joueur_categ *ui;
    QIntValidator*roll;
     QMediaPlayer* player;
};

#endif // JOUEUR_CATEG_H
