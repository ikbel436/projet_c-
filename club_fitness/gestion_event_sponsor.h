#ifndef GESTION_EVENT_SPONSOR_H
#define GESTION_EVENT_SPONSOR_H

#include <QWidget>
#include <QWidget>

namespace Ui {
class gestion_event_sponsor;
}

class gestion_event_sponsor : public QWidget
{
    Q_OBJECT

public:
    explicit gestion_event_sponsor(QWidget *parent = nullptr);
    ~gestion_event_sponsor();

private slots:
    void on_event_clicked();

    void on_sponsor_clicked();

    void on_pushButton_clicked();

private:
    Ui::gestion_event_sponsor *ui;
};

#endif // GESTION_EVENT_SPONSOR_H
