int sensorPin = A0; // select the input pin for LDR
int ledpin =9;
int sensorValue = 0; // variable to store the value coming from the sensor
void setup() {
Serial.begin(9600); //sets serial port for communication
}
void loop() {
  analogWrite(ledpin,1);

sensorValue = analogRead(sensorPin); // read the value from the sensor
Serial.println(sensorValue); //prints the values coming from the sensor on the screen

delay(1000);
}
