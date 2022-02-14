/*  
  tensao = leitura * 5.0 / 1024.0;
  // imprime valor no plotter serial
  Serial.println("Tensão: ");
  Serial.println(tensao);
  Serial.println(); // nova linha

  // imprime valor lido pelo arduino (0 a 1023)
  Serial.print("Leitura: ");
  Serial.print(leitura);
  Serial.print("\t"); // tabulacao
  Serial.println(); // nova linha

  delay(1000); // aguarda 1 segundo para uma nova leitura
  
}*/

/*******************************************************************************
* RoboCore Kit Iniciante V8 - 16. - Pisca-Pisca 2
* Usar um potenciômetro para controlar a intensidade de um LED.
*******************************************************************************/

const int pinoPotenciometro = A0; // pino onde o pontenciômetro está conectado
const int pinoLED = 11; // pino onde o LED está conectado
int leitura = 0; // variável para armazenar o valor lido pelo ADC
int pwm = 0; // variável para armazenar o valor da razão cíclica (duty cycle) 
float tensao = 0.0; // variável para armazenar a tensão


void setup() {
  pinMode(pinoPotenciometro, INPUT); // configura o pino com potenciômetro como entrada
  pinMode(pinoLED, OUTPUT); // configura o pino com o LED como saída
  Serial.begin(9600); // 9600bps 
}

void loop() {
  // le o valor de tensão no pino do potenciômetro
  leitura = analogRead(pinoPotenciometro);
  tensao = leitura * 5.0 / 1024.0;

  
  // converte o valor do potenciômetro, de 0 a 1023, em um valor de 0 a 255
  pwm = map(leitura, 0, 1023, 0, 255); 
  //explicação pwm: 
  //Variável_Recebedora = map(Valor_Lido, Mínimo_Potenciômetro, Máximo_Potenciômetro, Novo_Mínimo, Novo_Máximo)
  
  // atualiza a razão cíclica do pino 11, variando a intensidade do LED
  analogWrite(pinoLED, pwm);

  // imprime valor lido pelo arduino (0 a 1023)
  Serial.print("Leitura: ");
  Serial.print(leitura);
  Serial.print("\t"); // tabulacao
    
  Serial.println(); // nova linha
  Serial.print("Tensão: ");
  Serial.print(tensao);
  Serial.println("V");
  Serial.print("\t"); // tabulacao
  Serial.println(); // nova linha
  Serial.println(); // nova linha
  //delay(1000); se quiser analisar monitor serial
  //delay(100); se quiser analisar plotter serial
  //sem delay se quiser analisar apenas o brilho
}
