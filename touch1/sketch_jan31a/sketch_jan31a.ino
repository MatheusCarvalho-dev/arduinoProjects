#define sensor 4
#define led 9

bool sensorEstadoo();

  
void setup() {
  pinMode(sensor, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() {
  
  if (sensorEstadoo()) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}


bool sensorEstadoo() {
  #define bounce 50 //(tempo para eliminar o efeito Bounce EM MILISEGUNDOS)

  bool estadoSensor;
  static bool estadoSensorAnt; 
  static bool estadoSensorr = true;
  static unsigned long delaySensor = 0;

if ( (millis() - delaySensor) > bounce ) {
       estadoSensor = digitalRead(sensor);
       if ( estadoSensor && (estadoSensor != estadoSensorAnt) ) {
          estadoSensorr = !estadoSensorr;
          delaySensor = millis();
       }
       estadoSensorAnt = estadoSensor;
   }

   return estadoSensorr;
}
