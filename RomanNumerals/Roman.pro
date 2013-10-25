TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG +=c++11

cache()

INCLUDEPATH += /Users/filipsajdak/Priv/TDD/tmp/googlemock-read-only/include
INCLUDEPATH += /Users/filipsajdak/Priv/TDD/tmp/googlemock-read-only/gtest/include

LIBS += -L/Users/filipsajdak/Priv/TDD/tmp/googlemock-build/gtest
LIBS += -L/Users/filipsajdak/Priv/TDD/tmp/googlemock-build/
LIBS += -lgtest
LIBS += -lgmock
LIBS += -lgmock_main
#LIBS += -pthreads

SOURCES += \
    RomansTest.cpp \
    Romans.cpp

HEADERS += \
    Romans.h
