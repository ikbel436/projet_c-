QT       += core gui
QT       += core gui network  printsupport

QT       +=sql

QT += network
QT += printsupport
QT += charts
QT +=widgets multimedia quickwidgets
QT +=serialport

QT +=multimedia multimediawidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets quickwidgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
TARGET= QSystemTrayIcon
SOURCES += \
    arduino.cpp \
    camera.cpp \
    categories.cpp \
    chatconnection.cpp \
    client.cpp \
    connection.cpp \
    employes.cpp \
    entraineur.cpp \
    event.cpp \
    exportexcelobject.cpp \
    fournisseurs.cpp \
    integration.cpp \
    joueurs.cpp \
    magasin.cpp \
    main.cpp \
    mainwindow.cpp \
    musique.cpp \
    peermanager.cpp \
    produit.cpp \
    qcustomplot.cpp \
    send_email_sponsor.cpp \
    server.cpp \
    smtp_sponsor.cpp \
    sponsor.cpp \
    sport.cpp \
    stati.cpp \
    statistiq.cpp

HEADERS += \
    arduino.h \
    camera.h \
    categories.h \
    chatconnection.h \
    client.h \
    connection.h \
    employes.h \
    entraineur.h \
    event.h \
    exportexcelobject.h \
    fournisseurs.h \
    integration.h \
    joueurs.h \
    magasin.h \
    mainwindow.h \
    musique.h \
    peermanager.h \
    produit.h \
    qcustomplot.h \
    send_email_sponsor.h \
    server.h \
    smtp_sponsor.h \
    sponsor.h \
    sport.h \
    stati.h \
    statistiq.h

FORMS += \
    camera.ui \
    integration.ui \
    mainwindow.ui \
    musique.ui \
    send_email_sponsor.ui \
    stati.ui \
    statistiq.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    projet.qrc \
    qt.qrc
QMAKE_CXXFLAGS += -std=gnu++14
