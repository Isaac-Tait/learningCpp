#include <iostream>

int main()
{
	std::cout << "The byte size of the variable char is " << sizeof(char) << '\n';
	std::cout << "The byte size of the int is " << sizeof(int) << '\n';
	std::cout << "Enter the value of pi" << '\n';
	int pi{ };
	std::cin >> pi;
	return pi;
	std::cout << "The byte size of the variable pi is " << sizeof(pi) << '\n';
	std::cout << "The byte size of the variable long long is " << sizeof(long long) << '\n';
	std::cout << "The byte size of the variable double is " << sizeof(double) << '\n';

}