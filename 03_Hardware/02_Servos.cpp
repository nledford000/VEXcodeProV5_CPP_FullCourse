#include "vex.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Servo1               servo         A               
// ---- END VEXCODE CONFIGURED DEVICES ----
using namespace vex;

extern servo Servo1;

int main() {
  Servo1.setPosition(90, degrees);
  wait(2, seconds);
  Servo1.setPosition(0, degrees);
}
