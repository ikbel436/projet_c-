#ifndef CAMERA_H
#define CAMERA_H

#include <QDialog>
#include <QObject>
#include <QDialog>
#include <QCamera>
#include <QCameraViewfinder>
#include <QVBoxLayout>
#include <QMenu>
#include <QAction>

namespace Ui {
class Camera;
}

class QCamera;
class QCameraViewfinder;
class QCameraImageCapture;
class QVBoxLayout;
class QMenu;
class QAction;

class Camera : public QDialog
{
    Q_OBJECT

public:
    explicit Camera(QWidget *parent = nullptr);
    ~Camera();

private:
    Ui::Camera *ui;

    QCamera *mCamera;
    QCameraViewfinder *mCameraViewfinder;
    QCameraImageCapture *mCameraImageCapture;
    QVBoxLayout *mLayout;
    QMenu *mOptionsMenu; //mOpcionesMenu
    QAction *mActiverAction; //mEncenderAction
    QAction *mStoperAction; //mApagarAction
    QAction *mCapturerAction; //mCapturarAction
};

#endif // CAMERA_H
