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
	3rd - Remember which acorn has been one and if the selection lands on it again tell user they already have this acorn.
	4th - Could be cool if there was a board displaying R, B, G, Y, P with an X above denoting gotten already...

** Figure out sequence of events
	1 - Enter players name
	2 - Random selection who goes first - player or computer
	3 - Spin chooses color
	4 - Turn moves onto other player who completes step 3.
	5 - Step 4 continues until someone wins

*****************************************/
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <chrono>
#include <thread>

#include "constants.h"

/*Global Variable*/
std::string x{}; //User's name

/*Function that chooses computers name from the computer array defined in constants.h*/
std::string opponent() {
	srand(time(NULL));
	int randomIndex = rand() % 5;

	std::string value = constants::computer[randomIndex];

	return value;
}

/*Global Variable*/
std::string opponent_name = opponent(); //Variable placed here so that chosenPlayer() would work

/*Function that chooses who begins the game - the user or the computer*/
std::string chosenPlayer() {
	srand(time(NULL));
	int randomIndex = rand() % 2;
	if (randomIndex == 1) {
		return x;
	}
	else {
		return opponent_name;
	}

	return chosenPlayer();
}

/*User's acorn won code*/
std::string userAcornWon() {
	srand(time(NULL));
	int randomIndex = rand() % 5;

	std::string acorn = constants::coloredAcorns[randomIndex];

	return acorn;
}

/*Stores the won acorn as a variable to remember throughout the game*/
std::string userAcornRound1 = userAcornWon();

std::string opponentAcornWon() {
	srand(time(NULL));
	int randomIndex = rand() % 5;

	std::string acorn = constants::coloredAcorns[randomIndex];

	return acorn;
}
std::string opponentAcornRound1 = opponentAcornWon();

int main() {
	auto y{0}; //variable y declared and defined with auto since the user could enter anything - it will hold the user's random number choice to initiate their roll.
	int a{}; //variable a declared and not defined. Will hold users position (do they go first in each round or after the opponent?) after random selection
	
	std::cout << "What is your name?\n";
	std::cin >> x;

	std::cout << "Hello " << x << " and welcome to the game " << constants::gameName << " where you try to beat the computer in a random game of chance.\n\nYou are in a race against time to fill your nest with the five colors of acorns before winter comes!\n";
	
	std::this_thread::sleep_for(std::chrono::milliseconds(4500));//Pause console for 4.5 seconds
	
	std::cout << "Your opponent is the computer " << opponent_name << " she is hard to beat.\n";
	std::cout << "Good luck " << x << "!" << '\n';
	
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));//Pause console for 1 second
	
	std::cout << chosenPlayer() << " has been randomly selected to begin the game.\n";
	
	/*Round 1*/

	if (chosenPlayer() == x) 
	{
		std::cout << "Please enter a random number and press enter to see what acorn you will find.\n";
		std::cin >> y;
		std::cout << "Congratulations you found a " << userAcornWon() << " Acorn for your nest. That is one less acorn to find before winter sets in.\n";
		a = 1;
	}
	else 
	{
		std::cout << "It looks like " << opponent_name << " found a " << opponentAcornWon() << " Acorn. It is time for you " << x << " to go look for an acorn.\n";
		
		std::this_thread::sleep_for(std::chrono::milliseconds(1500));//Pause console for 1.5 seconds
		
		std::cout << "Please enter a random number and press enter to see what acorn you will find.\n";
		std::cin >> y;
		std::cout << "Congratulations you found a " << userAcornWon() << " Acorn for your nest. That is one less acorn to find before winter sets in.\n";
		a = 2;
	}

	/* Round 2 */
	std::cout << opponent_name << " found a " << opponentAcornRound1 << " and " << x << " found a " << userAcornRound1 << '\n';

	if (a == 1)
	{
		std::cout << "You went first in Round One. So you will go first in this round. Please enter a random number and press enter to see what acorn you will find.\n";
		std::cin >> x;
		std::cout << "You found a " << userAcornWon() << " Acorn.\n";
		if (userAcornWon() == userAcornRound1) {
			std::cout << "You already found this acorn. You can add it to your nest but you need to find all five colors to win\n";
		}
		else {
			std::cout << "You have not found this acorn yet! That is one less acorn to find before winter sets in.\n";
		}
	}
	else 
	{
		std::cout << "It looks like " << opponent_name << " found a " << opponentAcornWon() << " Acorn.\n"; 
		if (opponentAcornWon() == opponentAcornRound1) {
			std::cout << opponent_name << " has already found this acorn. She added it to her nest but it will not count towards a win.\n";
		}
		else {
			std::cout << opponent_name << " has not found this acorn yet.\n";
		}
		
		std::this_thread::sleep_for(std::chrono::milliseconds(1500));//Pause console for 1.5 seconds

		std::cout << "It is time for " << x << " to go look for an acorn.\n";

		std::cout << "Please enter a random number and press enter to see what acorn you will find.\n";
		std::cin >> y;
		std::cout << "You found a " << userAcornWon() << " Acorn.\n";
		if (userAcornWon() == userAcornRound1) {
			std::cout << "You already found this acorn. You can add it to your nest but you need to find all five colors to win\n";
		}
		else {
			std::cout << "You have not found this acorn yet! That is one less acorn to find before winter sets in.\n";
		}
	}

	/* Round 3 */
	return 0;
}