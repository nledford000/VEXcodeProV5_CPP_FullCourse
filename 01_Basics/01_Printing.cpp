#include "vex.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----
using namespace vex;

int main() {
  Brain.Screen.print("Hello VEX!");
  Controller1.Screen.print("Hello Controller!");
}