const int trigPin = 2; //ultra trig int
const int echoPin = 4; //ultra echo int

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT); //intialize led
}

void loop()
{
  long duration, inches, cm;

  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  inches = duration * 0.0133/2;
  cm = duration * 0.034/2;
  
  Serial.print(inches);
  Serial.print(" inches, ");
  Serial.print(cm);
  Serial.print(" cm");
  Serial.println();

    digitalWrite(8, LOW);
  delay(700);
  
  if(cm >= 25){
    tone(7, 500, 500);
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(8, LOW);
    delay(500);
    }
  else if(cm >= 10){
    tone(7, 500, 150);
    digitalWrite(8, HIGH);
    delay(150);
    digitalWrite(8, LOW);
    delay(150);
    } 
  else {
    tone(7, 700, 100);
    digitalWrite(8, HIGH);
    delay(10);
    digitalWrite(8, LOW);
    delay(10);
    }
}
