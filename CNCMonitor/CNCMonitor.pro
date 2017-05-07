#-------------------------------------------------
#
# Project created by QtCreator 2017-05-04T22:21:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CNCMonitor
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
QMAKE_CXXFLAGS += -std=c++0x
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    machinelistview.cpp \
    machinestatusview.cpp \
    machinelistsetting.cpp \
    machinestatussetting.cpp \
    database.cpp \
    machinestatus.cpp \
    machinelistitem.cpp

HEADERS  += mainwindow.h \
    machinelistview.h \
    machinestatusview.h \
    machinelistsetting.h \
    machinestatussetting.h \
    database.h \
    machinestatus.h \
    machinelistitem.h

FORMS    += mainwindow.ui \
    machinelistview.ui \
    machinestatusview.ui \
    machinelistsetting.ui \
    machinestatussetting.ui \
    machinelistitem.ui

RESOURCES += \
    resource.qrc
