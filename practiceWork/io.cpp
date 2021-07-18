#include <iostream>

int readNumber()
{
	std::cout << "Please enter a number of your choice " << '\n';
	int x{};
	std::cin >> x;

	return x;
}

void writeAnswer()
{
	std::cout << "The answer to adding your two numbers together is " << x << '\n';
}