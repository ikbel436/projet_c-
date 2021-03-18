#ifndef GESTION_SPONSOR_H
#define GESTION_SPONSOR_H

#include <QWidget>

namespace Ui {
class gestion_sponsor;
}

class gestion_sponsor : public QWidget
{
    Q_OBJECT

public:
    explicit gestion_sponsor(QWidget *parent = nullptr);
    ~gestion_sponsor();

private:
    Ui::gestion_sponsor *ui;
};

#endif // GESTION_SPONSOR_H
