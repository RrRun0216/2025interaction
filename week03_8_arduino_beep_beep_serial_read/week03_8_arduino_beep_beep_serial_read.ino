//week03_8_arduino_beep_beep_serial_read
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //設定USB傳輸速度
  pinMode(8, OUTPUT); //8要會發聲
}
int beep = 1;
void serialEvent(){ 
  while (Serial.available()) {
    char now = Serial.read();
    if(now==' ') beep = 0;
    if(now=='b') beep = 1;
  }
}
void loop() {
  if(beep==1){
  tone(8, 800, 200);
  delay(1000);
  }
}
