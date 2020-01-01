const int trigPin = 4;
const int echoPin = 5; 
long duration;
int S;
int inch;
void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
}

void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);



S= duration*0.034/2;         //Calculating the distance traveled in cm
inch = duration*0.0133/2;    // Calculating the distance in inches


// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(S);
Serial.print("cm");
delay(10);
Serial.print("Distance: ");
Serial.println(inch);
Serial.print("in");
}
