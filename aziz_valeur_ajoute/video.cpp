#include "video.h"
#include "ui_video.h"
#include <QMediaPlayer>
#include <QFileDialog>

video::video(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::video)
{
    ui->setupUi(this);
    mMediaPlayer=new QMediaPlayer(this);
    connect(mMediaPlayer,&QMediaPlayer::positionChanged, [&](qint64 pos){
        ui->avance->setValue(pos);
    });
    connect(mMediaPlayer,&QMediaPlayer::durationChanged, [&](qint64 dur){
        ui->avance->setMaximum(dur);
    });
}

video::~video()
{
    delete ui;
}

void video::on_open_clicked()
{
QString filename=QFileDialog::getOpenFileName(this,"ouvrir");
if(filename.isEmpty()){
    return ;
}
mMediaPlayer->setMedia(QUrl::fromLocalFile(filename));
mMediaPlayer->setVolume(ui->volume->value());
on_play_clicked();
}

void video::on_play_clicked()
{
mMediaPlayer->play();
}

void video::on_pause_clicked()
{
mMediaPlayer->pause();
}

void video::on_stop_clicked()
{
mMediaPlayer->stop();
}

void video::on_volume_valueChanged(int value)
{
    mMediaPlayer->setVolume(value);
}

void video::on_mute_clicked()
{     if(ui->mute->text()=="Mute"){
    mMediaPlayer->setMuted(true);
    ui->mute->setText("unmute");
        }
        else {
            mMediaPlayer->setMuted(false);
            ui->mute->setText("mute");
        }
}
