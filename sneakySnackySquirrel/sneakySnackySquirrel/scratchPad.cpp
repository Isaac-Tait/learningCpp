/*
https://stackoverflow.com/questions/8844609/handling-bool-value-with-an-if-statement
*/

#include <iostream>
#include <time.h>
#include <cstdlib>
#include <chrono>
#include <thread>

enum Colored_Acorns { Purple, Blue, Yellow, Green, Red };

bool acornsInPossesion = false;

	/*User's acorn won code*/
std::string userAcornWon() {
	srand(time(NULL));
	int randomIndex = rand() % 5;

	if (randomIndex == 1) {
		std::cout << "Blue\n";
	}
	else if (randomIndex == 2) {
		std::cout << "Green\n";
	}
	else {
		std::cout << "Red\n";
	}

	return userAcornWon();
}
