QT       += core gui
QT       += core gui network  printsupport
QT       += core gui multimedia
QT       +=sql

QT += network
QT += printsupport
QT += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    connection.cpp \
    employes.cpp \
    exportexcelobject.cpp \
    fournisseurs.cpp \
    joueur_categ.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    connection.h \
    employes.h \
    exportexcelobject.h \
    fournisseurs.h \
    joueur_categ.h \
    mainwindow.h

FORMS += \
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
