/*
 * this code opens wordpad and types random characters
 * 
*/

#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(2000);
  wordpad();
  ranK();

}

void loop() {
  // nothing here
  // nothing here
  // you can call the ranK() function here but you will no longer have control over the keyboard
  // don't try if you can't reprogram arduino with ICSP
}

void ranK(){
  for (int i = 0; i < 1000; i++){
    randomSeed(analogRead(A0));
    int x = random(32,126);
    Keyboard.write(x);
    delay(10);
    if (i%50 == 0){
      Keyboard.write(10);
    }

    
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
