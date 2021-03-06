/*******************************************************************************
* RoboCore Arduino Pocket Kit - Servo Motor
* Comanda o eixo do servo para a posicao 0 (referencia).
*******************************************************************************/
    
#include <Servo.h> // Inclui a biblioteca para servos motores.

Servo servo_motor;  // Cria um objeto para o controle do servo.

void setup() {
  servo_motor.attach(9);  // Informa qual pino será usado para o servo declarado anteriormente.
 // servo_motor.write(170); //Informa ao servo que deverá se posicionar a 10 graus
}

void loop() {
  servo_motor.write(10);
  delay(2000);
  servo_motor.write(170);
  delay(2000);
}
