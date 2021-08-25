#include <iostream>
#include "constants.h"

int isPrime(int x) 
{
	int count = 0;

	for (int j = 1; j <= x; ++j) 
	{
		if (x % j == 0) 
		{
			count++;
		}
	}
	if (count == 2)
	{
		std::cout << x << " is prime.\n";
	}
	else
		std::cout << x << " is NOT prime.\n";

	return 0;
}

int main() 
{
	for (int i{ 0 }; i <= 10; ++i) 
	{
		isPrime(constants::randomOne[i]);				
	}	
}