#include <iostream>

int main() {
	std::string array[5]{"The", "big", "brown"};

	std::cout << array[0] << '\n'; 
	std::cout << array[1] << '\n';
	std::cout << array[2] << '\n';
	std::cout << array[3] << '\n'; //Hmmm... a blank string - interesting

    enum StudentNames
    {
        kenny, // 0
        kyle, // 1
        stan, // 2
        butters, // 3
        cartman, // 4
        max_students // 5
    };
    
    int testScores[max_students]{}; // allocate 5 integers by instantiating array with enum - flipping cool
    testScores[stan] = 76;

    return 0;
}