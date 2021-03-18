#ifndef AJOUTER_EVENT_H
#define AJOUTER_EVENT_H

#include <QWidget>

namespace Ui {
class ajouter_event;
}

class ajouter_event : public QWidget
{
    Q_OBJECT

public:
    explicit ajouter_event(QWidget *parent = nullptr);
    ~ajouter_event();

private slots:
    void on_Valider_clicked();

    void on_Annuler_clicked();

private:
    Ui::ajouter_event *ui;
};

#endif // AJOUTER_EVENT_H
