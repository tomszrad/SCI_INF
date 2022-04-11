import QtQuick 2.0
import QtQuick.Controls 2.15

Item {

    Column{
        spacing:2
        width: 200
        height: 300
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter

        Text{
            anchors.horizontalCenter: parent.horizontalCenter
            //anchors.verticalCenter: parent.verticalCenter
            font.pixelSize: 25
            text:"login"
            color:"black"
        }

        TextField {
            id: loginfield
            placeholderText:"login"
            onTextChanged: {

            }
        }

        Text{
            anchors.horizontalCenter: parent.horizontalCenter
            font.pixelSize: 25
            //anchors.verticalCenter: parent.verticalCenter
            text:"hasło"
            color:"black"
        }

        TextField {
            id: passwordfield
            echoMode: TextInput.Password
            placeholderText:"hasło"
            onTextChanged: {

            }
        }


        Rectangle{
            id:przycisk
            width: 150
            height: 28
            color: "#1be36e"
            border.color: "black"
            border.width: 1
            radius: 5
           anchors.horizontalCenter: parent.horizontalCenter
            Text{
                anchors.horizontalCenter: parent.horizontalCenter
                font.pixelSize: 25
                text:"zaloguj"
                color:"black"
            }



        MouseArea{
            anchors.fill: parent

            onPressed:{
                przycisk.opacity=1.0
            }
            onReleased:{
            przycisk.opacity=0.85
            }


          onClicked:{

                przycisk.color="gray"
                if(loginfield.text === "admin" && passwordfield.text === "1234"){
                   console.log("zalogowano")
                   komunikat.text="pomyślnie zalogowano"
                   komunikat.color="green"


                }
               else{
                    console.log("nie zalogowano")
                    komunikat.text="błędne dane logowania"
                    komunikat.color="red"
              }
          }



}





}

        Text{
            text:""
            id:komunikat
            anchors.horizontalCenter: parent.horizontalCenter
            font.pixelSize: 25
           // anchors.verticalCenter: parent.verticalCenter
        }



}
}
