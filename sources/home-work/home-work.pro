TEMPLATE = subdirs

app.depends = lib
test.depends = lib
cppapp.depends = cpplib
cpptest.depends = cpplib


SUBDIRS += \
    app \
    lib \
    test \
    cppapp \
    cpplib \
    cpptest
