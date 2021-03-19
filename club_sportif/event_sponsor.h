#ifndef EVENT_SPONSOR_H
#define EVENT_SPONSOR_H

#include <QDialog>

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

private:
    Ui::event_sponsor *ui;
};

#endif // EVENT_SPONSOR_H
