//Smartapps Libs:
#include <SmartClient.h>

//Ethernet Libs:
#include <SPI.h>
#include <Ethernet.h>

//Definicao endereco MAC do Ethernet Shield:
byte mac[] = {  0xDE, 0xAD, 0xBE, 0xEF, 0xFF, 0xED };
//byte mac[] = {  0x3C, 0x07, 0x54, 0x00, 0x2D, 0xCF };

//Definicoes do usuário na Smartapps:
char server[] = "www.smartapps.com.br";              //Endereco Smartapps.
char login[] = "7a4e894ab12b917aeb0f33b7e61139b8";   //Login do usuario: Encontra-se na plataforma.
char password[] = "D2BVaAU0VG1bMFQ2VTU=";            //Senha do usuário: Encontra-se na plataforma.
char app[] = "Controls";                             //Nome do aplicativo utilizado.
char schema[] = "7a4e894ab12b917aeb0f33b7e61139b8";  //Login do aplicativo: Normalmente o mesmo do usuário, só muda se for utilizado um aplicativo que foi compartilhado por outro usuário, neste caso é o login do outro usuário.
char caminhoPost[] = "variaveis_valores";
SmartClient smart; 

//Variaveis do Exemplo 1;
String PostData = "";

//Variaveis usadas pela funcao get_free_memory(). Muito util, principalmente com o Arduino Uno.
//extern int __bss_end;                                
//extern void *__brkval;                               

void setup() {
  Serial.begin(9600);
  Serial.print("Free Memory: ");
//  Serial.println(get_free_memory());
  Serial.println("Starting Ethernet");
//config_rede();

//Conexao a plataforma, 5 tentativas:  
  int attempts = 0;
  while(smart.connect(server, login, password) == 0){
    delay(500);
    attempts++;
    if(attempts > 5){
      while(1){
          Serial.println("ERRO");       
      }
    }
    smart.disconnect();
  }
  delay(3000);  
}

void loop() {
    
    PostData = "variavel=arduino&datetime=0&valor=10000";  //Gera valor randomico a cada loop e adiciona a variavel escolhida.
   // smart.send(true, server, app, schema, caminhoPost, PostData);    //Envia informacoes para plataforma.
    delay(5000);  //Informacao é enviada a cada 5 segundos.

}



