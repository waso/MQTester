#-------------------------------------------------
#
# Project created by QtCreator 2010-06-07T23:53:24
#
#-------------------------------------------------

QT       += core gui

TARGET = MQTester
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    treemodel.cpp \
    treeitem.cpp \
    testcaseitem.cpp \
    projectitem.cpp \
#    workspaceitem.cpp
    suiteitem.cpp \
    queuedetails.cpp \
    testcaseform.cpp \
    unitesttreemodel.cpp

HEADERS  += mainwindow.h \
    treemodel.h \
    treeitem.h \
    testcaseitem.h \
    projectitem.h \
#    workspaceitem.h \
    itemtype.h \
    suiteitem.h \
    queuedetails.h \
    testcaseform.h \
    unitesttreemodel.h \
    custom_types.h

FORMS    += mainwindow.ui \
    testcaseform.ui

RESOURCES += \
    Resources.qrc
