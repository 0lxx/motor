#-------------------------------------------------
#
# Project created by QtCreator 2022-07-20T12:42:04
#
#-------------------------------------------------

QT       += core gui axcontainer

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = motor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    form.cpp \
    test.cpp

HEADERS  += mainwindow.h \
    x_net.h \
    xnetclient.h \
    form.h

FORMS    += mainwindow.ui \
    form.ui

RESOURCES += \
    picture.qrc

#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../library/release/ -lX_Net
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../library/debug/ -lX_Net
#else:unix: LIBS += -L$$PWD/../library/ -lX_Net

#INCLUDEPATH += $$PWD/../library/debug
#DEPENDPATH += $$PWD/../library/debug

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../library/release/ -lgtest
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../library/debug/ -lgtest
else:unix: LIBS += -L$$PWD/../library/ -lgtest

INCLUDEPATH += $$PWD/../library/debug
DEPENDPATH += $$PWD/../library/debug

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../library/release/libgtest.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../library/debug/libgtest.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../library/release/gtest.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../library/debug/gtest.lib
else:unix: PRE_TARGETDEPS += $$PWD/../library/libgtest.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../library/release/ -lX_Net
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../library/debug/ -lX_Net
else:unix: LIBS += -L$$PWD/../library/ -lX_Net

INCLUDEPATH += $$PWD/../library/debug
DEPENDPATH += $$PWD/../library/debug
