#include "Arduino.h"
#include <TM1637Display.h>

const byte CLK_PIN = 6;
const byte DIO_PIN = 5;
const int tmp = A0;

TM1637Display display = TM1637Display(CLK_PIN, DIO_PIN);

void setup() {
display.setBrightness(7);
Serial.begin(9600);
}

void loop() {
display.clear();
int reading = analogRead(tmp);
float voltage = reading * 5.0 / 1024.0;
float temperatureC = (voltage - 0.5) * 100;
float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
int temp =(int)temperatureF;
Serial.println(temperatureF);
Serial.println(temp);
display.showNumberDec(temp);
delay(1000);
display.clear();

}