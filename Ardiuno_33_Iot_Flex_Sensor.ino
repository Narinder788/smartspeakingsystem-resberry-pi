#include <Arduino_LSM6DS3.h>
void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
  IMU.begin();
  pinMode(2, INPUT_PULLUP);  

}

void loop() {
  float x, y, z;
  int F1 = analogRead(A0);
  int F2 = analogRead(A1);
  
  if (IMU.accelerationAvailable()) {
    IMU.readAcceleration(x, y, z);
  }

  if (F1 > 270 && F2 > 270     && z>0.8 ) {
    Serial.println("A");} 
  else if (F1 < 270 && F2 > 270 && z>0.8 ) {
    Serial.println("B"); }
  else if (F1 > 270 && F2 < 270 && z>0.8 ) {
    Serial.println("C"); }
  else if (F1 > 270 && F2 > 270 && z>-0.20 && z<0.8 ) {
    Serial.println("D");} 
  else if (F1 < 270 && F2 > 270 && z>-0.20 && z<0.8 ) {
    Serial.println("E"); }     
  else if (F1 > 270 && F2 < 270 && z>-0.20 && z<0.8 ) {
    Serial.println("F"); }



    
  if (digitalRead(2)==LOW)
      {
       Serial.println("Z");
      }
  
  delay(5000);

  









}
