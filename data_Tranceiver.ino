#include <Wire.h>
const int buzzerPin = 7;
void setup()
{
pinMode(2, INPUT);
Serial.begin(9600);
pinMode(8,OUTPUT);
digitalWrite(8,LOW);
pinMode(buzzerPin, OUTPUT);
}
void loop()
{
unsigned long duration = pulseIn(2, HIGH);
Serial.println(duration);
if (duration > 10000 && duration < 17000)
{
//lcd.print("Received: 1          ");
digitalWrite(8,HIGH);
delay(10);
digitalWrite(8,LOW);
tone(buzzerPin, 3000);
delay(1000);
noTone(buzzerPin);
delay(1000);


}
else if (duration > 20000 && duration < 27000)
{
//lcd.print("Received: 2          ");
digitalWrite(8,HIGH);
delay(20);
digitalWrite(8,LOW);
tone(buzzerPin, 3000);
delay(1000);
noTone(buzzerPin);
delay(1000);
}
else if (duration > 30000 && duration < 37000)
{
//lcd.print("Received: 3          ");
digitalWrite(8,HIGH);
delay(30);
digitalWrite(8,LOW);
tone(buzzerPin, 3000);
delay(1000);
noTone(buzzerPin);
delay(1000);
}
else if (duration > 40000 && duration < 47000)
{
/lcd.print("Received: 4          ");
digitalWrite(8,HIGH);
delay(40);
digitalWrite(8,LOW);
tone(buzzerPin, 3000);
delay(1000);
noTone(buzzerPin);
delay(1000);
}
else if (duration > 50000 && duration < 57000)
{
//lcd.print("Received: 5          ");
digitalWrite(8,HIGH);
delay(50);
digitalWrite(8,LOW);
tone(buzzerPin, 3000);
delay(1000);
noTone(buzzerPin);
delay(1000);
}
else if (duration > 60000 && duration < 67000)
{
//  lcd.print("Received: 6          ");
digitalWrite(8,HIGH);
delay(60);
digitalWrite(8,LOW);
tone(buzzerPin, 3000);
delay(1000);
noTone(buzzerPin);
delay(1000);
}
else if (duration > 70000 && duration < 77000)
{
//lcd.print("Received: 7          ");
digitalWrite(8,HIGH);
delay(70);
digitalWrite(8,LOW);
tone(buzzerPin, 3000);
delay(1000);
noTone(buzzerPin);
delay(1000);
}
else if (duration > 80000 && duration < 87000)
{
// lcd.print("Received: 8          ");
digitalWrite(8,HIGH);
delay(80);
digitalWrite(8,LOW);
tone(buzzerPin, 3000);           
delay(1000);                     
noTone(buzzerPin);
delay(1000);
}
else if (duration > 90000 && duration < 97000)
{
// lcd.print("Received: 9          ");
digitalWrite(8,HIGH);
delay(90);
digitalWrite(8,LOW);
tone(buzzerPin, 3000);
delay(1000);
noTone(buzzerPin);
delay(1000);
}
else if (duration > 100000 && duration < 107000)
{
// lcd.print("Received: *          ");
digitalWrite(8,HIGH);
delay(100);
digitalWrite(8,LOW);
tone(buzzerPin, 3000);
delay(1000);
noTone(buzzerPin);
delay(1000);
  }
else if (duration > 110000 && duration < 117000)
{
//lcd.print("Received: 0          ");
digitalWrite(8,HIGH);
delay(110);
digitalWrite(8,LOW);
tone(buzzerPin, 3000);
delay(1000);
noTone(buzzerPin);
delay(1000);
}
else if (duration > 120000 && duration < 127000)
{
//  lcd.print("Received: #          ");
digitalWrite(8,HIGH);
delay(120);
digitalWrite(8,LOW);
tone(buzzerPin, 3000);
delay(1000);
noTone(buzzerPin);
delay(1000);
}
else if (duration > 130000 && duration < 137000)
{
//   lcd.print("Received: A          ");
digitalWrite(8,HIGH);
delay(130);
digitalWrite(8,LOW);
tone(buzzerPin, 3000);
delay(1000);
noTone(buzzerPin);
delay(1000);
}
else if (duration > 140000 && duration < 147000)
{
//    lcd.print("Received: B          ");
digitalWrite(8,HIGH);
delay(140);
digitalWrite(8,LOW);
tone(buzzerPin, 3000);
delay(1000);
noTone(buzzerPin);
delay(1000);
}
else if (duration > 150000 && duration < 157000
// lcd.print("Received: C          ");
digitalWrite(8,HIGH);
delay(150);
digitalWrite(8,LOW);
tone(buzzerPin, 3000);
delay(1000);
noTone(buzzerPin);
delay(1000);
}
else if (duration > 160000 && duration < 167000)
{
//    lcd.print("Received: D          ");
digitalWrite(8,HIGH);
delay(160);
digitalWrite(8,LOW);
tone(buzzerPin, 3000);
delay(1000);
noTone(buzzerPin);
delay(1000);
}
 
}
 
