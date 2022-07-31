// project1.5July22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	// Lesson 1.5
	/*std::cout << "Enter a number " << '\n';
	int x{};
	std::cin >> x;
	std::cout << "You entered " << x << '\n';
	return 0;*/

	// Lesson 1.6
	void doNothing(int&)
	{
	}

	int main()
	{
		// define an integer variable named x
		int x; // this variable is uninitialized

		doNothing(x); // make the compiler think we're assigning a value to this variable

		// print the value of x to the screen (who knows what we'll get, because x is uninitialized)
		std::cout << x;

		return 0;
	}
}