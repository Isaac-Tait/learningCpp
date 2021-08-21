#include <iostream>
#include "constants.h"
#include <cmath>

//#define ENABLE_DEBUG

bool isPrime(int x) 
{
	if (x < 2)
		std::cout << x << " is not prime, rather it is a composite number.\n";

		for (int i = 2; i <= sqrt(x); ++i) 
		{
			if ((x%i) == 0)
				std::cout << x << " is not prime, rather it is a composite number.\n";
		}
		std::cout << x << " is prime!!!\n";

		return 3;
}

int main() {

	for (int i{ 0 }; i <= 9; ++i) 
	{
		isPrime(constants::randomOne[i]);				
	}	
}