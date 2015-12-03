#-------------------------------------------------
#
# Project created by QtCreator 2015-11-04T13:02:28
#
#-------------------------------------------------

QT       -= core gui

TARGET = lib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    removal.c \
    square.c \
    check.c \
    convert.c \
    removing_words.c

HEADERS += \
    square.h \
    check.h \
    removal.h \
    convert.h \
    removing_words.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
