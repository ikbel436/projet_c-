QT       += core gui

QT       += core gui network  printsupport

QT       +=sql

QT += network
QT += printsupport
QT += charts
QT +=multimedia
QT +=multimediawidgets


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    connection.cpp \
    email_entraineur.cpp \
    entraineur.cpp \
    main.cpp \
    mainwindow.cpp \
    smtp_entraineur.cpp \
    sport.cpp \
    sport_entraineur.cpp \
    video.cpp

HEADERS += \
    connection.h \
    email_entraineur.h \
    entraineur.h \
    mainwindow.h \
    smtp_entraineur.h \
    sport.h \
    sport_entraineur.h \
    video.h

FORMS += \
    email_entraineur.ui \
    mainwindow.ui \
    sport_entraineur.ui \
    video.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc \
    projet.qrc

DISTFILES +=
