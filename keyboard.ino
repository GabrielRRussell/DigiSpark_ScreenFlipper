#include <DigiKeyboard.h>

int loopn = 0;

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  if(loopn++ >= 5) {
    // this is generally not necessary but with some older systems it seems to
    // prevent missing the first character after a delay:
    DigiKeyboard.sendKeyStroke(0);
  
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN, MOD_ALT_LEFT | MOD_CONTROL_LEFT);
    DigiKeyboard.delay(1500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT, MOD_ALT_LEFT | MOD_CONTROL_LEFT);
    DigiKeyboard.delay(1500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT, MOD_ALT_LEFT | MOD_CONTROL_LEFT);
    DigiKeyboard.delay(1500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_UP, MOD_ALT_LEFT | MOD_CONTROL_LEFT);
  }
}
