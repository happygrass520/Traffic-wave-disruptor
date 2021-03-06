const int trigPin = 9;
const int echoPin = 10;
const int LED = 13;
const int LED2 = 12;

long duration;
int distance;

void setup() {
  pinMode (trigPin,OUTPUT);
  pinMode (echoPin,INPUT);
  pinMode (LED,OUTPUT);
  pinMode (LED2,OUTPUT);
  Serial.begin (9600);   
  
}

void loop() {
  digitalWrite (trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite (trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite (trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;
  Serial.print ("Distance: ");
  Serial.println (distance);

if ( distance < 300 ) {
  digitalWrite( LED, HIGH );
  digitalWrite( LED2, LOW ); }
  
  // 300cm is only for testing, a more proper distance should be determined
    
 else {
  digitalWrite ( LED, LOW );
  digitalWrite ( LED2, HIGH ); }
  
  // sketch for buzzer has not been added yet. When distance remains <threshold for 10 seconds, the buzzer would go on and off until the distance becomes <= threshold.

}
  








