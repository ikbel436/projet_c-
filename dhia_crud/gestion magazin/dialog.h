#ifndef DIALOG_H
#define DIALOG_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QMainWindow
{
    Q_OBJECT

public:
     Dialog(QWidget *parent = nullptr);
    ~Dialog();



private slots:
     void on_pushButton_sauvgarderreservatio_clicked();

     void on_pushButton_modifierreservation_clicked();

     void on_tabWidget_3_currentChanged(int index);

     void on_tabWidget_3_tabBarClicked(int index);

     void on_tableView_2_activated(const QModelIndex &index);

     void on_pushButton_supp_pdt_clicked();

     void on_pushButton_modifierreservation_3_clicked();

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

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
