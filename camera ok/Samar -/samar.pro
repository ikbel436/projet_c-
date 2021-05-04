QT      += core gui serialport
QT      += core gui
QT      += core gui network  printsupport

QT      +=sql

QT      += network
QT      += printsupport
QT      += charts
QT      +=widgets multimedia
QT      += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arduino.cpp \
    camera.cpp \
    connection.cpp \
    empfou.cpp \
    employes.cpp \
    exportexcelobject.cpp \
    fournisseurs.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    produit.cpp

HEADERS += \
    arduino.h \
    camera.h \
    connection.h \
    empfou.h \
    employes.h \
    exportexcelobject.h \
    fournisseurs.h \
    login.h \
    mainwindow.h \
    produit.h

FORMS += \
    camera.ui \
    empfou.ui \
    login.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    projet.qrc

QMAKE_CXXFLAGS += -std=gnu++14
