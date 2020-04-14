include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        biz.h \
        code_in_c.h \
        demoTest.h \
        test_f.h \
        usemycalss_test.h

SOURCES += \
        add_test.cpp \
        code_in_c.c \
        gmock_test_c_code.cc \
        main.cpp \
        test_f.cpp \
        usemyclass_test.cpp

