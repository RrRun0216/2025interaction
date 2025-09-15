//week02_3_mousePressed_Serial
import processing.serial.*;//第一行,使用usb的serial
Serial myPort; //第二行,宣告usb的serial變數myPort
void mousePressed(){
  myPort.write(' ');//第四行,mouse按下十,就送' '出去
}
void setup(){
   size(400, 400);
   myPort = new Serial(this, "COM4", 9600);//第三行,準備好
}//剛剛你再Arduino 裡設定COM多少,就多少
void draw(){
  if(mousePressed) background(#FF0000);
  else background(#00FF00);
}
