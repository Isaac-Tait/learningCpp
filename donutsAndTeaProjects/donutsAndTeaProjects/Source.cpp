#include <iostream>
#include <string>

int main() {
	std::string str{ "The rice is cooking" };

	str.erase(4, 11); //starting from position 4 (counting starts at 0) remove 11 elements

	std::cout << str << '\n';

	std::string strTwo{ "I saw a red car yesterday." };

	strTwo.replace(8, 3, "blue");

	std::cout << strTwo << '\n';

	return 0;
}