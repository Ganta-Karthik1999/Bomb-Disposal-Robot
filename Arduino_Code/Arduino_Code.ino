#include <SoftwareSerial.h>
#include <Servo.h>

// RX, TX
SoftwareSerial mySerial(10, 11); // RX, TX (connect TX of NodeMCU to pin 10 and RX of NodeMCU to pin 11)

Servo Fist1Motor1;
Servo Fist1Motor2;
Servo Fist1Motor3;

Servo Fist2Motor1;
Servo Fist2Motor2;
Servo Fist2Motor3;

Servo Fist3Motor1;
Servo Fist3Motor2;
Servo Fist3Motor3;

// Base for the Robot
int Basem11 = 2;
int Basem12 = 4;
int Basem21 = 7;
int Basem22 = 8;

// Fist one

int fist_one_m1 = A0;
int fist_one_m2 = A1;
int fist_one_m3 = A2;

// Fist Two

int fist_two_m1 = A3;
int fist_two_m2 = A4;
int fist_two_m3 = A5;

// Fist Three

int fist_three_m1 = 3;
int fist_three_m2 = 5;
int fist_three_m3 = 6;

int Fistvalue;

void setup()
{
  Serial.begin(9600);   // Initialize the hardware serial port for communication with the Serial Monitor
  mySerial.begin(9600); // Initialize the software serial port for communication with the NodeMCU

  pinMode(Basem11, OUTPUT);
  pinMode(Basem12, OUTPUT);
  pinMode(Basem21, OUTPUT);
  pinMode(Basem22, OUTPUT);

  pinMode(fist_one_m1, OUTPUT);
  pinMode(fist_one_m2, OUTPUT);
  pinMode(fist_one_m3, OUTPUT);

  pinMode(fist_two_m1, OUTPUT);
  pinMode(fist_two_m2, OUTPUT);
  pinMode(fist_two_m3, OUTPUT);

  pinMode(fist_three_m1, OUTPUT);
  pinMode(fist_three_m2, OUTPUT);
  pinMode(fist_three_m3, OUTPUT);

  Fist1Motor1.attach(fist_one_m1);
  Fist1Motor2.attach(fist_one_m2);
  Fist1Motor3.attach(fist_one_m3);

  Fist2Motor1.attach(fist_two_m1);
  Fist2Motor2.attach(fist_two_m2);
  Fist2Motor3.attach(fist_two_m3);

  Fist3Motor1.attach(fist_three_m1);
  Fist3Motor2.attach(fist_three_m2);
  Fist3Motor3.attach(fist_three_m3);
}

void loop()
{

  // Check if data is available from NodeMCU
  if (mySerial.available())
  {
    String dataFromNodeMCU = mySerial.readStringUntil('\n');
    dataFromNodeMCU.trim();
    Fistvalue = dataFromNodeMCU.substring(3, dataFromNodeMCU.length()).toInt();
    dataFromNodeMCU = dataFromNodeMCU.substring(0, 3);
    Serial.println(dataFromNodeMCU);
    Serial.println(Fistvalue);

    if (dataFromNodeMCU == "S")
    {
      digitalWrite(Basem11, LOW);
      digitalWrite(Basem12, LOW);
      digitalWrite(Basem21, LOW);
      digitalWrite(Basem22, LOW);

      digitalWrite(fist_one_m1, LOW);
      digitalWrite(fist_one_m2, LOW);
      digitalWrite(fist_one_m3, LOW);

      digitalWrite(fist_two_m1, LOW);
      digitalWrite(fist_two_m2, LOW);
      digitalWrite(fist_two_m3, LOW);

      digitalWrite(fist_three_m1, LOW);
      digitalWrite(fist_three_m2, LOW);
      digitalWrite(fist_three_m3, LOW);

      Serial.println("stop");
    }

    else if (dataFromNodeMCU == "B")
    {
      digitalWrite(Basem11, HIGH);
      digitalWrite(Basem12, LOW);
      digitalWrite(Basem21, LOW);
      digitalWrite(Basem22, HIGH);
      Serial.println("Backward");
    }

    else if (dataFromNodeMCU == "F")
    {
      digitalWrite(Basem11, LOW);
      digitalWrite(Basem12, HIGH);
      digitalWrite(Basem21, HIGH);
      digitalWrite(Basem22, LOW);
      Serial.println("Forward");
    }

    else if (dataFromNodeMCU == "L")
    {
      digitalWrite(Basem11, HIGH);
      digitalWrite(Basem12, LOW);
      digitalWrite(Basem21, HIGH);
      digitalWrite(Basem22, LOW);
      Serial.println("Left");
    }

    else if (dataFromNodeMCU == "R")
    {
      digitalWrite(Basem11, LOW);
      digitalWrite(Basem12, HIGH);
      digitalWrite(Basem21, LOW);
      digitalWrite(Basem22, HIGH);
      Serial.println("Right");
    }

    else if (dataFromNodeMCU == "F1C")
    {
      Fist1Motor1.write(Fistvalue);
      Serial.println(Fistvalue);
      Serial.println("clock-wise");
    }

    else if (dataFromNodeMCU == "F1G")
    {

      Fist1Motor3.write(180);
      Serial.println(" GRIP !!!");
    }

    else if (dataFromNodeMCU == "F1L")
    {

      Fist1Motor3.write(0);
      Serial.println(" Leave !!!");
    }

    else if (dataFromNodeMCU == "F1U")
    {
      Fist1Motor2.write(Fistvalue);
      Serial.println(Fistvalue);
      Serial.println(" UP !!!");
    }

    else if (dataFromNodeMCU == "F2C")
    {
      Fist2Motor1.write(Fistvalue);
      Serial.println(Fistvalue);
      Serial.println("clock-wise");
    }

    else if (dataFromNodeMCU == "F2U")
    {
      Fist2Motor2.write(Fistvalue);
      Serial.println(Fistvalue);
      Serial.println(" UP !!!");
    }

    else if (dataFromNodeMCU == "F2G")
    {

      Fist2Motor3.write(180);
      Serial.println(" GRIP !!!");
    }

    else if (dataFromNodeMCU == "F2L")
    {

      Fist2Motor3.write(0);
      Serial.println(" Leave !!!");
    }

    else if (dataFromNodeMCU == "F3C")
    {
      Fist3Motor1.write(Fistvalue);
      Serial.println(Fistvalue);
      Serial.println("clock-wise");
    }

    else if (dataFromNodeMCU == "F3U")
    {
      Fist3Motor2.write(Fistvalue);
      Serial.println(Fistvalue);
      Serial.println(" UP !!!");
    }

    else if (dataFromNodeMCU == "F3G")
    {

      Fist3Motor3.write(180);
      Serial.println(" GRIP !!!");
    }

    else if (dataFromNodeMCU == "F3L")
    {

      Fist3Motor3.write(0);
      Serial.println(" Leave !!!");
    }
  }
}
