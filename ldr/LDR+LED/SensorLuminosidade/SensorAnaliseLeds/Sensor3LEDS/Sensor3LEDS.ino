/*******************************************************************************
* RoboCore Kit Iniciante V8 - Construindo um Sensor de Luz 2
* Acender o LED quando o LDR indicar iluminação abaixo do limite.
*******************************************************************************/

const int pinoLDR = A0; // pino onde o LRD está conectado
const int ledRed = 7; // pino onde o LED está conectado
const int ledYellow = 8; // pino onde o LED está conectado
const int ledGreen = 9; // pino onde o LED está conectado

int leitura = 0; // variável para armazenar o valor lido pelo ADC

void setup() {
  // configura os pinos do LDR e LED
  pinMode(pinoLDR, INPUT); 
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  Serial.begin(9600); // 9600bps
}

void loop() {
  // le o valor de ADC no pino do LDR
  leitura = analogRead(pinoLDR);

  // verifica luminosidade do ambiente
  if(leitura < 20){ // se a luminosidade for menor que 20
    digitalWrite(ledRed,HIGH); 
    digitalWrite(ledYellow,LOW);
    digitalWrite(ledGreen,LOW);
  }
  else if (leitura <60){ // se não
    digitalWrite(ledRed,LOW); 
    digitalWrite(ledYellow,HIGH);
    digitalWrite(ledGreen,LOW);
  }
  else {
    digitalWrite(ledRed,LOW); 
    digitalWrite(ledYellow,LOW);
    digitalWrite(ledGreen,HIGH);
  }
  

  // imprime valor lido pelo arduino (0 a 1023)
  Serial.print("Leitura: ");
  Serial.print(leitura);
  Serial.print("\t"); // tabulacao

  Serial.println(); // nova linha

  delay(1000); // aguarda 1 segundo para uma nova leitura
}
