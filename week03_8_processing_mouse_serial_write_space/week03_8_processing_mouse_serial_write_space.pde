//week03_8_processing_mouse_serial_write_space
import processing .serial.*; //使用serial外掛
Serial myPort;
void setup(){
  size(400, 400);
  myPort = new Serial(this, "COM7", 9600);
} //COM幾 看電腦
void mousePressed(){
  if(mouseButton==LEFT) myPort.write('b'); //用IUSB傳字母B
  if(mouseButton==RIGHT) myPort.write(' '); 
}
void draw(){
  if(mousePressed) background(#FF0000);
  else background(#00FF00);
}
