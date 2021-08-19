/****************************************
* User only enters one value: initialHeight
* From there the program inputs initial height and time into calculateAndPrintHeight function.
* The calculateAndPrintHeight function passes the parameter values of height and time to calculateHeight via pass by value.
* calculateHeight takes those values and puts them into the calculations using the gravity constant defined in the header file.
* I need to get the program to run with the time being run by a loop. Something like:
* continue second count until distanceFallen == initialHeight...
*****************************************/

#include <iostream>
#include "constants.h"

double calculateHeight(double initialHeight, int seconds) {
	double distanceFallen { (myConstants::gravity * seconds) * (seconds / 2) };
	double heightNow { initialHeight - distanceFallen };

	if (heightNow < 0.0) {
		return 0.0;
	}
	else {
		return heightNow;
	}
}

bool calculateAndPrintHeight(double initialHeight, int time) {
	double currentHeight = calculateHeight(initialHeight, time);
	std::cout << "At " << time << " seconds, the ball is at height: " << calculateHeight(initialHeight, time) << '\n';

	return (currentHeight == 0.0);
}

int main() {
	std::cout << "Enter the initial height of the tower in meters: ";
	double initialHeight;
	std::cin >> initialHeight;

	//Loop here till the ball hits the ground...
	int seconds{ 0 };
	bool hitGround = false;

	do {
		hitGround = calculateAndPrintHeight(initialHeight, seconds++);
	} while (!hitGround);


	return 0;
}