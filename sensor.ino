#define trigPin1 13
#define echoPin1 12


long duration, distance,RightSensor;

void setup()
{
Serial.begin(9600);
pinMode(trigPin1, OUTPUT);
pinMode(echoPin1, INPUT);
  pinMode(2,HIGH);
}
void loop() {
 
    Serial.print("CIRCUIT CLOSED"); 
  noTone(2);
SonarSensor(trigPin1, echoPin1);
RightSensor = distance;
  if(distance<100)
  buzzer();
Serial.print(LeftSensor);
Serial.print(" - ");
  
}

void SonarSensor(int trigPin,int echoPin)
{
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29;
}
void buzzer()
{
  tone(2,1000);
  delay(1000);
  noTone(2);
  delay(1000);
}
