import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15


Window {
    width: 400
    height: 600
    visible: true
    title: qsTr("Logowanie")
    property string login:"abcd"

    Logowanie{
    anchors.fill: parent
    }

}