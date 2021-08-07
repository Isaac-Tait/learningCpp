/*
Write the following program: The user is asked to enter 2 floating point numbers (use doubles). 
The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. 
The program computes the answer on the two numbers the user entered and prints the results. 
If the user enters an invalid symbol, the program should print nothing.
*/

#include <iostream>;

int main() {

	int x{};
	int y{};
	char z{};

	std::cout << "Enter a double value: " << x << '\n';
	std::cin >> x;

	std::cout << "Enter another double value: " << y << '\n';
	std::cin >> y;

	std::cout << "Enter one of the following: +, -, *, or / :\n";
	std::cin >> z;

	if (z == '+') {
		std::cout << x << z << y << " = " << x + y << '\n';
	}
	else if (z == '-') {
		std::cout << x << z << y << " = " << x - y << '\n';
	}
	else if (z == '*') {
		std::cout << x << z << y << " = " << x * y << '\n';
	}
	else if (z == '/') {
		std::cout << x << z << y << " = " << x / y << '\n';
	}
	else {
		std::cout << " " << '\n';
	}

	return 0;
}