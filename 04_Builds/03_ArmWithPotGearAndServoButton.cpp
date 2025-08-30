#include "vex.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// ArmMotor             motor         1               
// PotentiometerC       pot           C               
// LeftMotor            motor         2               
// RightMotor           motor         3               
// Controller1          controller                    
// Servo1               servo         A               
// ---- END VEXCODE CONFIGURED DEVICES ----
using namespace vex;

extern motor ArmMotor;
extern pot PotentiometerA;
extern servo Servo1;

int main() {
  bool servoState = false; // Track toggle state

  while (true) {
    int angle = PotentiometerA.angle(degrees);

    Brain.Screen.setCursor(1,1);
    Brain.Screen.print("Pot: %d deg", angle);

    // Arm control with potentiometer
    if (angle < 90) {
      ArmMotor.spin(forward, 30, percent);
    } else {
      ArmMotor.stop();
    }

    // Toggle servo with Button A
    if (Controller1.ButtonA.pressing()) {
      servoState = !servoState;  // flip state

      if (servoState) {
        Servo1.setPosition(90, degrees);
        Controller1.Screen.clearScreen();
        Controller1.Screen.print("Servo to 90");
      } else {
        Servo1.setPosition(0, degrees);
        Controller1.Screen.clearScreen();
        Controller1.Screen.print("Servo to 0");
      }

      // debounce: wait until button is released
      while (Controller1.ButtonA.pressing()) {
        wait(20, msec);
      }
    }

    wait(20, msec);
  }
}
