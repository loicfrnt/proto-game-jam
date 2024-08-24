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
            console.log('game sizeX', Game.sizeX)
            console.log('game sizeY', Game.sizeY)
        }
        columns: 3
        spacing: 10
        anchors.centerIn: parent
        Repeater {
            model: Game.cells

            Rectangle {
                width: 100
                height: 100
                color: black
            }
        }
    }
}
