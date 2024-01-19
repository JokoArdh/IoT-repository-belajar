#include <RTClib.h>  //memasukan library rtc
#include <Wire.h>

RTC_DS3231 rtc; //variabel rtc ds3231


void setup()
{
  Serial.begin(9600); // memulai serial monitor 
  Wire.begin(5,4); // start pin SDA dan SCL

  //memulai rtc
  rtc.begin(); 
  rtc.adjust(DateTime(F(__DATE__), F(__TIME__))); //melakukan set datetime otomatis

}
void loop()
{

  DateTime now = rtc.now();
   Serial.print(now.day());        //Menampilkan Tanggal
  Serial.print("/");
  Serial.print(now.month());      //Menampilkan Bulan
  Serial.print("/");
  Serial.print(now.year());       //Menampilkan Tahun
  Serial.print(" ");
  
  Serial.print("Jam : ");
  Serial.print(now.hour());       //Menampilkan Jam
  Serial.print(":");
  Serial.print(now.minute());     //Menampilkan Menit
  Serial.print(":");
  Serial.print(now.second());     //Menampilkan Detik
  Serial.println();

  delay(1000);
}
