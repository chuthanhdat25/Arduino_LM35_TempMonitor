void setup() {
  Serial.begin(9600);
}
void loop() {
  int val = analogRead(A0);
  float temp = (val * 500.0) / 1023.0;
  Serial.println(temp);
  delay(500);
}
