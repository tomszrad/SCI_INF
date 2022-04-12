import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    id:item


    Image {
        clip: true
        fillMode: Image.PreserveAspectCrop
        source: "qrc:/wallpaper.png"
        opacity:0.8
    }

    Timer {
        id:timer
        interval: 1100; running: false; repeat: false
        onTriggered: animacja.running=true
    }

    NumberAnimation {
        target:item
        id:animacja
        duration: 400
        properties:"opacity"
        from: 1
        to: 0
        running:false
    }


    Column{
        spacing:30
        width: 200
        height: 300
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter

        Text{
            anchors.horizontalCenter: parent.horizontalCenter
            //anchors.verticalCenter: parent.verticalCenter
            font.pixelSize: 25
            text:"login:"
            color:"black"
            font.family:"Comic Sans MS"
        }

        TextField {
            id: loginfield
            placeholderText:"login"
            font.family:"Comic Sans MS"
            onTextChanged: {

            }
        }

        Text{
            anchors.horizontalCenter: parent.horizontalCenter
            font.pixelSize: 25
            //anchors.verticalCenter: parent.verticalCenter
            text:"hasło:"
            color:"black"
            font.family:"Comic Sans MS"
        }

        TextField {
            id: passwordfield
            echoMode: TextInput.Password
            font.family:"Comic Sans MS"
            placeholderText:"hasło"
            onTextChanged: {

            }
        }


        Rectangle{
            //anchors.topMargin: 9900
            id:przycisk
            width: 130
            height: 28
            color: "#ffa1af"
            border.color: "black"
            border.width: 1
            radius: 8
           anchors.horizontalCenter: parent.horizontalCenter
            Text{
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 16
                text:"zaloguj"
                color:"black"
                font.family:"Comic Sans MS"
            }



        MouseArea{
            anchors.fill: parent

            onPressed:{
                przycisk.opacity=0.6
            }
            onReleased:{
            przycisk.opacity=1.0
            }


          onClicked:{

              //  przycisk.color="#ffa1af"
                if(loginfield.text === "admin" && passwordfield.text === "1234"){
                   console.log("zalogowano")
                   komunikat.text="pomyślnie zalogowano"
                   komunikat.color="green"
                   timer.running=true
                }
               else{
                    console.log("nie zalogowano")
                    komunikat.color="red"
                    komunikat.text="błędne dane logowania"
              }
          }



}





}

        Text{
            font.family:"Comic Sans MS"
            text:""
            id:komunikat
            anchors.horizontalCenter: parent.horizontalCenter
            font.pixelSize: 19
           // anchors.verticalCenter: parent.verticalCenter
        }



}


}
