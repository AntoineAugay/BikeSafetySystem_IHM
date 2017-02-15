TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp \
    parser.cpp \
    datarecord.cpp \
    displaydata.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

INSTALLS        = target
target.files    = widgettest
target.path     = /home/pi

HEADERS += \
    parser.h \
    datarecord.h \
    displaydata.h
