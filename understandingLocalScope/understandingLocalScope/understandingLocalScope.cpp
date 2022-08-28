// understandingLocalScope.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int add(int x, int y)
{
	int x{ 87 };
	int y{ 999 };

	return x + y;
}
// x & y go out of scope here... So, you can use them again later - or can you???

int main()
{
	int x{ 0 };
	int y{ 0 };

	std::cout << "Enter a number between 0 - 999" << '\n';

	std::cin >> x;
	//x is in scope from line 17 where it was created. x from the object add is no longer in scope

	std::cout << "Enter a number between 0 - 999" << '\n';

	std::cin >> y;
	// y is in scope from line 18 where it was created. y from the object add is no longer in scope

	std::cout << "You entered " << x << " and " << y << " added together they equal: " << add(x, y) << '\n';

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
