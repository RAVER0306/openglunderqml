import QtQuick
import QtQuick.Window
import QtQuick.Controls
import QtQuick.Layouts
import FluentUI

Item {
    id: app

    Component.onCompleted: {
        FluApp.init(app)
        FluApp.routes = {
            "/":"qrc:///scenegraph/openglunderqml/main.qml"
        }
        FluApp.initialRoute = "/"
        FluApp.run()
    }
}
