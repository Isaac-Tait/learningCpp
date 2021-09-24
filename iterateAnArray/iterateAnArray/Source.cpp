#include <iostream>

int main() {
	constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };

	int x{};
	std::cout << "Enter a number between 1 and 9\n";
	std::cin >> x;

	if (x <= 9 && x > 0) {
		for (int count{ 0 }; count < static_cast<int>(std::size(array)); count++)
		{
			std::cout << array[count] << '\n';
		}
	}
	else {
		int x{};
		std::cout << "Enter a number between 1 and 9\n";
		std::cin >> x;
	}
}