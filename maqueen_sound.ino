/*
Copyright (c) 2018 LeRoy Miller
Modify :Arkom Thaicharoen
*/

#include <Maqueen.h>

Maqueen bot;

Adafruit_Microbit_Matrix microbit;

void setup() {
  Serial.begin(9600);
  bot.begin();
  microbit.begin();
  while (bot.readB()) {  //wait for BTNA to be pushed
    microbit.print("B");
  }
  microbit.clear();
  microbit.show(smile_bmp);  //smile_bmp is in the library
}

void loop() {
  digitalWrite(LED1, HIGH);  //LED1 is defined in the library
  digitalWrite(LED2, LOW);   //LED2 is defined in the library
  bot.sos();
  delay(1000);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  bot.sos();
  // bot.squeak();
  // bot.catcall();
  // bot.ohhh();
  // bot.laugh();
  // bot.laugh2();
  // bot.waka();
  // bot.scale();
  // bot.uhoh();
  // bot.error();
  delay(1000);  //my own sound effect
}
