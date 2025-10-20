//week07_5_arduino_analogWrite_RGB_LED
void setup() {
  pinMode(3, OUTPUT);//接最左邊的紅色
  //RGB LED 最長的那根,是接地GND
  pinMode(6, OUTPUT);//藍色(GND的旁邊那個)
  pinMode(5, OUTPUT);//綠色(最外面)
}
void loop() {
  analogWrite(6, 0);//藍色關掉
  analogWrite(3, 255);//最亮的紅色
  delay(500);//每0.5秒
  analogWrite(3, 0);//紅色關掉
  analogWrite(5, 255);//最高的綠色
  delay(500);
  analogWrite(5, 0);//綠色關掉
  analogWrite(6, 255);//最高的藍色
  delay(500);
}
