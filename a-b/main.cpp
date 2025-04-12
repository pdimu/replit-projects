#include <iostream>

int main() {
  int num1, num2;
  char operation;

  std::cout << "Enter first number: ";
  std::cin >> num1;

  std::cout << "Enter second number: ";
  std::cin >> num2;

  std::cout << "Enter operation (+ or -): ";
  std::cin >> operation;

  if (operation == '+') {
    std::cout << "Result: " << num1 + num2 << std::endl;
  } else if (operation == '-') {
    std::cout << "Result: " << num1 - num2 << std::endl;
  } else {
    std::cout << "Invalid operation. Please enter either + or -." << std::endl;
  }

  return 0;
}
