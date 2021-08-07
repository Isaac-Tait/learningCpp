#include <iostream>

//My solution

int main() {
	std::int8_t x{};

	std::cout << "Enter an integer: " << x << '\n';
		std::cin >> x;

	if ((x % 2) == 0 && (x >= '-128' && x <= '127')) {
		std::cout << x << " is even\n";
	}
	else if ((x % 2) != 0 && (x >= '-128' && x <= '127')) {
		std::cout << x << " is odd\n";
	}
	else
		std::cout << "You did not enter an integer between -128 and 127\n";

	return 0;
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