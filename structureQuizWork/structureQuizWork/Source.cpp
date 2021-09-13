/**************************************
You are running a website, and you are trying to keep track of how much money you make per day from advertising. 
Declare an advertising struct that keeps track of how many ads you’ve shown to readers, 
what percentage of ads were clicked on by users, and how much you earned on average from each ad that was clicked. 
Read in values for each of these fields from the user. 
Pass the advertising struct to a function that prints each of the values, and then calculates how much you made for that day.
***************************************/
#include <iostream>

struct Advertising
{
	float adsShown{};
	float adsClicked{};
	float revenueEarned{};

};

void PrintInformation(Advertising business) {
	std::cout << "Your business was promoted in " << business.adsShown << " advertisements today\n";
	std::cout << "Out of those advertisements " << business.adsClicked << " were clicked\n";
	std::cout << "The total revenue you earned was " << business.revenueEarned * ((business.adsShown / 100) * business.adsClicked) << " dollars\n";
};

int main() {
	int x{};
	int y{};
	int z{};

	std::cout << "Enter the numbers advertisements you want to show today\n";
	std::cin >> x;

	std::cout << "Enter the percentage rate of ads shown that were clicked\n";
	std::cin >> y;

	std::cout << "Enter the revenue generated (on average) per click\n";
	std::cin >> z;

	Advertising one{ x,y,z };

	PrintInformation(one);

	return 0;
}