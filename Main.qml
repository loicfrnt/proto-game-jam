import QtQuick
import com.Game

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Le tritre")

    Grid {
        Component.onCompleted: {
            console.log('michel')
            console.log('game object', Game)
            console.log('game cellsModel', Game.sizeX)
            console.log('game number', Game.sizeY)
        }
        columns: 3
        spacing: 10
        anchors.centerIn: parent
        Repeater {
            model: Game.cellsModel

            Rectangle {
                width: 100
                height: 100
                color: modelData
            }
        }
    }
}
