#include <iostream>
#include "Header.h"

int main() {
	for (int i{ 0 }; i <= std::size(constants::code); ++i) {
		double number = constants::code[i];
		std::cout << static_cast<char>(number);
	}
	//Or written another way using a type alias
	for (int i{ 0 }; i <= std::size(constants::code); ++i) {
		auto num = constants::code[i];
		std::cout << int_least8_t(num);
	}
	return 0;
}