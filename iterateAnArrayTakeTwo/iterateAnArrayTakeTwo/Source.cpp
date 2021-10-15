#include <iostream>
#include <iterator>

int main() {
	/*
	constexpr int scores[]{ 88, 97, 65, 77, 91, 55 };
	constexpr int numOfStudents{ static_cast<int>(std::size(scores)) };

	int maxScore{ 0 };
	for (int student = 0; student < numOfStudents; ++student) {
		if (scores[student] > maxScore)
			maxScore = scores[student];
	}

	std::cout << "The best score was: " << maxScore << '\n';
	*/

	//Print the following array to the screen using a loop:
	/*
	constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };
	constexpr int numOfNumbers{ static_cast<int>(std::size(array)) };

	for (int print = 0; print < numOfNumbers; ++print) {
		std::cout << array[print] << '\n';
	}
	*/

	/*Ask the user for a number between 1 and 9. If the user does not enter a number between 1 and 9, 
	repeatedly ask for an integer value until they do.Once they have entered a number between 1 and 9, 
	print the array. Then search the array for the value that the user entered and print the index of that element.
	*/
	int main() {
		char getUserInput() {
			while (true)
			{
				std::cout << "Enter a number between 1 and 9\n";;
				int x{};
				std::cin >> x;

				// Check whether the user entered a number between 1 and 9
				switch (x)
				{
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
				case '9':
					return x; // return it to the caller
				default: // otherwise tell the user what went wrong
					std::cout << "Oops, that input is invalid.  Please try again.\n";
				}
			} // and try again
		}
	}
	return 0;
