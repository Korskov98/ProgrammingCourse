#-------------------------------------------------
#
# Project created by QtCreator 2015-12-21T15:46:11
#
#-------------------------------------------------

QT       -= core gui

TARGET = libcpp
TEMPLATE = lib
CONFIG += staticlib

SOURCES += libcpp.cpp

HEADERS += libcpp.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
