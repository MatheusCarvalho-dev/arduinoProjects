#define led 2 // pino em que o led será conectado
#define sensor 3 // pino em que o sensor será conectado
int som = 0; // variável criada para identificar a presença do som
int aceso = 0;// variável criada para identificar se a luz do led está acesa

void setup() {
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop() {
  som = digitalRead(sensor); // é feita a leitura do sensor de som
  if(som == HIGH){ // é detectada a presença de som
    delay(300);
    switch(aceso){ // switch necessário para definir se o led vai acender ou apagar
      case 0: // caso o led esteja apagado...
        digitalWrite(led, HIGH); // ...ele se acenderá
        aceso = 1; // atribuição para definir que o led está aceso
        break;
      case 1: // caso o led esteja aceso...
        digitalWrite(led, LOW); // ...ele se apagará
        aceso = 0; // atribuição para definir que o led esta apagado
        break;
    }
  }
}
