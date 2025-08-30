#include "vex.h"
using namespace vex;

int main() {
  int option = 2;

  switch(option) {
    case 1:
      Brain.Screen.print("Option 1 selected");
      break;
    case 2:
      Brain.Screen.print("Option 2 selected");
      Controller1.Screen.print("Case 2");
      break;
    default:
      Brain.Screen.print("Unknown option");
  }
}