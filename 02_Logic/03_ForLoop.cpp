#include "vex.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// ---- END VEXCODE CONFIGURED DEVICES ----
using namespace vex;

int main() {
  for (int i = 0; i < 5; i++) {
    Brain.Screen.print("i = %d", i);
    Brain.Screen.newLine();
  }
}