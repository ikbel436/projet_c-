QT       += core gui

QT       += core gui network  printsupport

QT       +=sql

QT += network
QT += printsupport
QT += charts
QT +=multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    connection.cpp \
    entraineur.cpp \
    main.cpp \
    mainwindow.cpp \
    sport.cpp \
    sport_entraineur.cpp

HEADERS += \
    connection.h \
    entraineur.h \
    mainwindow.h \
    sport.h \
    sport_entraineur.h

FORMS += \
    mainwindow.ui \
    sport_entraineur.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc \
    projet.qrc

DISTFILES +=
