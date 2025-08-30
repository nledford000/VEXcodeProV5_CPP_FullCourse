#include "vex.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// ---- END VEXCODE CONFIGURED DEVICES ----
using namespace vex;

int main() {
  int counter = 0;

  while (counter < 5) {
    Brain.Screen.print("Counter: %d", counter);
    Brain.Screen.newLine();
    counter++;
    wait(500, msec);
  }
}