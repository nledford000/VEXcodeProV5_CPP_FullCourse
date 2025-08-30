# VEXcodeProV5_CPP_LearnByBuilding

A step-by-step **VEXcode Pro V5 C++ learning course** designed to teach programming, logic, and hardware integration for VEX Robotics. This course covers everything from basic printing and variables to controlling motors, servos, sensors, and building complete robotic mechanisms.

---

## Purpose

This repository is an educational resource for students learning **VEXcode Pro V5 with C++**. It provides:  

- Step-by-step lessons from **basics to full builds**.  
- Clear examples of **motor, servo, and sensor usage**.  
- Structured projects showing **how to combine code and hardware**.  

>Note: **You cannot simply copy and paste the code into VEXcode without first configuring your motors, sensors, and controller**, as the code relies on `robot-config.cpp` and `robot-config.h`.

---

## Folder Structure

The folder structure is organized to guide learners from basics to full robot builds:

- **01_Basics/**
  - 01_Printing.txt
  - 02_Variables.txt
  - 03_PrintingVariables.txt
  - 04_AddSubtractVariables.txt
  - 05_MultiplyDivideVariables.txt
- **02_Logic/**
  - 01_IfElse.txt
  - 02_SwitchCase.txt
  - 03_ForLoop.txt
  - 04_WhileLoop.txt
- **03_Hardware/**
  - 01_Motors.txt
  - 02_Servos.txt
  - **03_Sensors/**
    - 01_BumpSwitch.txt
    - 02_Potentiometer.txt
- **04_Builds/**
  - 01_RightLeftWheelArm.txt
  - 02_ArmWithPotGear.txt
  - 03_ArmWithPotGearAndServoButton.txt

> Each folder corresponds to a stage in the learning process:
> - Basics: printing, variables, math operations  
> - Logic: if/else, switch/case, loops  
> - Hardware: motors, servos, sensors  
> - Builds: combining code and hardware into functional mechanisms  

---

## Setup Instructions

1. **Install VEXcode Pro V5**  
   - Download the Pro version for your OS: [https://www.vexrobotics.com/vexcode-download](https://www.vexrobotics.com/vexcode-download)  
   - Install it following the on-screen instructions.  

2. **Create a new C++ Project**  
   - Open VEXcode Pro V5 → **File → New Project → C++ Project**  
   - Name it (e.g., `LearnByBuilding`)  

3. **Configure Motors and Sensors**  
   - Click **“Devices”** in the top toolbar.  
   - Add each motor, servo, or sensor with the correct **port and type**. Examples:  
     - LeftMotor → motor → Port 1  
     - RightMotor → motor → Port 2  
     - ArmMotor → motor → Port 3  
     - Servo1 → servo → Port 4  
     - PotentiometerA → potentiometer → Port A  
     - Controller1 → V5 Controller  

4. **Save the Robot Configuration**  
   - VEXcode will generate `robot-config.cpp` and `robot-config.h` which must remain in the project folder. 
---

© Stewarts Creek Robotics Team 1042
