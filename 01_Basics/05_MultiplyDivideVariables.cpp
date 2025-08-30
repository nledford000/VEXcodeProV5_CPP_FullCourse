#include "vex.h"
using namespace vex;

int main() {
  int a = 12;
  int b = 3;
  int product = a * b;
  int quotient = a / b;

  Brain.Screen.print("Product: %d", product);
  Brain.Screen.newLine();
  Brain.Screen.print("Quotient: %d", quotient);
}