//week07_3_arduino_blink_blink_blink_blink
//week07_2多加2支LED
//使用麵包板,每5洞是一版,所以用GND接之後
//長腳數字(13,12,11,10)短腳GND
void setup() {
  pinMode(10, OUTPUT);//把第10隻腳,能送出資料output
  pinMode(11, OUTPUT);//把第11隻腳,能送出資料output
  pinMode(12, OUTPUT);//把第12隻腳,能送出資料output
  pinMode(13, OUTPUT);//把第13隻腳,能送出資料output
}

void loop(){
  for(int i=10; i<=13; i++){
    digitalWrite(13, LOW);//暗掉
    digitalWrite(i-1, LOW);//暗掉
    digitalWrite(i, HIGH);//發亮
    delay(500);
  }
}
