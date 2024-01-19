#include <RTClib.h>
#include <Wire.h>

RTC_DS3231 rtc;

void setup()
{
  Serial.begin(9600);
  Wire.begin(5,4);
  rtc.begin();
  rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));

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

  Serial.print(" Suhu : ");
  Serial.print(rtc.getTemperature()); //Fungsi intuk mendapatkan data suhu dari rtc
  Serial.print("C");
   Serial.println();


  delay(1000);
}
