#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  // put your setup code here, to run once:
  lcd.clear();
  lcd.begin(16,2);
  lcd.setCursor(1,0);
  lcd.print("Subscribe");
  
  lcd.setCursor(0,1);
  lcd.print("Hiren Tailor");
 }

void loop() {
  // put your main code here, to run repeatedly:
  
  //for (int positionCounter = 0; positionCounter < 12; positionCounter++) {
    // scroll one position left:
    //lcd.scrollDisplayRight();
    // wait a bit:
    //delay(2000);
  //}
//for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    // scroll one position right:
    //lcd.scrollDisplayLeft();
    // wait a bit:
    //delay(2000);
 // }
//for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
    // scroll one position left:
   // lcd.scrollDisplayLeft();
    // wait a bit:
   // delay(100);
 // }
//delay(150);
}
