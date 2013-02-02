QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app

#INCLUDEPATH += /usr/include/opencv /usr/include/opencv2
#LIBS += -Lopencv -Lopencv2

INCLUDEPATH += -l/usr/include/opencv -l/usr/include/opencv2
LIBS += -lopencv_core
LIBS += -lopencv_highgui

SOURCES += \
    main.cpp \
    Player.cpp \
    QOpenCVWidget.cpp

HEADERS += \
    Player.h \
    QOpenCVWidget.h
