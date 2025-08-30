#include "vex.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----
using namespace vex;

int main() {
  int x = 10;
  int y = 20;

  Brain.Screen.print("x = %d", x);
  Brain.Screen.newLine();
  Brain.Screen.print("y = %d", y);
  Controller1.Screen.print("x + y = %d", x + y);
}