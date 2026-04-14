/*
* Du an: Doc nhiet do 2 kenh LM35 (A0, A1)
* Mon: Mang Cam Bien - Tuan 03
*/
int adcValues[2]; 
float nhietDo[2]; 
char chuoi[30];

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Doc kenh A0
  adcValues[0] = analogRead(A0);
  nhietDo[0] = (adcValues[0] * 500.0) / 1023.0;
  
  // Doc kenh A1
  adcValues[1] = analogRead(A1);
  nhietDo[1] = (adcValues[1] * 500.0) / 1023.0;
  
  // Dinh dang du lieu CSV: temp1,temp2
  sprintf(chuoi, "%d,%d\n", (int)nhietDo[0], (int)nhietDo[1]);
  Serial.print(chuoi);
  
  delay(100);
}
