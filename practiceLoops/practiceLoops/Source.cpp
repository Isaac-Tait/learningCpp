#include <iostream>
#include <cmath>
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
//Check a number in an array to see if it is prime or not
	int count = 0;

	for (int i = 1; i <= 10; ++i) {
		//std::cout << constants::randomOne[i] << '\n'; 
		//Uncomment the line above and the console prints each number in the array

//To check how many times the number in the array has been divided between 1 and itself we take count and increment it each time it is divided.
//If the count is greater than two (2) we know the number is not prime.
		for (int j = 1; j <= constants::randomOne[i]; ++j) 
		{
			if(constants::randomOne[i] % j == 0)
				++count;
		}
		//The above line theoretically should divide the number in array by one and increment up by one all the way up to the number.
		//If it returns a value higher than two then the number is not prime. 
		//Example: Say the number is 4 so - 4 % 1 = 0, 4 % 2 = 0, 4 % 3 != 0, 4 % 4 = 0 would increment to three (3) so four is not prime.
		if (count == 2)
		{
			std::cout << constants::randomOne[i] << " is not prime, rather it is a composite number.\n";
		}
		else
		{
			std::cout << constants::randomOne[i] << " is prime!!!\n";
		}
	} 
	


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