#ifndef GESTION_H
#define GESTION_H

#include <QDialog>
#include<entraineur.h>

namespace Ui {
class gestion;
}

class gestion : public QDialog
{
    Q_OBJECT

public:
    explicit gestion(QWidget *parent = nullptr);
    ~gestion();

private slots:
    void on_pb_supprimer_e_clicked();

    void on_pb_ajouter_e_clicked();


private:
    Ui::gestion *ui;
    entraineur F;
};

#endif // GESTION_H
