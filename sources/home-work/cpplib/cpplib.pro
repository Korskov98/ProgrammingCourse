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
    vectors.cpp \
    convert_class.cpp \
    check_class.cpp \
    removal_class.cpp \
    removing_words_class.cpp \
    square_class.cpp

HEADERS += \
    vectors.h \
    convert_class.h \
    check_class.h \
    removal_class.h \
    removing_words_class.h \
    square_class.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
