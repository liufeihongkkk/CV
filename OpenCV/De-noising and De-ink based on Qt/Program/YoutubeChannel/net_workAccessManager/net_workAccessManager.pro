QT += core
QT += gui
QT += network
CONFIG += c++11

TARGET = net_workAccessManager
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    http_network.cpp

HEADERS += \
    http_network.h
