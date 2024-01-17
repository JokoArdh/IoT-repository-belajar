#include <Wire.h>
#include <LiquidCrystal_I2C.h> //ini untuk memanggil library dari lcd i2c

LiquidCrystal_I2C lcd(0x27, 16, 2); //alamat address lcd 0x27 dan 16, 2 adalah ukuran lcd 16x2

void setup() {
  // put your setup code here, to run once:
lcd.init();
lcd.backlight();

//lcd terdefinisi 16x2
//horizontal 2 dimulai dari 0-1
//ver tikal 16 dimulai dari 0-15
lcd.setCursor(3,0); // 3 adalah row ke 3 dan 0 adalah row atasnya
lcd.print("Hello Word");

lcd.setCursor(0,1);
lcd.print("semangat SKRIPSI");
 }

void loop() {
 

}
