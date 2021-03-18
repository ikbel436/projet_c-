#ifndef AFFICHAGE_SPONSOR_H
#define AFFICHAGE_SPONSOR_H

#include <QWidget>

namespace Ui {
class affichage_sponsor;
}

class affichage_sponsor : public QWidget
{
    Q_OBJECT

public:
    explicit affichage_sponsor(QWidget *parent = nullptr);
    ~affichage_sponsor();

private:
    Ui::affichage_sponsor *ui;
};

#endif // AFFICHAGE_SPONSOR_H
