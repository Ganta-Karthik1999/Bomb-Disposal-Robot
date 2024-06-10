/*************************************************************
  Blynk is a platform with iOS and Android apps to control
  ESP32, Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build mobile and web interfaces for any
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: https://www.blynk.io
    Sketch generator:           https://examples.blynk.cc
    Blynk community:            https://community.blynk.cc
    Follow us:                  https://www.fb.com/blynkapp
                                https://twitter.com/blynk_app

  Blynk library is licensed under MIT license
 *************************************************************
  Blynk.Edgent implements:
  - Blynk.Inject - Dynamic WiFi credentials provisioning
  - Blynk.Air    - Over The Air firmware updates
  - Device state indication using a physical LED
  - Credentials reset using a physical Button
 *************************************************************/

/* Fill in information from your Blynk Template here */
/* Read more: https://bit.ly/BlynkInject */
// #define BLYNK_TEMPLATE_ID           "TMPxxxxxx"
// #define BLYNK_TEMPLATE_NAME         "Device"

#define BLYNK_TEMPLATE_ID "TMPL2T8Dc4gHg"
#define BLYNK_TEMPLATE_NAME "Bomb Disposal Robot"

#define BLYNK_FIRMWARE_VERSION "0.1.0"

#define BLYNK_PRINT Serial
// #define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
// #define USE_SPARKFUN_BLYNK_BOARD
// #define USE_NODE_MCU_BOARD
// #define USE_WITTY_CLOUD_BOARD
// #define USE_WEMOS_D1_MINI

#include "BlynkEdgent.h"

BLYNK_WRITE(V0)
{

  int paramValue = param.asInt();
  Serial.println("F");
}

BLYNK_WRITE(V1)
{

  int paramValue = param.asInt();
  Serial.println("B");
}

BLYNK_WRITE(V2)
{

  int paramValue = param.asInt();
  Serial.println("R");
}

BLYNK_WRITE(V3)
{

  int paramValue = param.asInt();
  Serial.println("L");
}

BLYNK_WRITE(V4)
{

  int paramValue = param.asInt();
  Serial.println("S");
}

BLYNK_WRITE(V5)
{

  int paramValue = param.asInt();
  Serial.print("F1C");
  Serial.println(paramValue);
}

BLYNK_WRITE(V6)
{

  int paramValue = param.asInt();
  Serial.print("F1U");
  Serial.println(paramValue);
}

BLYNK_WRITE(V7)
{

  int paramValue = param.asInt();
  Serial.print("F1G");
  Serial.println(paramValue);
}

BLYNK_WRITE(V8)
{

  int paramValue = param.asInt();
  Serial.println("F1L");
}

BLYNK_WRITE(V9)
{

  int paramValue = param.asInt();
  Serial.print("F2C");
  Serial.println(paramValue);
}

BLYNK_WRITE(V10)
{

  int paramValue = param.asInt();
  Serial.print("F2U");
  Serial.println(paramValue);
}

BLYNK_WRITE(V11)
{
  int paramValue = param.asInt();
  Serial.println("F2G");
}

BLYNK_WRITE(V12)
{

  int paramValue = param.asInt();
  Serial.println("F2L");
}

BLYNK_WRITE(V13)
{

  int paramValue = param.asInt();
  Serial.print("F3C");
  Serial.println(paramValue);
}

BLYNK_WRITE(V14)
{

  int paramValue = param.asInt();
  Serial.print("F3U");
  Serial.println(paramValue);
}

BLYNK_WRITE(V15)
{

  int paramValue = param.asInt();
  Serial.println("F3G");
}

BLYNK_WRITE(V16)
{

  int paramValue = param.asInt();
  Serial.println("F3L");
}

void setup()
{
  Serial.begin(9600);
  delay(100);
  BlynkEdgent.begin();
}

void loop()
{
  BlynkEdgent.run();
}
