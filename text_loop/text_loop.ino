/*
 * this code opens wordpad and writes a string for the number of
 * specified times
 * 
 */

#include <Keyboard.h>

String text = "hey you ";

void setup() {
  Keyboard.begin();
  delay(2000);
  wordpad();
  
  type(10);

}

void loop() {
  // nothing here

}

void type(int z){
  int l = text.length();
  for (int y = 0; y < z; y++){
    for (int x = 0; x < l; x++){
      Keyboard.print(text[x]);
      delay(10);
    }
    Keyboard.write(10);
  }
  
}

void wordpad(){
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("wordpad");
  Keyboard.write(0x0D);
  Keyboard.write(0x0A);
  delay(2000);
}
