#ifndef AFFICHAGE_EVENT_H
#define AFFICHAGE_EVENT_H

#include <QWidget>

namespace Ui {
class affichage_event;
}

class affichage_event : public QWidget
{
    Q_OBJECT

public:
    explicit affichage_event(QWidget *parent = 0);
    ~affichage_event();


private slots:
    void on_annuler_clicked();

    void on_supprimer_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_modifier_clicked();

    void on_search_clicked();

    void on_excel_clicked();

private:
    Ui::affichage_event *ui;

};

#endif // AFFICHAGE_EVENT_H
