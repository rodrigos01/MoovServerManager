#-------------------------------------------------
#
# Project created by QtCreator 2014-03-31T14:06:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MoovServerManager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    editserver.cpp \
    servermanager.cpp \
    server.cpp \
    serverlist.cpp

HEADERS  += mainwindow.h \
    editserver.h \
    servermanager.h \
    server.h \
    serverlist.h

FORMS    += mainwindow.ui \
    editserver.ui
