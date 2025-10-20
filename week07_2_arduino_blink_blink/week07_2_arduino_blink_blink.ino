//week07_2_arduino_blink_blink
//week07_1多加一支LED
//長腳數字短腳GND
void setup() {
  pinMode(12, OUTPUT);//把第12隻腳,能送出資料output
  pinMode(13, OUTPUT);//把第13隻腳,能送出資料output
}

void loop(){
  digitalWrite(12, LOW);//暗掉
  digitalWrite(13, HIGH);//發亮
  delay(500);
  digitalWrite(13, LOW);//暗掉
  digitalWrite(12, HIGH);//發亮
  delay(500);
}
