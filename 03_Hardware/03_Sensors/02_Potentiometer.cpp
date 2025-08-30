#include "vex.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// PotentiometerA       pot           A               
// ---- END VEXCODE CONFIGURED DEVICES ----
using namespace vex;

extern pot PotentiometerA;

int main() {
  while (true) {
    int angle = PotentiometerA.angle(degrees);
    Brain.Screen.setCursor(1,1);
    Brain.Screen.print("Pot: %d deg", angle);
    wait(200, msec);
  }
}