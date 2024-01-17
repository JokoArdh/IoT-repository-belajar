#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Scrolling Text: ");
  delay(1000);
 }

void loop() {
  // put your main code here, to run repeatedly:
 lcd.clear();

 //varabel trext yang akan berjalan
 String scrolText = "Selamat Datang !";

 //memunculkan text
 lcd.setCursor(0, 1);
 lcd.print(scrolText);
 delay(500);

 //geser text ke kiri dengan perulangan
 for(int i=0; i < scrolText.length(); i++){
  lcd.scrollDisplayLeft();
  delay(1000);
 }

}