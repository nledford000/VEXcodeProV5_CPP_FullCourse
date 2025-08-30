#include "vex.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// ---- END VEXCODE CONFIGURED DEVICES ----
using namespace vex;

int main() {
  int a = 15;
  int b = 5;
  int sum = a + b;
  int diff = a - b;

  Brain.Screen.print("Sum: %d", sum);
  Brain.Screen.newLine();
  Brain.Screen.print("Difference: %d", diff);
}