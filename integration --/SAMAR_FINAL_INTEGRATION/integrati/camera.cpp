#include "camera.h"
#include "ui_camera.h"
#include <QFile>
#include <QTextStream>
#include <QPixmap>
#include <QCamera>
#include <QCameraViewfinder>
#include <QVBoxLayout>
#include <QMenu>
#include <QAction>
#include <QCameraImageCapture>
#include <QFileDialog>
#include <QMessageBox>

Camera::Camera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Camera)
{
    ui->setupUi(this);

    mCamera=new QCamera(this);
    mCameraViewfinder=new QCameraViewfinder(this);
    mCameraImageCapture =new QCameraImageCapture(mCamera,this);
    mLayout = new QVBoxLayout;
    mOptionsMenu =new QMenu("Options",this);
    mActiverAction = new QAction("Activer",this);
    mStoperAction = new QAction("Stoper",this);
    mCapturerAction = new QAction("Capturer",this);

    mOptionsMenu->addActions({mActiverAction,
                              mStoperAction,
                              mCapturerAction});
    ui->option_camera->setMenu(mOptionsMenu);
    mCamera->setViewfinder(mCameraViewfinder);
    mLayout->addWidget(mCameraViewfinder);
    mLayout->setMargin(0);
    ui->scrollArea->setLayout(mLayout);

    QMessageBox::warning(this, "Camera","Camera ouvert avec succees");

    connect(mActiverAction,&QAction :: triggered, [&](){
        mCamera->start();
    });

    connect(mStoperAction,&QAction :: triggered,[&](){
        mCamera->stop();
    });

    connect(mCapturerAction,&QAction :: triggered,[&](){
        auto filename =  QFileDialog::getSaveFileName(this,"capturer","/","Image(*.jpg;*.jpeg;*.png)");
        if(filename.isEmpty()){
            return;
        }
        mCameraImageCapture->setCaptureDestination(QCameraImageCapture::CaptureToFile);
        QImageEncoderSettings imageEncoderSettings;
        imageEncoderSettings.setCodec("image/jpeg");
        imageEncoderSettings.setResolution(1600,1200);
        mCameraImageCapture->setEncodingSettings(imageEncoderSettings);
        mCamera->setCaptureMode(QCamera::CaptureStillImage);
        mCamera->start();
        mCamera->searchAndLock();
        mCameraImageCapture->capture(filename);
        mCamera->unlock();
    });
}

Camera::~Camera()
{
    delete ui;
}
