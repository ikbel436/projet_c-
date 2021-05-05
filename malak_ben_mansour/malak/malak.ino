
#include<LiquidCrystal.h>

LiquidCrystal lcd(13,12,11,10,9,8,7);
char data;
String message; 
void setup() {
  // put your setup code here, to run once:
lcd.begin(20,4);
lcd.setCursor(1,2);
lcd.print("Bienvenue");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
{
  
  message=Serial.readString();
  lcd.clear();
  lcd.print(message);

  }
}
