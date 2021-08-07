#include <iostream>
#include <stdlib.h>
#include <string>

//My solution

int main() {
	std::string x;

	std::cout << "Enter an integer: \n";
	std::cin >> x;
	int intValue = atoi(x.c_str());

	if (intValue == 0) {
		std::cout << "You did not enter a number...\n";
	}
	else if ((intValue % 2) != 0) {
		std::cout << x << " is odd\n";
	}
	else if ((intValue % 2) == 0) {
		std::cout << x << " is even\n";
	}
}

//Another work in progress

//bool isEven(int x)
//{
//    // if x % 2 == 0, 2 divides evenly into our number, which means it must be an even number
//    return (x % 2) == 0;
//}
//
//int main()
//{
//    std::cout << "Enter an integer: ";
//    std::int16_t x{};
//    std::cin >> x;
//
//    if (isEven(x) && isdigit(x))
//        std::cout << x << " is even\n";
//    else 
//        std::cout << x << " is odd\n";
//
//    return 0;
//}