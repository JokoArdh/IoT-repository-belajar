
int sensorPin = D2;  // ini adalah pin digital d2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int objek = digitalRead(sensorPin); //MEMBACA SENSOR 
  Serial.print("Status Objek : "); //jika tidak ada objek bernilai 1 jika ada objek bernilai 0
  Serial.println(objek);
  delay(1000);

}
