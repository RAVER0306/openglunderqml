// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

#include <QGuiApplication>

#include <QtQuick/QQuickView>

#include "squircle.h"

//! [1]
int main(int argc, char **argv)
{
    QGuiApplication app(argc, argv);

    QQuickWindow::setGraphicsApi(QSGRendererInterface::OpenGL);

    QQuickView view1;
    view1.setTitle("Fluten UI Window");
    view1.setResizeMode(QQuickView::SizeRootObjectToView);
    view1.setSource(QUrl("qrc:///scenegraph/openglunderqml/app.qml"));
    view1.show();

    QQuickView view2;
    view2.setTitle("QML Window")
    view2.setResizeMode(QQuickView::SizeRootObjectToView);
    view2.setSource(QUrl("qrc:///scenegraph/openglunderqml/main2.qml"));
    view2.show();

    return QGuiApplication::exec();
}
//! [1]
