//==== Инициализация библиотеки и моторов ====
#include <GyverMotor.h>
GMotor motorA(DRIVER3WIRE, 4, 5, 6, LOW );
GMotor motorB(DRIVER3WIRE, 8, 9, 10, LOW );
//===========================================

//==== Инициализация библиотеки для bluetooth ====
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3); // TX, RX
//================================================

// Переменные
String val = "";
char c;


void setup() {
  // Объявление com-портов
  Serial.begin(19200);
  mySerial.begin(9600);
}

void loop() {
  
  //Парсинг данных по блютуз через com-порт
  if (mySerial.available() > 0) {
    c = mySerial.read();
    val += c;
  }

  //обрабатываем значение с com-порта и выбераем направление 
  if (val == "U") {
    motorA.setMode(FORWARD);
    motorA.setSpeed(255);

    motorB.setMode(FORWARD);
    motorB.setSpeed(255);
  } else if (val == "L") {
    motorA.setMode(BACKWARD);
    motorA.setSpeed(255);

    motorB.setMode(FORWARD);
    motorB.setSpeed(255);
  } else if (val == "R") {
    motorA.setMode(FORWARD);
    motorA.setSpeed(255);

    motorB.setMode(BACKWARD);
    motorB.setSpeed(255);
  } else if (val == "D") {
    motorA.setMode(BACKWARD);
    motorA.setSpeed(255);

    motorB.setMode(BACKWARD);
    motorB.setSpeed(255);
  } else if (val == "C") {
    motorA.setMode(STOP);
    motorB.setMode(STOP);
  }

  /* вывод данных (нужен только для тестирования)
  if (val != "") {
    Serial.println(val);
  }*/
  val = "";
}
