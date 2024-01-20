
const int proximityPin = D2; //pin pada sesnor ditancapkan ke d2 nodemcu
int proximityValue = 0; //nilai

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(proximityPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  proximityValue = digitalRead(proximityPin); //membaca sesnsor

  if(proximityValue == LOW){ // jika daya low maka tidak terdeteksi
    Serial.println("Objek Terdeteksi");
  }else {
    Serial.println("Tidak Ada Objek");
  }

  delay(1000);

}
