//Declaração das constantes
const int olhoEsquerdo = 9;
const int olhoDireito = 7; 
//Método setup, executado uma vez ao ligar o Arduino.
void setup() {
  pinMode(olhoEsquerdo,OUTPUT);   //Definindo o pino digital 8 como de saída.
  pinMode(olhoDireito,OUTPUT); 
 Serial.begin(9600); //Definindo o pino digital 2 como pino de entrada. 
}

//Método loop, executado enquanto o Arduino estiver ligado.
void loop() {  
          
 // if(Serial.available()){
    if(Serial.read() == '1'){
      digitalWrite(olhoEsquerdo,HIGH);
    }
    
    if(Serial.read() == '-1'){
      digitalWrite(olhoDireito,HIGH);
    }
    
    Serial.println(Serial.read());
    
//  }
}


