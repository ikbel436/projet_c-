#ifndef GESTION_EVENT_H
#define GESTION_EVENT_H

#include <QWidget>
#include <QDebug>

namespace Ui {
class gestion_event;
}

class gestion_event : public QWidget
{
    Q_OBJECT

public:
    explicit gestion_event(QWidget *parent = nullptr);
    ~gestion_event();

private slots:
    void on_event_clicked();

    void on_event2_clicked();

    void on_pushButton_clicked();

private:
    Ui::gestion_event *ui;
};

#endif // GESTION_EVENT_H
