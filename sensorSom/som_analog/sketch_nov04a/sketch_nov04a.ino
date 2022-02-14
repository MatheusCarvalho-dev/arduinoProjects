#define led1 2 // pinos em que os leds serão conectado
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7
#define led7 8
#define led8 9
#define led9 10

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
}


void loop() {
  int sensor = analogRead(A0); // é atribuida a variável 'sensor' o valor da intensidade do som captado

  if(sensor > 70){ // acende o primeiro led se a intensidade do som passar de 70
    digitalWrite(led1, HIGH);
  }else{
    digitalWrite(led1, LOW);
  }

  if(sensor > 100){ // acende o segundo led se a intensidade do som passar de 140
    digitalWrite(led2, HIGH);
  }else{
    digitalWrite(led2, LOW);
  }

  if(sensor > 150){ // acende o terceito led se a intensidade do som passar de 210
    digitalWrite(led3, HIGH);
  }else{
    digitalWrite(led3, LOW);
  }

  if(sensor > 200){ // acende o quarto led se a intensidade do som passar de 280
    digitalWrite(led4, HIGH);
  }else{
    digitalWrite(led4, LOW);
  }

  if(sensor > 250){ // acende o quinto led se a intensidade do som passar de 350
    digitalWrite(led5, HIGH);
  }else{
    digitalWrite(led5, LOW);
  }

  if(sensor > 300){ // acende o sexto led se a intensidade do som passar de 420
    digitalWrite(led6, HIGH);
  }else{
    digitalWrite(led6, LOW);
  }

  if(sensor > 350){ // acende o sétimo led se a intensidade do som passar de 490
    digitalWrite(led7, HIGH);
  }else{
    digitalWrite(led7, LOW);
  }

  if(sensor > 400){ // acende o oitavo led se a intensidade do som passar de 560
    digitalWrite(led8, HIGH);
  }else{
    digitalWrite(led8, LOW);
  }

  if(sensor > 450){ // acende o nono led se a intensidade do som passar de 630
    digitalWrite(led9, HIGH);
  }else{
    digitalWrite(led9, LOW);
  }
}
