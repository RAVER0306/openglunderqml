# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: BSD-3-Clause

cmake_minimum_required(VERSION 3.16)
project(ftest LANGUAGES CXX)

set(FLUENTUI_BUILD_EXAMPLES OFF)

add_subdirectory(FluentUI)

#

find_package(Qt6 REQUIRED COMPONENTS Core Gui Qml Quick)

qt_standard_project_setup()

qt_add_executable(ftest WIN32 MACOSX_BUNDLE
    main.cpp
    squircle.cpp squircle.h
)

set_target_properties(ftest PROPERTIES
    OUTPUT_NAME openglunderqmlapp
)

target_link_libraries(ftest PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Qml
    Qt6::Quick
    fluentuiplugin
)

qt_add_qml_module(ftest
    URI OpenGLUnderQML
    QML_FILES main.qml
    RESOURCE_PREFIX /scenegraph/openglunderqml
    NO_RESOURCE_TARGET_PATH
    QML_FILES app.qml
    QML_FILES main2.qml
)

install(TARGETS ftest
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
