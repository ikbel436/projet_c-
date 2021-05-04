/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLineEdit *log;
    QLineEdit *mdp;
    QLabel *label;
    QLabel *label_2;
    QPushButton *connecter;
    QLabel *label_pic;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(643, 200);
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(110, 165, 165);\n"
"\n"
"background-image: url(:/icons/35.jpg);"));
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(180, 0, 461, 171));
        log = new QLineEdit(widget);
        log->setObjectName(QString::fromUtf8("log"));
        log->setGeometry(QRect(270, 20, 181, 31));
        log->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"border-color: rgb(170, 0, 0);"));
        log->setEchoMode(QLineEdit::Normal);
        mdp = new QLineEdit(widget);
        mdp->setObjectName(QString::fromUtf8("mdp"));
        mdp->setGeometry(QRect(270, 70, 181, 31));
        mdp->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"border-color: rgb(170, 0, 0);"));
        mdp->setEchoMode(QLineEdit::Password);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 20, 261, 31));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 221, 31));
        connecter = new QPushButton(widget);
        connecter->setObjectName(QString::fromUtf8("connecter"));
        connecter->setGeometry(QRect(130, 120, 251, 28));
        connecter->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);"));
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setEnabled(true);
        label_pic->setGeometry(QRect(10, 0, 161, 171));
        login->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "MainWindow", nullptr));
        log->setPlaceholderText(QApplication::translate("login", "login", nullptr));
        mdp->setPlaceholderText(QApplication::translate("login", "password", nullptr));
        label->setText(QApplication::translate("login", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; font-style:italic; text-decoration: underline; color:#aa0000;\">Nom d'utilisateur:</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("login", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; font-style:italic; text-decoration: underline; color:#aa0000;\">Mot de passe:</span></p></body></html>", nullptr));
        connecter->setText(QApplication::translate("login", "se connecter", nullptr));
        label_pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
