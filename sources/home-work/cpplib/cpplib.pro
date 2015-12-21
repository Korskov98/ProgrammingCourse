#-------------------------------------------------
#
# Project created by QtCreator 2015-12-21T17:03:31
#
#-------------------------------------------------

QT       -= core gui

TARGET = cpplib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    vectors.cpp

HEADERS += \
    vectors.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
