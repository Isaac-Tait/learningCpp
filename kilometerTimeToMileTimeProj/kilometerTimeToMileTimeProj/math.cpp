#include <iostream>

int userKmTime()
{
	std::cout << "Please enter your kilometer split time. Minutes first, then seconds." << '\n';
	int m{};

	std::cin >> m;
	return m;
}

void userKmSeconds(int m)
{
	std::cout << "Your kilometer time in seconds is " << m << '\n';
}