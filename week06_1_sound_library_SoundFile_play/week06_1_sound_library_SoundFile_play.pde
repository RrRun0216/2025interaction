//week06_1_sound_library_SoundFile_play
//file-examples-libraries-sound-soundfile-simpleplayback
//範例有聲音,有相關函式可學習參考
import processing.sound.*;//使用聲音的外掛模組
SoundFile sound;//宣告soundfile物件變數

void setup() {
  size(500, 400);//視窗大小
  sound = new SoundFile(this, "music.mp3");
  sound.play(); //播放
}
void draw(){
}
  
