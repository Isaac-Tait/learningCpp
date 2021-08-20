#include <iostream>
#include "constants.h"

/*******************
* This is practice to work out flow control via if statements, switch, goto, do while, and for
* Available variables are:
* pi
* gravity
* randomOne
* randomTwo
* hello
********************/

bool isPrime(constants::randomOne[i])
{
	if (n <= 1)
		std::cout << constants::randomOne[i] << " is not prime, rather it is a composite number\n";

	for (int i{ 0 }; i <= 7; ++i)
		if (n % 1 == 0)
			std::cout << constants::randomOne[i] << " is not prime, rather it is a composite number\n";

	std::cout << constants::randomOne[i] << " is prime\n";
}

int main() {
	float x{};

	//Test
	std::cout << constants::hello << '\n';

	if (constants::pi / constants::gravity == 0) {
		std::cout << "Pi divided by gravity is equal to zero\n";
	}
	else
		std::cout << "I know math\n";

	std::cout << "How strong is gravity in meters per second on Mars?\n";
	std::cin >> x;

	switch (x == constants::gravity) {
	case true: std::cout << "You guessed correctly!\n";
		break;
	case false: std::cout << "You did not guess correctly!\n";
		break;
	}
}