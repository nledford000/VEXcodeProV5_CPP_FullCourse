#include "vex.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// ---- END VEXCODE CONFIGURED DEVICES ----
using namespace vex;

extern motor Motor1;

int main() {
  Motor1.spin(forward, 50, percent);
  wait(2, seconds);
  Motor1.stop();
  Brain.Screen.print("Motor ran for 2 seconds");
}