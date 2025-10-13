//week06_4_arduino_slow_jogging
void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(8, 780, 60);//自己決定聲音的HZ
  delay(333);//等0.333秒換下個聲音
  tone(8, 320, 60);
  delay(333);
}//每秒會叫3聲,60秒180聲,180BPM(bear per minute)
