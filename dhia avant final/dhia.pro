QT       += core gui sql printsupport multimedia multimediawidgets


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    connexion.cpp \
    magasin.cpp \
    main.cpp \
    dialog.cpp \
    produit.cpp \
    qcustomplot.cpp \
    statistiq.cpp

HEADERS += \
    connexion.h \
    dialog.h \
    magasin.h \
    produit.h \
    qcustomplot.h \
    statistiq.h

FORMS += \
    dialog.ui \
    statistiq.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    Resources.qrc
