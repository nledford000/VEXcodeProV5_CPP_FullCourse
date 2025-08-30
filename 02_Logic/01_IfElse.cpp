#include "vex.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----
using namespace vex;

int main() {
  int value = 10;

  if (value > 5) {
    Brain.Screen.print("Value is greater than 5");
    Controller1.Screen.print("Big value");
  } else {
    Brain.Screen.print("Value is 5 or less");
  }
}