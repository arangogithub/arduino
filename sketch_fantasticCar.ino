
void declare_output(){
  int i;
  for (i=2;i<7; i++){
    pinMode(i,OUTPUT);
  }
}

void leds_off(){
  int i;
  for (i=2;i<7; i++){
    digitalWrite(i,LOW);
  }
}

void setup() {
  // put your setup code here, to run once:
 declare_output();
 leds_off();
}

void loop() {
  // put your main code here, to run repeatedly:
  int on = 20;
  int i;
  for (i=2;i<7; i++){
    digitalWrite(i, HIGH); //Encendemos el LED i
    delay(on);
    digitalWrite(i,LOW); // Apagamos LED i  el tiempo restante
    delay(5*on);
  }
  for (i=2;i<5; i++){
    digitalWrite(7-i, HIGH); //Encendemos  LEDs en orden inverso
    delay(on);
    digitalWrite(7-i,LOW); // Apagamos tiempo restante
    delay(5*on);
  }

}
