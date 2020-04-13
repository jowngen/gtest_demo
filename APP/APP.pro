TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        code_in_c.c \
        demo.cpp \
        main.cpp

HEADERS += \
    biz.h \
    code_in_c.h \
    demo.h \
    myclass.h \
    usemyclass.h \
    user.h
