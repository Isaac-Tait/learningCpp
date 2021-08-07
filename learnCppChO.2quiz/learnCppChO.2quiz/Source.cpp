//#include <bitset>
//#include <iostream>
//
//// "rotl" stands for "rotate left"
//std::bitset<4> rotl(std::bitset<4> bits)
//{
//	// bits << 1 does the left shift
//	// bits >> 3 handle the rotation of the leftmost bit
//	return (bits << 1) | (bits >> 3);
//}
//
//int main()
//{
//	std::bitset<4> bits1{ 0b0001 };
//	std::cout << rotl(bits1) << '\n';
//
//	std::bitset<4> bits2{ 0b1001 };
//	std::cout << rotl(bits2) << '\n';
//
//	return 0;
//}

//#include <bitset>
//#include <cstdint>
//#include <iostream>
//
//int main()
//{
//    constexpr std::uint_fast8_t option_viewed{ 0b0000'0001 };
//    constexpr std::uint_fast8_t option_edited{ 0b0000'0010 };
//    constexpr std::uint_fast8_t option_favori{ 0b0000'0100 };
//    constexpr std::uint_fast8_t option_shared{ 0b0000'1000 };
//    constexpr std::uint_fast8_t option_delete{ 0b0001'0000 };
//
//    std::uint_fast8_t myArticleFlags{ option_favori };
//
//    myArticleFlags |= option_viewed;
//
//    myArticleFlags &= ~option_viewed;
//
//    std::cout << std::bitset<8>{ myArticleFlags } << '\n';
//
//    return 0;
//}

//Write a program that asks the user to input a number between 0 and 255. 
//Print this number as an 8-bit binary number (of the form #### ####). 
//Do not use any bitwise operators. Do not use std::bitset.

#include <iostream>

int main() {
	int x{};
	int y{};
	int z{};
	int a{};
	int b{};
	int c{};
	int d{};
	int e{};

	std::cout << "Enter a number between 0 and 255: " << x << '/n';
	std::cin >> x;

	x >= 128 ? 1 : 0;
	if (1) {
		y = x - 128;
	}
	else {
		y = x;
	};

	y >= 64 ? 1 : 0;
	if (1) {
		z = y - 64;
	}
	else {
		z = y;
	}

	z >= 32 ? 1 : 0;
	if (1) {
		a = z - 32;
	}
	else {
		a = z;
	}

	z >= 16 ? 1 : 0; 
	if (1) {
		b = a - 16; 
	}
	else {
		b = a;
	}

	a >= 8 ? 1 : 0;
	if (1) {
		c = b - 8;
	}
	else {
		c = b;
	}

	b >= 4 ? 1 : 0;
	if (1) {
		d = c - 16;
	}
	else {
		d = c;
	}

	// I gave up, tracking all the variables is WAY too complicated....

	std::cout << "You chose " << x << "." << x << "translated to 8-bit binary is: " << /*I need a variable to hold the returns above...*/ << '\n';

	return 0;
}
