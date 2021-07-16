#-------------------------------------------------
#
# Project created by QtCreator 2021-07-15T23:54:59
#
#-------------------------------------------------

QT       += scripttools testlib

QT       -= gui

TARGET = tst_atmtesttest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += tst_atmtesttest.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    atm_account.h \
    checkingaccount.h \
    savingsaccount.h
