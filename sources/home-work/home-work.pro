TEMPLATE = subdirs

app.depends = lib
test.depends = lib


SUBDIRS += \
    app \
    lib \
    test \
    cppapp
