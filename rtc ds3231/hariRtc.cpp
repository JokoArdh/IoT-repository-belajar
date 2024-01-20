#include <RTClib.h>
#include <Wire.h>

RTC_DS3231 rtc;

//membuat variabel hari untuk dibaca rtc karena default hari di rtc menggunakan angka 0-6
char dataHari[7][12] = {"Minggu","Senin","Selasa","Rabu","Kamis","Jumat","Sabtu"};

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
  Serial.print(rtc.getTemperature());
  Serial.print("C");

  Serial.print(" Hari : ");
  Serial.print(dataHari[now.dayOfTheWeek()]); // ini untuk mendapatkan hari
  Serial.println();

  delay(1000);
}
