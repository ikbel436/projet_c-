/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Camera
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *option_camera;

    void setupUi(QDialog *Camera)
    {
        if (Camera->objectName().isEmpty())
            Camera->setObjectName(QString::fromUtf8("Camera"));
        Camera->resize(951, 472);
        scrollArea = new QScrollArea(Camera);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 30, 931, 431));
        scrollArea->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 913, 413));
        scrollArea->setWidget(scrollAreaWidgetContents);
        option_camera = new QPushButton(Camera);
        option_camera->setObjectName(QString::fromUtf8("option_camera"));
        option_camera->setGeometry(QRect(10, 0, 141, 28));
        option_camera->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
""));

        retranslateUi(Camera);

        QMetaObject::connectSlotsByName(Camera);
    } // setupUi

    void retranslateUi(QDialog *Camera)
    {
        Camera->setWindowTitle(QApplication::translate("Camera", "Dialog", nullptr));
        option_camera->setText(QApplication::translate("Camera", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Camera: public Ui_Camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
