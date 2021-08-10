//#include <iostream>
//
//int main() {
//	int number;
//
//	std::cout << "Enter a number: ";
//	std::cin >> number;
//
//	std::cout << "Your number " << number << " doubled is: " << number * 2 << '\n';
//
//	return 0;
//}

// Program 10
#include <iostream>

int main() {
	float result = 1 / 3; 
	/* The problem is that "1" is an integer. The number "3" is also an integer. So "1/3" is an integer divide thus line 18 does an integer dived of 1 by 3. 
	Integer divides truncate the fractional part so the result is 0. The integer "0" is turned into floating-point and assigned result.
	The program should have been written as:
	result = 1.0 / 3.0;
	*/

	std::cout << "Result is " << result << '\n';

	return 0;
}