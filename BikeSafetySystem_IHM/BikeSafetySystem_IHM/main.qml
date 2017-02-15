import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.4

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Bike Safety System")

    Rectangle {
        id: rectSpeed
        x: 0
        y: 174
        width: 500; height: 132

        Column {
            id: columnSpeed
            width: 500
            height: 132
            Text {
                id: textSpeed
                text: displayData.speedChange
                anchors.right: parent.right
                anchors.rightMargin: 0
                anchors.bottom: parent.bottom
                anchors.bottomMargin: 0
                verticalAlignment: Text.AlignBottom
                horizontalAlignment: Text.AlignRight
                font.underline: false
                font.pointSize: 70            }
        }
    }

    Rectangle {
        id: rectSpeedUnit
        x: 500
        y: 174
        width: 140
        height: 132
        Column {
            id: columnSpeedUnit
            width: 139
            height: 128
            Text {
                id: textSpeedUnit
                text: "km/h"
                anchors.left: parent.left
                anchors.leftMargin: 0
                anchors.bottom: parent.bottom
                anchors.bottomMargin: 0
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignLeft
                font.pointSize: 25
                font.underline: false
            }
        }
    }

    Rectangle {
        id: rectHour
        x: 500
        y: 0
        width: 140
        height: 40
        Column {
            id: columnHour
            width: 139
            height: 128
            Text {
                id: textHour
                text: displayData.hourChange + ":" + displayData.minutChange
                anchors.right: parent.right
                anchors.rightMargin: 0
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignRight
                font.pointSize: 25
                font.underline: false
            }
        }
    }
}
