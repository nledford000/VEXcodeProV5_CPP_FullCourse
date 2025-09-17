#include "vex.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// RightMotor           motor         2               
// LeftMotor            motor         1               
// Arm                  motor         3               
// ---- END VEXCODE CONFIGURED DEVICES ----
using namespace vex;

int upSpeed = 100;
int downSpeed = 45;
int holdSpeed = 25;

int main() {
	while(true){
		int leftPower = Controller1.Axis3.position();
		int rightPower = Controller1.Axis2.position();
		
		LeftMotor.spin(fwd, leftPower, pct);
		RightMotor.spin(fwd, rightPower, pct);
		
		if(Controller1.ButtonR1.pressing()){
			Arm.spin(fwd, upSpeed, pct);
			}else if(Controller1.ButtonR2.pressing()){
			Arm.spin(fwd, downSpeed, pct);
			}else{
			Arm.spin(fwd, holdSpeed, pct);
		}
	}
}