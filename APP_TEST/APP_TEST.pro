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
        gmock_user_test.h \
        test_f.h

SOURCES += \
        add_test.cpp \
        code_in_c.c \
        gmock_test_c_code.cc \
        gmock_user_test.cpp \
        main.cpp \
        test_f.cpp

