include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        demoTest.h \
        ../APP/demo.h \
        ../APP/myclass.h \
        ../APP/usemyclass.h \
        ../APP/code_in_c.h

SOURCES += \
        demoTest.cpp \
        gmock_test_c_code.cc \
        main.cpp \
        ../APP/demo.cpp \
        ../APP/code_in_c.c

