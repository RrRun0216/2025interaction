//week10_4_arduino_serial_monitor_joystick_serial_println
//修改自week10_3_arduino_analoRead_A3
// 把 joystick 的 Y 的線，經由麵包板轉接，接到 MakerUNO A3
// 不能接其他的，因為要接有 ~ 小蟲符號的，代表 analog 訊號
void setup() {
  Serial.begin(9600);//開起usb傳輸
  pinMode(2, INPUT_PULLUP);
  pinMode(8, OUTPUT);  // 發出聲音
}
void loop() { //一秒鐘,會跑1000HZ
  delay(100); //慢一點,避免processing 來不及處理
  int now = analogRead(A3);
  Serial.println(now);
  //利用serial monitor 來看看會送出什麼訊號
  if (now > 800) {  // 變高
    tone(8, 523, 100);  // 發出 523 的 Do
    delay(100);
    tone(8, 784, 100);  // 發出 784 的 So
    delay(200);
  } else if (now < 200) {  // 變低
    tone(8, 784, 100);  // 發出 784 的 So
    delay(100);
    tone(8, 523, 100);  // 發出 523 的 Do
    delay(200);
  }
}