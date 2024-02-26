float a = 2.14;
float b = 3.14;
float tambah, kali;
String data1 = "semangat belajar";
String data2 = "Internet of Things (IOT)";
String hasil;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("program prosedure arduino");
  tambah = a + b;
  kali = a * b;
  hasil = data1 + data2;
}

void loop() {
  // put your main code here, to run repeatedly:
  // this speeds up the simulation
  Serial.println(tambah);
  Serial.println(kali);
  Serial.println(hasil);
  Serial.println();
  delay(2000);
}