#include "vex.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// LeftMotor            motor         1               
// RightMotor           motor         2               
// ---- END VEXCODE CONFIGURED DEVICES ----
using namespace vex;

extern motor LeftMotor;
extern motor RightMotor;

int main() {
  LeftMotor.spin(forward, 50, percent);
  RightMotor.spin(forward, 50, percent);
  wait(3, seconds);
  LeftMotor.stop();
  RightMotor.stop();
}