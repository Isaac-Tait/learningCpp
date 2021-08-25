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
#include "constants.h"


int main() {
	std::string x{};

	std::cout << "What is your name?\n";
	std::cin >> x;

	std::cout << "Hello " << x << " and welcome to the game " << constants::gameName << " where you try to beat the computer in a random game of chance.\n\nYou are in a race against time to fill your nest with the five colors of acorns before winter comes!\n";
	
	srand(time(NULL));
	int randomIndex = rand() % 5;

	std::cout << "Your opponent is the computer " << constants::computer[randomIndex] << " she is hard to beat.\n";
	std::cout << "Good luck " << x << "!" << '\n';


	return 0;
}