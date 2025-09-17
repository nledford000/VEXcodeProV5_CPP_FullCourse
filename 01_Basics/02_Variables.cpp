#include "vex.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----
using namespace vex;

int main() {
  int number = 42;
  double pi = 3.14;

  Brain.Screen.print("Number: %d", number);
  Brain.Screen.newLine();
  Brain.Screen.print("Pi: %.2f", pi);

  Controller1.Screen.print("Number: %d", number);
}