#include <iostream>
#include <string>
#include <chrono>
#include <thread>

int main() {

	std::string planetOne = "Planet Vanessa", planetTwo = "Planet Lyra", planetThree = "Planet Xing";
	int x = {};
	int y = {};

	std::cout << "You are the pilot of USS Starship Polkadot. Your destination was Alpha Centauri. However, there was an issue with your flight computer and you had to drop off of the light sail or risk the ship imploding.\n";
	std::cout << "After dumping the light sail you can see that your ship is close to three planets. The only thing that is known is their names.\n";

	std::cout << "They are planets Vanessa, Lyra, and Xing. Which one will you choose?\n";
	std::cout << "Planet Vanessa = 1   Planet Lyra = 2    Planet Xing = 3\n";
	std::cin >> x;

	if (x == 1) {
		std::cout << "Good choice " << planetOne << " looks hospitable. Let us go down and see if it is in fact hospitable.\n";
		y = 1;
	}
	else if (x == 2) {
		std::cout << "Really?! You chose " << planetTwo << ". Let us hope that the flaming gas explosions shooting into the upper atmosphere will not destroy our ship....\n";
		y = 2;
	}
	else if (x == 3) {
		std::cout << planetThree << " looks fairly promising. Honestly if it were up to me, your fligh computer, I would have chosen " << planetOne << " but since you are the pilot... Off we go in...\n";
		y = 3;
	}
	else {
		std::cout << "You did not choose 1, 2, or 3. Because of your stupidity - you and your whole crew contracts space lice and they drive you all slowly into madness over many months before your oxygen runs out....";
		return false;
	}

	std::this_thread::sleep_for(std::chrono::milliseconds(3000));

	std::cout << "Counting down to atmosphere entry in " << "10\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	std::cout << "Counting down to atmosphere entry in " << "9\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	std::cout << "Counting down to atmosphere entry in " << "8\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	std::cout << "Counting down to atmosphere entry in " << "7\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	std::cout << "Ahh screw it " << "0!!\n";

	if (y = 1) {

	}

}