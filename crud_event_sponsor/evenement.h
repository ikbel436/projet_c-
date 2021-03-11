#ifndef EVENEMENT_H
#define EVENEMENT_H
#include <event.h>
#include<sponsor.h>
#include <QDialog>




namespace Ui {
class Evenement;
}

class Evenement : public QDialog
{
    Q_OBJECT

public:
    explicit Evenement(QWidget *parent = nullptr);
    ~Evenement();

private slots:

   // void on_pushButton_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_ajouter_clicked();

    void on_pb_ajouter_s_clicked();

    void on_pb_supprimer_s_clicked();

private:
    Ui::Evenement *ui;
    EVENT F;
    sponsor S;


};




#endif // EVENEMENT_H
