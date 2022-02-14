/*******************************************************************************
* RoboCore Kit Iniciante V8 - 14. Projeto Missão Impossível 1
* Detectar a presença de obstáculos a partir de um diodo laser e um LDR.
*******************************************************************************/

const int pinoLDR = A0; // pino onde o LDR está conectado
int leitura = 0; // variável para armazenar o valor lido pelo ADC

void setup() {
  // Inicia e configura a Serial
  Serial.begin(9600); // 9600bps

  // configura o pino com LDR como entrada
  pinMode(pinoLDR, INPUT); // pino A0
  pinMode(13, OUTPUT); //ledVerde
  pinMode(12, OUTPUT); //ledVermelho
}

void loop() {
  // le o valor de tensão no pino do LDR
  leitura = analogRead(pinoLDR);

  // imprime valor lido pelo arduino (0 a 1023)
  Serial.print("Leitura: ");
  Serial.print(leitura);
  Serial.print("\t"); // tabulacao
   
  // Imprime se existe ou não um obstáculo
  Serial.print("Obstaculo: ");
  if (leitura <= 512) {
    Serial.print("Sim");
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  }
  else {
    Serial.print("Nao");
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
  }
  
  Serial.println(); // nova linha

  delay(500); // aguarda meio segundo para uma nova leitura
}
