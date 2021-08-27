/****************************************
*Sneaky Snacky Squirrel Game coded in C++

** Define the goal
	User competes against the computer to fill their queue up first.
	The queue is five color slots (green, yellow, red, blue, & purple).
	The "spinner" selects either a color at random or allows the player to select one or two (depending on their roll), and 
	lose all filled in slots (reset to zero(0)).
	color(s) or they lose them all.

** Define the requirements
	The player only gets one turn, then it is the computers turn
	Once the slots of user or computer is filled a winner is declared and the console exits...

** Define your tools, targets, and backup
	Visual Studio
	Myself for now...
	GitHub

** Break hard problems down into easy problems
	1st - identify random number selector
	1a - Computer is randomly selected but the same name needs to be used throughout the game...
	2nd - Define board with five slots and remember which ones have been filled
	3rd - If computer gets to choose two (or one color) it must choose only available colors at random...
	4th - Could be cool if there was a board displaying R, B, G, Y, P with an X above denoting gotten already...

** Figure out sequence of events
	1 - Enter players name
	2 - Random selection who goes first - player or computer
	3 - Spin chooses color or gives user option to select one or two (depending on "roll")
	4 - Turn moves onto other player who completes step 3.
	5 - Step 4 continues until someone wins

*****************************************/
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <chrono>
#include <thread>

#include "constants.h"

/*Global Variables*/
std::string x{}; //User's name

/*Function that chooses computers name from the computer array defined in constants.h*/
std::string opponent() {
	srand(time(NULL));
	int randomIndex = rand() % 5;

	std::string value = constants::computer[randomIndex];

	return value;
}

/*Function that chooses who begins the game - the user or the computer*/
std::string chosenPlayer() {
	srand(time(NULL));
	int randomIndex = rand() % 2;
	if (randomIndex == 1) {
		return x;
	}
	else {
		return opponent();
	}

	return chosenPlayer();
}

std::string acornWon() {
	srand(time(NULL));
	int randomIndex = rand() % 5;

	std::string acorn = constants::coloredAcorns[randomIndex];

	return acorn;
}

int main() {
 	int y{}; //variable y declared but not defined - it will hold the user's random number choice to initiate their roll.

	std::cout << "What is your name?\n";
	std::cin >> x;

	std::cout << "Hello " << x << " and welcome to the game " << constants::gameName << " where you try to beat the computer in a random game of chance.\n\nYou are in a race against time to fill your nest with the five colors of acorns before winter comes!\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(4500));//Pause console for 4.5 seconds
	std::cout << "Your opponent is the computer " << opponent() << " she is hard to beat.\n";
	std::cout << "Good luck " << x << "!" << '\n';
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));//Pause console for 1 second
	std::cout << chosenPlayer() << " has been randomly selected to begin the game.\n";

	if (chosenPlayer() == x) 
	{
		std::cout << "Please enter a random number and press enter to see what acorn you will find.\n";
		std::cin >> y;
		std::cout << "Congratulations you found a " << acornWon() << " Acorn for your nest. That is one less acorn to find before winter sets in.\n";
	}
	else 
	{
		std::cout << "It looks like " << opponent() << " found a " << acornWon() << " Acorn. It is time for you " << x << " to go look for an acorn.\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(1500));//Pause console for 1.5 seconds
		std::cout << "Please enter a random number and press enter to see what acorn you will find.\n";
		std::cin >> y;
		std::cout << "Congratulations you found a " << acornWon() << " Acorn for your nest. That is one less acorn to find before winter sets in.\n";
	}

	return 0;
}