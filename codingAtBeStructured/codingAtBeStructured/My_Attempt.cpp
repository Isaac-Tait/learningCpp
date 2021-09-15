/***********************
 In designing a game, we decide we want to have monsters, because everyone likes fighting monsters. 
 Declare a struct that represents your monster. The monster should have a type that can be one of the following: 
 an ogre, a dragon, an orc, a giant spider, or a slime. 
 Use an enum class for this.

Each individual monster should also have a name (use a std::string), 
as well as an amount of health that represents how much damage they can take before they die. 
Write a function named printMonster() that prints out all of the struct’s members. 
Instantiate an ogre and a slime, initialize them using an initializer list, and pass them to printMonster().
************************/
#include <iostream>
#include <string>

enum class Monster
{
	Ogre, //assigned value 0, each line increments by 1
	Dragon,
	Orc,
	Giant_Spider,
	Slime,
};

enum class Name
{
	Torg, //assigned value 0, each line increments by 1
	Blarg,
	Beowulf,
	Snarl,
	Blood_Moon,
};

enum class Health
{
	Forty, //assigned value 0, each line increments by 1
	One_hundred_fifty,
	Twenty_three,
	Sixty_nine,
	Eighty_one,
};

std::string printMonster(Monster monster) {

	switch(monster)
	{
	case Monster::Ogre:
		std::cout << "Ogre\n";
		break;
	case Monster::Dragon:
		std::cout << "Dragon\n";
		break;
	case Monster::Orc:
		std::cout << "Orc\n";
		break;
	case Monster::Giant_Spider:
		std::cout << "Giant Spider\n";
		break;
	case Monster::Slime:
		std::cout << "Slime\n";
		break;
	}

	return "Unknown";
}

std::string printName(Name name) {

	switch (name)
	{
	case Name::Torg:
		std::cout << "Torg\n";
		break;
	case Name::Blarg:
		std::cout << "Blarg\n";
		break;
	case Name::Beowulf:
		std::cout << "Beowulf\n";
		break;
	case Name::Snarl:
		std::cout << "Snarl\n";
		break;
	case Name::Blood_Moon:
		std::cout << "Blood Moon\n";
		break;
	}

	return "Unknown";
}

std::string printHealth(Health health) {

	switch (health)
	{
	case Health::Eighty_one:
		std::cout << "81\n";
		break;
	case Health::Forty:
		std::cout << "40\n";
		break;
	case Health::One_hundred_fifty:
		std::cout << "150\n";
		break;
	case Health::Sixty_nine:
		std::cout << "69\n";
		break;
	case Health::Twenty_three:
		std::cout << "23\n";
		break;
	}

	return "Unknown";
}

int main() {

	Monster monster{ Monster::Ogre };
	Health health{ Health::One_hundred_fifty };
	Name name{ Name::Beowulf };

	std::cout << "Your monster is " << printMonster(monster) << ". Its health is " << printHealth(health) << ". Its name is " << printName(name) << '\n';
}