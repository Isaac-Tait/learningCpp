#include <iostream>
#include <vector>

int main() {

	std::vector<int> x{8,17,23,38};

	std::cout << "The number at position 1 is: " << x.at(0) << '\n'; // Returns 8

	x.at(0) = 9;
	std::cout << "The number at position 1 has been updated to: " << x.at(0) << '\n'; // Returns 9
	
	x.push_back(15);
	std::cout << "The number " << x.at(4) << " has been added to the end of the vector." << '\n'; // Returns 15

	std::cout << "The length of the vector is: " << x.size() << '\n';
	
	x.resize(6);

	std::cout << "The length of the vector has been updated. It is now: " << x.size() << '\n';
	for (int i : x)
		std::cout << i << ' ';

	return 0;
}