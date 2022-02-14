void setup() {
  pinMode(13, OUTPUT);  // led vermelho
  pinMode(12, OUTPUT);  // led amarelo 
  pinMode(11, OUTPUT);  // led verde
  pinMode(2, OUTPUT);   // led verdePedestre
  pinMode(3, OUTPUT);   // led vermelhoPedestre
  
}

void loop() {
  digitalWrite(13, HIGH);   // led vermelho
  digitalWrite(12, LOW);    // led amarelo 
  digitalWrite(11, LOW);    // led verde
  digitalWrite(2, HIGH);    // led verdePedestre
  digitalWrite(3, LOW);     // led vermelhoPedestre
  delay(3000);   
                                       
  digitalWrite(13, LOW);    // led vermelho
  digitalWrite(12, HIGH);   // led amarelo 
  digitalWrite(11, LOW);    // led verde
  digitalWrite(2, LOW);     // led verdePedestre
  digitalWrite(3, HIGH);    // led vermelhoPedestre
  delay(2000); 
  
  digitalWrite(13, LOW);    // led vermelho
  digitalWrite(12, LOW);    // led amarelo 
  digitalWrite(11, HIGH);   // led verde
  digitalWrite(2, LOW);     // led verdePedestre
  digitalWrite(3, HIGH);    // led vermelhoPedestre
  delay(500);   
  
  digitalWrite(3, LOW);
  delay(500);  
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  delay(500);
  digitalWrite(3, HIGH);
  delay(500);  
  digitalWrite(3, LOW);
  delay(500);
}
