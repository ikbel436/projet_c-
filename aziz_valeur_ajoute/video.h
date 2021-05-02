#ifndef VIDEO_H
#define VIDEO_H

#include <QDialog>

namespace Ui {
class video;
}

class QMediaPlayer;
class video : public QDialog
{
    Q_OBJECT

public:
    explicit video(QWidget *parent = nullptr);
    ~video();

private slots:
    void on_open_clicked();

    void on_play_clicked();

    void on_pause_clicked();

    void on_stop_clicked();

    void on_volume_valueChanged(int value);

    void on_mute_clicked();

private:
    Ui::video *ui;
    QMediaPlayer *mMediaPlayer;
};

#endif // VIDEO_H
