QT       += core gui sql charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets qml quick gui core sql charts

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CustomDateTimeDelegate.cpp \
    CustomQSqlTableModel.cpp \
    QCustomDateEdit.cpp \
    QCustomSideFrame.cpp \
    QCustomTableView.cpp \
    dbmanager.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    CustomDateTimeDelegate.h \
    CustomQSqlTableModel.h \
    QCustomDateEdit.h \
    QCustomSideFrame.h \
    QCustomTableView.h \
    dbmanager.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    Mercado_pt_BR.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    android/AndroidManifest.xml \
    android/build.gradle \
    android/gradle.properties \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew \
    android/gradlew.bat \
    android/res/values/libs.xml

contains(ANDROID_TARGET_ARCH,arm64-v8a) {
    ANDROID_PACKAGE_SOURCE_DIR = \
        $$PWD/android
}

RESOURCES += \
    qt.qrc
