#include <DigiKeyboard.h>

int loopn = 0;

void setup() {}


void loop() {
  if(loopn++ >= 5) { //Adds one to LoopN, and once it reaches 5, stop.
    //Compatibillity (next line)
    DigiKeyboard.sendKeyStroke(0);
  
    //Formatted like this: Use the arrow keys, and then use two mod keys. Delay one and a half seconds. Repeat.
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN, MOD_ALT_LEFT | MOD_CONTROL_LEFT);
    DigiKeyboard.delay(1500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT, MOD_ALT_LEFT | MOD_CONTROL_LEFT);
    DigiKeyboard.delay(1500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT, MOD_ALT_LEFT | MOD_CONTROL_LEFT);
    DigiKeyboard.delay(1500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_UP, MOD_ALT_LEFT | MOD_CONTROL_LEFT);
  }
}
