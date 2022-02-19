#include <iostream>
#include <string>

int main() {
	std::cout << "Hello World" << ". What is your favorite letter?" << '\n';

	char favLetter{};

	std::cin >> favLetter;

	std::cout << "Your favorite letter is " << favLetter << '\n';

	std::string full_name;
	int age{};

	std::cout << "What is your full name?" << '\n';
	std::getline(std::cin >> std::ws,full_name);

	std::cout << "Hello " << full_name << ", what is your age?" << '\n';
	std::cin >> age;

	std::cout << "Hi " << full_name << " you are " << age << " years old and your favorite letter is " << favLetter << '\n';

	return 0;
}