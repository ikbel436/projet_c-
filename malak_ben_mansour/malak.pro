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
    connection.cpp \
    event.cpp \
    event_sponsor.cpp \
    exportexcelobject.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp \
    send_email_sponsor.cpp \
    smtp_sponsor.cpp \
    sponsor.cpp \
    stati.cpp

HEADERS += \
    arduino.h \
    connection.h \
    event.h \
    event_sponsor.h \
    exportexcelobject.h \
    mainwindow.h \
    qcustomplot.h \
    send_email_sponsor.h \
    smtp_sponsor.h \
    sponsor.h \
    stati.h

FORMS += \
    event_sponsor.ui \
    mainwindow.ui \
    send_email_sponsor.ui \
    stati.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    projet.qrc
