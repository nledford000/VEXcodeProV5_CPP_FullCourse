#include "vex.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// ArmMotor             motor         1               
// PotentiometerA       pot           A               
// ---- END VEXCODE CONFIGURED DEVICES ----
using namespace vex;

extern motor ArmMotor;
extern pot PotentiometerA;

int main() {
  while (true) {
    int angle = PotentiometerA.angle(degrees);
    Brain.Screen.setCursor(1,1);
    Brain.Screen.print("Pot: %d deg", angle);

    if (angle < 90) {
      ArmMotor.spin(forward, 30, percent);
    } else {
      ArmMotor.stop();
    }
    wait(20, msec);
  }
}