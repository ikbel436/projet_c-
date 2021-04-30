QT       += core gui
QT       += core gui network  printsupport

QT       +=sql

QT += network
QT += printsupport
QT += charts
QT +=widgets multimedia
QT +=serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arduino.cpp \
    categories.cpp \
    connection.cpp \
    entraineur.cpp \
    event.cpp \
    exportexcelobject.cpp \
    integration.cpp \
    joueurs.cpp \
    main.cpp \
    mainwindow.cpp \
    musique.cpp \
    qcustomplot.cpp \
    send_email_sponsor.cpp \
    smtp_sponsor.cpp \
    sponsor.cpp \
    sport.cpp \
    stati.cpp

HEADERS += \
    arduino.h \
    categories.h \
    connection.h \
    entraineur.h \
    event.h \
    exportexcelobject.h \
    integration.h \
    joueurs.h \
    mainwindow.h \
    musique.h \
    qcustomplot.h \
    send_email_sponsor.h \
    smtp_sponsor.h \
    sponsor.h \
    sport.h \
    stati.h

FORMS += \
    integration.ui \
    mainwindow.ui \
    musique.ui \
    send_email_sponsor.ui \
    stati.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    projet.qrc
