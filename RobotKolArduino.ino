#include <Servo.h>  /* Servo kutuphanesi projeye dahil edildi */
Servo servoNesnesi,servoNesnesi1,servoNesnesi2,servoNesnesi3;  /* servo motor nesnesi yaratildi */
int potPin = A0;
int potPin1 = A1;
int potPin2 = A2;
int potPin3 = A3;
//int buzzerPin = 3;
void setup()
{
  Serial.begin(9600);
  servoNesnesi.attach(2);  /* Servo motor 9 numarali pine baglandi */
  servoNesnesi1.attach(3);
  servoNesnesi2.attach(4);
  servoNesnesi3.attach(5);
}

void loop() {
  int deger  = analogRead(potPin);
  int deger1 = analogRead(potPin1);
  int deger2 = analogRead(potPin2);
  int deger3 = analogRead(potPin3);
  //deger/=5.6;
  //deger1/=5.39;
  //deger2/=5.26;
  //deger3/=5.1;
  deger/=5.6;
  deger1/=5.6;
  deger2/=11.15;
  deger3/=5.6;
  servoNesnesi.write(deger);
  servoNesnesi1.write(deger1);
  servoNesnesi2.write(deger2);
  servoNesnesi3.write(deger3);
  Serial.println("Deger=");
  Serial.println(deger);
  Serial.println("Deger1=");
  Serial.println(deger1);
  Serial.println("Deger2=");
  Serial.println(deger2);
  Serial.println("Deger3=");
  Serial.println(deger3);
}
