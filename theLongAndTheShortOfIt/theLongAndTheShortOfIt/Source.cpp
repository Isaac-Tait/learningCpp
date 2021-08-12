/*******************************************************
Compute the length of a string entered by the user
********************************************************/
#include <iostream>

// the variable length is global and its type is integer, to make it internal we add the keyword static. length is given a function parameter of an unchangable global variable with the type of character defined by an empty array.
static int length( const char string[] ) {
//The variable index is defined here but not initialized
	int index;
//The variable index is initialized (or assigned) here the value of 0. The internal globabl variable's function parameter is defined with the variable index as long as it is NOT EQUAL to 0 then count up one...
	for (index = 0; string[index] != '\0'; index++);
//Return the count...
	return (index);
}

int main() {
//The variable line is defined and assigned a value here. It is also given a type of char, which is only for a single character of text. However, the 100 allocates 100 integer variables to the fixed array. 
//if the user inputs a string longer than 100, it breaks the program.
	char line[100];
//A while loop, so if the function parameter evaluates to true the loop will continue to run. 
	while (1) {
		std::cout << "Enter a string: ";
//The first line prompts the user for an integer. On the second line, getline must be included in <iostream>. Line is set to 100, sizeof must also be in <iostream>...
		std::cin.getline(line, sizeof(line));
//This line returns to the user the global internal variable with the parameter of line, which was initialized on line 19. The initialized value has been replaced with the users string length.
		std::cout << "Length is " << length(line) << '\n';
//The code from the book "How Not To Program in C++" had the return below the second to last } and above the last }. However, this caused the command prompt to run continuously instead of exiting...
		return (0);
	}
}