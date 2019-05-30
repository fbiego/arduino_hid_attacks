

#include <Keyboard.h>

String text = "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat";

void setup() {
  Keyboard.begin();
  delay(2000);
  wordpad();
  type();

}

void loop() {
  // nothing here

}

void type(){
  int l = text.length();
  
  for (int x = 0; x < l; x++){
    Keyboard.print(text[x]);
    delay(10);
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
