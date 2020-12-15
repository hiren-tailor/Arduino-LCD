#include <LiquidCrystal.h>
const int rs=12, en=11, d4=5, d5=4, d6=3, d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {
  // put your setup code here, to run once:
  lcd.clear();
  lcd.begin(16,2);
  lcd.setCursor(1,0);
  lcd.print("SUBSCRIBE");
  
  lcd.setCursor(0,1);
  lcd.print("HIREN TAILOR");
 }

void loop() {
  // put your main code here, to run repeatedly:
  
    //lcd.scrollDisplayRight();
    //delay(500);
    //lcd.scrollDisplayLeft();
    // wait a bit:
    //delay(500);
  }
