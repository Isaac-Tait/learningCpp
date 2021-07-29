#include <iostream>

int userKmTime()
{
#ifdef ENABLE_DEBUG
	std::cerr << "userKmTime() called\n";
#endif // ENABLE_DEBUG

	std::cout << "Please enter your kilometer split time. Minutes first, then seconds." << '\n';
	int m{};

	std::cin >> m;

	//An if/else statement that determines if the user input an acceptable data type to complete the calculation
	if (typeid(m) == typeid(float) ) {
		std::cout << "You entered an acceptable number format" << '\n';
	}
	else if (typeid(m) == typeid(char)) {
		std::cout << "Please enter a number greater than 0" << '\n';
	}

	return m;
}

void userKmSeconds(int m)
{
#ifdef ENABLE_DEBUG
	std::cerr << "userKmSeconds(int m) called\n";
#endif // ENABLE_DEBUG

	std::cout << "Your kilometer time in seconds is " << m << '\n';
}