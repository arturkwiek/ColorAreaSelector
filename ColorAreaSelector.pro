QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
#OpenCV ====================> Windows DELL Sii
INCLUDEPATH += C:\opencv\build\install\include

LIBS += -LC:\opencv\build\install\x64\mingw\bin
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_calib3d460.dll
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_core460.dll
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_features2d460.dll
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_flann460.dll
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_highgui460.dll
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_imgcodecs460.dll
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_imgproc460.dll
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_ml460.dll
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_objdetect460.dll
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_videoio460.dll
#<OpenCV =============== Windows DELL Sii

#===============> Linux
#INCLUDEPATH += /usr/local/include

#LIBS += -L/usr/local/lib
#LIBS += -lopencv_calib3d
#LIBS += -lopencv_core
#LIBS += -lopencv_features2d
#LIBS += -lopencv_flann
#LIBS += -lopencv_highgui
#LIBS += -lopencv_imgcodecs
#LIBS += -lopencv_imgproc
#LIBS += -lopencv_ml
#LIBS += -lopencv_objdetect
#LIBS += -lopencv_videoio
#<===============

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    colorselectordlg.cpp

HEADERS += \
    colorselectordlg.h

FORMS += \
    colorselectordlg.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
