#include <iostream>

int main() {
	/*
	char ch = 'A';

	std::cout << ch << static_cast<char>(ch + 1) << static_cast<char>(ch + 2) << '\n';

	return 0;
	*/

	float i{ 3.5 }; //Will not compile because 3.5 is a float/double but its type is set to integer,
	//which will only hold one (1) digit not three (3). To fix change int type to float (or double but overkill).

	/**********
	* Explicit Type Conversion
	**********/

	double d = 10.0 / 4.0;

	std::cout << d << '\n'; //Will return 2 despite d being type double

	/*******************************************************/

	double c{ 10 };
	double e{ 4 };

	double a = c / e; // Will return 2 unless...

	/*******************************************************/

	double f{ 10 };
	double u{ 4 };

	double l{ (double)f / u }; //C-style cast done via the () operator
	std::cout << "l is equal to: " << l << '\n';

	//Commas can be used to separate statements. So 1,000,000 actually reads:
	// 1;
	// 000;
	// 000;

	long int one_million;
	one_million = 1, 000, 000;

	std::cout << "One Million " << one_million << '\n';
	return 0;
}