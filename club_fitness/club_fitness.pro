QT       += core gui network  printsupport
QT       += core gui
QT       +=sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    affichage_event.cpp \
    affichage_sponsor.cpp \
    ajouter_event.cpp \
    ajouter_sponsor.cpp \
    connection.cpp \
    event.cpp \
    exportexcelobject.cpp \
    gestion_event.cpp \
    gestion_event_sponsor.cpp \
    gestion_sponsor.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    affichage_event.h \
    affichage_sponsor.h \
    ajouter_event.h \
    ajouter_sponsor.h \
    connection.h \
    event.h \
    exportexcelobject.h \
    gestion_event.h \
    gestion_event_sponsor.h \
    gestion_sponsor.h \
    mainwindow.h

FORMS += \
    affichage_event.ui \
    affichage_sponsor.ui \
    ajouter_event.ui \
    ajouter_sponsor.ui \
    gestion_event.ui \
    gestion_event_sponsor.ui \
    gestion_sponsor.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    icons/icons8_add_user_male_200px.png \
    icons/icons8_american_football_player_96px.png \
    icons/icons8_back_to_200px.png \
    icons/icons8_checkmark_96px.png \
    icons/icons8_coach_240px.png \
    icons/icons8_home_48px.png \
    icons/icons8_update_user_160px_1.png

RESOURCES += \
    images.qrc
