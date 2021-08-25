#include <iostream>
#include "constants.h"

bool isPrime(int x) 
{
	if (x < 2)
	{
		std::cout << x << " is not prime.\n";
	}
	else if (x == 3 || x == 2) 
	{
		std::cout << x << " is prime.\n";
	}
	else if (x % 2 == 0) 
	{
		std::cout << x << " is not prime.\n";
	}

	for (int j = 2; j <= sqrt(x); ++j) 
	{
		if (x % j == 0) {
			std::cout << x << " is not prime\n";
			break;
		}
		std::cout << x << " is prime\n";
	}

	return 0;
}

int main() 
{
	for (int i{ 0 }; i <= 10; ++i) 
	{
		isPrime(constants::randomOne[i]);				
	}	
}