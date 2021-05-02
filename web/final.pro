QT       += core gui

QT       += core gui network  printsupport
QT       += core gui multimedia multimediawidgets
QT       +=sql
QT += core
QT += network
QT += printsupport
QT += charts
QT += widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    categories.cpp \
    connection.cpp \
    email.cpp \
    joueur_categ.cpp \
    joueurs.cpp \
    main.cpp \
    mainwindow.cpp \
    smtp_joueur.cpp \
    sport.cpp

HEADERS += \
    categories.h \
    connection.h \
    email.h \
    joueur_categ.h \
    joueurs.h \
    mainwindow.h \
    smtp_joueur.h \
    sport.h

FORMS += \
    email.ui \
    joueur_categ.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc \
    projet.qrc

DISTFILES +=
