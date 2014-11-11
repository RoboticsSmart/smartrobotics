#include "SoftwareSerial.h"
int RxD = 4;
int TxD = 2;
SoftwareSerial blueToothSerial(RxD,TxD); //Instância a biblioteca SoftwareSerial.h
int led = 13;
void setup()
{
parear_dispositivo(); //Executa a função para parear o dispositivo
pinMode(led, OUTPUT);  
//digitalWrite(led, HIGH); 
pinMode(RxD, INPUT);
pinMode(TxD, OUTPUT);
Serial.begin(38400);
}
void loop()
{
  if(Serial.read() > 0){
    Serial.println(Serial.read());
  }

char letra; //Variável char para armazenar o caractere recebido
if(blueToothSerial.available()) //Se algo for recebido pela serial do módulo bluetooth
{

letra = blueToothSerial.read(); //Armazena o caractere recebido na variável letra
Serial.println(letra);
if(letra == 'f') //Se o caractere recebido for a letra ‘F’
{
//Move o carrinho para frente

//==================
  digitalWrite(led, HIGH); 
}

else if (letra == 'B') //Se o caractere recebido for a letra ‘B’
{
//Move o carrinho para trás

//==================

}

else if(letra == 'R') //Se o caractere recebido for a letra ‘R’
{
//Move o carrinho para direita

//==================
}

else if (letra == 'L') //Se o caractere recebido for a letra ‘L’
{
//Move o carrinho para esquerda

//==================
}

else if(letra == 'S') //Se o caractere recebido for a letra ‘S’
{
//Para o carrinho

//==================
}
}

}
void parear_dispositivo()
{

blueToothSerial.begin(38400); // Configura o baud rate do bluetooth como 38400
blueToothSerial.print("\r\n+STWMOD=0\r\n"); // Configura o módulo bluetooth para trabalhar como slave
blueToothSerial.print("\r\n+STNA=robocar\r\n"); // Configura o nome do disopsitivo bluetooth
blueToothSerial.print("\r\n+STOAUT=1\r\n"); // Permite que outros dispositivos encontrem o módulo bluetooth
blueToothSerial.print("\r\n+STAUTO=0\r\n"); // Desabilita a auto conexão
delay(2000); // Aguarda 2 segundos
blueToothSerial.print("\r\n+INQ=1\r\n"); // Habilita modo de paridade
delay(2000); // Aguarda 2 segundos
blueToothSerial.flush(); // Dá um flush na serial do módulo bluetooth

}
