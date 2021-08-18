/***************************************
For loops chapter
***************************************/
#include <iostream>

int main() {
//Instruction question
	int base{};
	int exponent{};
	int total{ 1 };

	std::cout << "Choose a base number\n";
	std::cin >> base;
	std::cout << "Choose an exponent value\n";
	std::cin >> exponent;

	for (int count{ 0 }; count < exponent; ++count) {
		total *= base;
	}

	std::cout << "You chose " << base << " and its exponent is " << exponent << " which reads " << base << " to the " << exponent << " power. That is equal to " << total << '\n';

//Quiz question #1
//Write a for loop that prints every even number from 0 to 20

	for (int i{ 0 }; i <= 20; i += 2)
		std::cout << i << ' ' << '\n';

//Quiz question #2
	int sum(int value) {
		int total{ 0 };

		for (int count{ 1 }; count <= value; ++count)
			total += value;

		return total;
	}
}

