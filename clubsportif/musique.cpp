#include "musique.h"
#include "ui_musique.h"
#include <QMediaPlayer>
#include <QFileDialog>

musique::musique(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::musique)
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

musique::~musique()
{
    delete ui;
}

void musique::on_open_clicked()
{
QString filename=QFileDialog::getOpenFileName(this,"ouvrir");
if(filename.isEmpty()){
    return ;
}
mMediaPlayer->setMedia(QUrl::fromLocalFile(filename));
mMediaPlayer->setVolume(ui->volume->value());
on_play_clicked();
}

void musique::on_play_clicked()
{
mMediaPlayer->play();
}

void musique::on_pause_clicked()
{
mMediaPlayer->pause();
}

void musique::on_stop_clicked()
{
mMediaPlayer->stop();
}

void musique::on_volume_valueChanged(int value)
{
    mMediaPlayer->setVolume(value);
}

void musique::on_mute_clicked()
{     if(ui->mute->text()=="Mute"){
    mMediaPlayer->setMuted(true);
    ui->mute->setText("unmute");
        }
        else {
            mMediaPlayer->setMuted(false);
            ui->mute->setText("mute");
        }
}











