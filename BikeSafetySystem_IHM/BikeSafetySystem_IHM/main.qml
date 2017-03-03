import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.4

Window {
    id: window1
    visible: Window.FullScreen
    width: 800
    height: 480
    color: "#b2b2b2"
    title: qsTr("Bike Safety System")


    Rectangle {
        id: rectRearmodule
        width: 300; height: 30
        color: "#b2b2b2"
        anchors.left: parent.left
        anchors.leftMargin: 0
        anchors.top: parent.top
        anchors.topMargin: 0
        Text {
            id: textRearModule
            text: "Rear module : "
            anchors.top: parent.top
            anchors.topMargin: 0
            anchors.left: parent.left
            anchors.leftMargin: 0
            styleColor: "#b2b2b2"
            verticalAlignment: Text.AlignBottom
            horizontalAlignment: Text.AlignLeft
            font.underline: false
            font.pointSize: 15
        }
        Text {
            id: textRearModuleState
            text: displayData.rearStateChange
            anchors.left: parent.left
            anchors.leftMargin: 147
            anchors.top: parent.top
            anchors.topMargin: 0
            styleColor: "#b2b2b2"
            verticalAlignment: Text.AlignBottom
            horizontalAlignment: Text.AlignLeft
            font.underline: false
            font.pointSize: 15
        }
    }

    Rectangle {
        id: rectCommandmodule
        width: 300; height: 30
        color: "#b2b2b2"
        anchors.left: parent.left
        anchors.leftMargin: 0
        anchors.top: parent.top
        anchors.topMargin: 30
        Text {
            id: textCommandModule
            text: "Command module : "
            anchors.top: parent.top
            anchors.topMargin: 0
            anchors.left: parent.left
            anchors.leftMargin: 0
            styleColor: "#b2b2b2"
            verticalAlignment: Text.AlignBottom
            horizontalAlignment: Text.AlignLeft
            font.underline: false
            font.pointSize: 15
        }
        Text {
            id: textCommandModuleState
            text: displayData.commandStateChange
            anchors.top: parent.top
            anchors.topMargin: 0
            anchors.left: parent.left
            anchors.leftMargin: 204
            styleColor: "#b2b2b2"
            verticalAlignment: Text.AlignBottom
            horizontalAlignment: Text.AlignLeft
            font.underline: false
            font.pointSize: 15
        }
    }

    Rectangle {
        id: rectSpeed
        x: 0
        y: 174
        width: 500; height: 132
        color: "#b2b2b2"
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 100
        anchors.right: parent.right
        anchors.rightMargin: 140
        Text {
            id: textSpeed
            text: displayData.speedChange
            styleColor: "#b2b2b2"
            anchors.right: parent.right
            anchors.rightMargin: 0
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 0
            verticalAlignment: Text.AlignBottom
            horizontalAlignment: Text.AlignRight
            font.underline: false
            font.pointSize: 70
        }
    }

    Rectangle {
        id: rectSpeedUnit
        x: 500
        y: 174
        width: 140
        height: 132
        color: "#b2b2b2"
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 100
        anchors.right: parent.right
        anchors.rightMargin: 0

        Text {
            id: textSpeedUnit
            text: "km/h"
            styleColor: "#b2b2b2"
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

    Rectangle {
        id: rectHour
        width: 140
        height: 40
        color: "#b2b2b2"
        anchors.top: parent.top
        anchors.topMargin: 0
        anchors.right: parent.right
        anchors.rightMargin: 0
        Text {
            id: textHour
            text: displayData.hourChange + ":" + displayData.minutChange
            styleColor: "#b2b2b2"
            anchors.right: parent.right
            anchors.rightMargin: 0
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignRight
            font.pointSize: 25
            font.underline: false
        }
    }
}
