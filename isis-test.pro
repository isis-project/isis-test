#-------------------------------------------------
#
# Project created by QtCreator 2012-03-06T13:29:30
#
#-------------------------------------------------

QT       += core gui webkit

TARGET = isis-test
TEMPLATE = app
INCLUDEPATH += $$(LUNA_STAGING)/include/QtWebKit
LIBS += -L$$(LUNA_STAGING)/lib

SOURCES += main.cpp

debtarget.target = deb
debtarget.commands = dpkg-buildpackage -rfakeroot


