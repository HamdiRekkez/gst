#-------------------------------------------------
#
# Project created by QtCreator 2018-03-01T12:46:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Gstreamer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    pipeline.cpp

HEADERS  += mainwindow.h \
    pipeline.h

FORMS    += mainwindow.ui

CONFIG += link_pkgconfig
PKGCONFIG += gstreamer-1.0 glib-2.0 gstreamer-video-1.0
