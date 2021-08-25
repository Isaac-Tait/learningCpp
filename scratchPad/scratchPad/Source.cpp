#include <iostream>

int main() {
	char ch = 'A';

	std::cout << ch << static_cast<char>(ch + 1) << static_cast<char>(ch + 2) << '\n';

	return 0;
}