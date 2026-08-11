QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/Menu.cpp \
    src/Animation.cpp \
    src/Attention.cpp \
    src/Creator.cpp \
    src/GameMain.cpp \
    src/MenuOptions.cpp \
    src/UserData.cpp \
    src/main.cpp

HEADERS += \
    include/Menu.h \
    include/Animation.h \
    include/Attention.h \
    include/Creator.h \
    include/GameMain.h \
    include/UserData.h

FORMS += \
    ui/Menu.ui \
    ui/Attention.ui \
    ui/Creator.ui \
    ui/GameMain.ui \
    ui/UserData.ui

TRANSLATIONS += \
    HatPuterCppTeaching_zh_CN.ts \

CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# 软件生成路径
DESTDIR = $$PWD/bin

# 开启O3优化
QMAKE_CXXFLAGS_RELEASE += -O3

DISTFILES += \
    resources/CreatorAvatar.png \
    resources/fonts/Primary.ttf
