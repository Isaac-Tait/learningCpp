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

int main() {
	float x{};

	//Test
	std::cout << constants::hello << '\n';

	if (constants::pi / constants::gravity == 0) {
		std::cout << "Pi divided by gravity is equal to zero\n";
	}
	else
		std::cout << "I know math\n";

	for (int i{ 0 }; i <= 7; ++i)

		if (constants::randomOne[i] % 2 == 0)
			std::cout << constants::randomOne[i] << " is not prime\n";

		else if (constants::randomOne[i] == 1 || constants::randomOne[i] == 0)
			std::cout << constants::randomOne[i] << " is not prime\n";

		else
			std::cout << constants::randomOne[i] << " is prime\n";

	std::cout << "How strong is gravity in meters per second on Mars?\n";
	std::cin >> x;

	switch (x == constants::gravity) {
	case true: std::cout << "You guessed correctly!\n";
		break;
	case false: std::cout << "You did not guess correctly!\n";
		break;
	}
}