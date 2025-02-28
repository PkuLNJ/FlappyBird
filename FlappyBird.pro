#-------------------------------------------------
#
# Project created by QtCreator 2023-05-20T10:43:16
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FlappyBird
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        flappyapp.cpp \
    game.cpp \
    setting.cpp \
    gamescene.cpp \
    help.cpp \
    birditem.cpp \
    ground.cpp \
    pipeitem.cpp \
    gameover.cpp \
    bonus.cpp

HEADERS += \
        flappyapp.h \
    game.h \
    setting.h \
    gamescene.h \
    help.h \
    ui_game.h \
    birditem.h \
    ground.h \
    pipeitem.h \
    gameover.h \
    bonus.h

FORMS += \
        flappyapp.ui \
    game.ui \
    setting.ui \
    help.ui \
    gameover.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image/resource-image.qrc \
    image/resource-music.qrc
