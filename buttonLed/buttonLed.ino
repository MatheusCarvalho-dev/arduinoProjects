/*******************************************************************************
* RoboCore Kit Iniciante V8 para Arduino - Lendo um Botão
* Acende o LED quando o botão é pressionado e o apaga quando o botão é novamente pressionado.
*******************************************************************************/
//setar variaveis
int estadoA = 0; // variável para leitura do botaoVermelho
int guarda_estadoA = LOW; // variável para armazenar valores do botaoVermelho

int estadoB = 0; // variável para leitura do botaoVerde
int guarda_estadoB = LOW; // variável para armazenar valores do botaoVerde

void setup(){
  pinMode(9, INPUT); // botaoVermelho
  pinMode(10, INPUT); // botaoVerde
  pinMode(12, OUTPUT); // ledVermelho
  pinMode(13, OUTPUT);  // ledVerde
}


void loop(){
// guarda o estado do botaoVermelho o estadoA
estadoA = digitalRead(9);
estadoB = digitalRead(10);


// verifica se o botão (pushbutton) está pressionado
if (estadoA == HIGH) {
// inverte valor da variável 
guarda_estadoA = !guarda_estadoA;
//esperera o tempo de 500ms para evitar que haja várias vezes alterações
delay(500);
}

 /*guarda_estadoA vai estar high, entao o estadoA vai ser low 
 quando o estadoA é low = led desligado 
 entao se o estadoA é low, o comando vai ser pra ligar*/
if (guarda_estadoA == HIGH) {
// liga o led
digitalWrite(12, HIGH);
}
else {
// desliga o led
digitalWrite(12, LOW);
}





// verifica se o botão (pushbutton) está pressionado
if (estadoB == HIGH) {
// inverte valor da variável 
guarda_estadoB = !guarda_estadoB;
//esperera o tempo de 500ms para evitar que haja várias vezes alterações
delay(500);
}

if (guarda_estadoB == HIGH) {
// liga o led
digitalWrite(13, HIGH);
}
else {
// desliga o led
digitalWrite(13, LOW);
}
} 
