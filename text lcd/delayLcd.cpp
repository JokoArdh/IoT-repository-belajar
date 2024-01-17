#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  // put your setup code here, to run once:
lcd.init();
lcd.backlight();

lcd.setCursor(3,0);
lcd.print("Hello Word");

lcd.setCursor(0,1);
lcd.print("semangat SKRIPSI");
 }

void loop() {
  // put your main code here, to run repeatedly:
  //membuat delay perkata
  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("Hello Word");
  delay(1000); //membuat delay 1 detik
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("semangat SKRIPSI");
  delay(1000);

}
