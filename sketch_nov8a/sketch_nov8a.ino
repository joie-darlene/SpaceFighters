void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
}
void loop() {
  // Read joystick values (replace A0 and A1 with your actual pins)
  int joystickX = analogRead(A0);
  int joystickY = analogRead(A1);
  int sw = digitalRead(2);
  // Send data as comma-separated values
  Serial.print(joystickX);
  Serial.print(",");
  Serial.print(joystickY);
  Serial.print(",");
  Serial.println(sw);

  delay(10);
}






