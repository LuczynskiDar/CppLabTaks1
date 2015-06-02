TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    cvector.cpp \
    exvector.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    cvector.h \
    exvector.h

