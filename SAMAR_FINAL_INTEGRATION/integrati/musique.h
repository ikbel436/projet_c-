#ifndef MUSIQUE_H
#define MUSIQUE_H

#include <QDialog>

namespace Ui {
class musique;
}
class QMediaPlayer;
class musique : public QDialog
{
    Q_OBJECT

public:
    explicit musique(QWidget *parent = nullptr);
    ~musique();

private slots:
    void on_open_clicked();

    void on_play_clicked();

    void on_pause_clicked();

    void on_stop_clicked();

    void on_mute_clicked();

    void on_volume_valueChanged(int value);

private:
    Ui::musique *ui;

    QMediaPlayer *mMediaPlayer;
};



#endif // MUSIQUE_H
