import QtQuick 2.0
import QtQuick.Controls 2.5

ApplicationWindow {
    id: window
    width: 20
    height: 40
    visible: true

    Drawer {
        id: drawer
        width: 0.66 * window.width
        height: window.height
    }

    Label {
        id: content

        text: "Aa"
        font.pixelSize: 18
        anchors.fill: parent
        verticalAlignment: Label.AlignVCenter
        horizontalAlignment: Label.AlignHCenter

        transform: Translate {
            x: drawer.position * content.width * 0.33
        }
    }
}
