#include <iostream>

namespace Animals {

	enum Animals {
		chicken,
		dog,
		cat,
		elephant,
		duck,
		snake,
	};
}

int main() {
	double highTemperature[364]{ };

	std::cout << highTemperature[0] << '\n';
	
	int legs[Animals::snake]{};
	legs[Animals::cat] = 4;

	std::cout << legs[Animals::cat] << '\n';

	return 0;
}