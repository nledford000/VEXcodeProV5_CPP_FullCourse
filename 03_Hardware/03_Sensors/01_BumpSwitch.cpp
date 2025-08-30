#include "vex.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// BumperB              bumper        B               
// ---- END VEXCODE CONFIGURED DEVICES ----
using namespace vex;

extern bumper BumperB;

int main() {
  while (true) {
    if (BumperB.pressing()) {
      Brain.Screen.print("Bumper pressed!");
      Controller1.Screen.print("Pressed");
    } else {
      Brain.Screen.clearScreen();
    }
    wait(100, msec);
  }
}