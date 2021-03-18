#ifndef AJOUTER_SPONSOR_H
#define AJOUTER_SPONSOR_H

#include <QWidget>

namespace Ui {
class ajouter_sponsor;
}

class ajouter_sponsor : public QWidget
{
    Q_OBJECT

public:
    explicit ajouter_sponsor(QWidget *parent = nullptr);
    ~ajouter_sponsor();

private:
    Ui::ajouter_sponsor *ui;
};

#endif // AJOUTER_SPONSOR_H
