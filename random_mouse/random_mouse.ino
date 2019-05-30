/*
 * This code moves the mouse cursor randomly.
 * This will 
 * 
 * 
 */

#include <Mouse.h>

void setup() {
  Mouse.begin();
  delay(2000);
  
  ranM();
  

}

void loop() {
  // nothing here
  // you can call the ranM() function here but you will no longer be able to control your cursor
  // don't try if you can't reprogram arduino with ICSP
}

void ranM(){
  for (int i = 0; i < 50; i++){
    randomSeed(analogRead(A0));
    int x = random(-5,5);
    int y = random(-5,5);
    for (int j = 0; j < 100; j++){
      Mouse.move(x,y);
      delay(10);
    }
  }
}
