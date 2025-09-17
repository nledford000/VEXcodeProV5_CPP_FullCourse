/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\student                                          */
/*    Created:      Sat Sep 13 2025                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// armMotor             motor         3               
// armPot               pot           A               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int potVal;
int armMax = 5;
int armMin = 95;
int setPos = 45;

bool toggleA = 0;

int main() {
	while(true){
		potVal = armPot.value(pct);
		if(Controller1.ButtonA.pressing()){
			toggleA = 1 - toggleA;
		}
		if(toggleA == 0){
			if(Controller1.ButtonR1.pressing()){
				if(potVal <= armMax){
					armMotor.spin(reverse, 10, pct);
					}else{
					armMotor.spin(forward, 100, pct);
				}
				}else if(Controller1.ButtonR2.pressing() ){
				if(potVal >= armMin){
					armMotor.spin(forward, 25, pct);
					}else{
					armMotor.spin(reverse, 60, pct);
				}
				}else{
				armMotor.spin(forward, 25, pct);
			}
			}else if(toggleA == 1){
			if(potVal < setPos){
				armMotor.spin(reverse, 40, pct);
				}else if(potVal > setPos){
				armMotor.spin(forward, 80, pct);
				}else{
				toggleA = 0;
			}
		}
	}
}