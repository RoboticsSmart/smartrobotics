#include <LiquidCrystal_I2C.h>
#include <LiquidCrystal_SR.h>
#include <LiquidCrystal_SR2W.h>
#include <I2CIO.h>
#include <LCD.h>
#include <FastIO.h>
#include <LiquidCrystal_SR3W.h>
#include <LiquidCrystal.h>

/*
codigo sensor temperatura
#include <dht11.h>
int pin = 5;
dht11 sensor;
 
void setup() {
Serial.begin(9600);
}
 
void loop() {
Serial.print("Lendo sensor: ");
int chk = sensor.read(2);
switch(chk) {
case DHTLIB_OK:
Serial.println("OK");
break;
case DHTLIB_ERROR_CHECKSUM:
Serial.println("Erro no checksum");
break;
case DHTLIB_ERROR_TIMEOUT:
Serial.println("Tempo esgotado");
break;
default:
Serial.println("Erro desconhecido");
}
Serial.print("Umidade (%): ");
Serial.println((float)sensor.humidity, 2);
Serial.print("Temperatura (graus Celsius): ");
Serial.println((float)sensor.temperature, 2);
delay(2000);
}
*/
