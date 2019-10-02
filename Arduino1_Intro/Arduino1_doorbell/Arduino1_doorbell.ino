int signal1;

void setup() {
pinMode(9, OUTPUT);
pinMode(2, INPUT_PULLUP);
}

void loop() {
signal1 = digitalRead(2);
if(signal1 == 1){
tone(9, 262, 500);
delay(600);
tone(9, 440, 500);
delay(600);
tone(9, 262, 1000);
delay(1200);
}else{
  noTone(9);
}

}
