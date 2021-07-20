#include <iostream>

int userKmTime()
{
#ifdef ENABLE_DEBUG
	std::cerr << "userKmTime() called\n";
#endif // ENABLE_DEBUG

	std::cout << "Please enter your kilometer split time. Minutes first, then seconds." << '\n';
	int m{};

	std::cin >> m;
	return m;
}

void userKmSeconds(int m)
{
#ifdef ENABLE_DEBUG
	std::cerr << "userKmSeconds(int m) called\n";
#endif // ENABLE_DEBUG

	std::cout << "Your kilometer time in seconds is " << m << '\n';
}