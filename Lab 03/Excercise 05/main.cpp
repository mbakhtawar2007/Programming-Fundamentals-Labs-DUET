#include <iostream>

int main() {
	int firstNumber;
	int secondNumber;

	std::cout << "Enter two integers: ";
	std::cin >> firstNumber >> secondNumber;

	int greaterNumber = (firstNumber > secondNumber) ? firstNumber : secondNumber;
	std::cout << "Greater number: " << greaterNumber << '\n';

	return 0;
}
