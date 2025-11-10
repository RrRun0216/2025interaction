//week10_3_arduino_analoRead_A3
// 把 joystick 的 Y 的線，經由麵包板轉接，接到 MakerUNO A3
// 不能接其他的，因為要接有 ~ 小蟲符號的，代表 analog 訊號
void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(8, OUTPUT);  // 發出聲音
}

void loop() {
  int now = analogRead(A3);
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
