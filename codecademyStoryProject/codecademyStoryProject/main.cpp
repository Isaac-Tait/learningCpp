#include <iostream>
#include <string>

int main() {

	std::string planetOne = "Planet Vanessa", planetTwo = "Planet Lyra", planetThree = "Planet Xing";
	int x = {};

	std::cout << "You are the pilot of USS Starship Polkadot. Your destination was Alpha Centauri. However, there was an issue with your flight computer and you had to drop off of the light sail or risk the ship imploding.\n";
	std::cout << "After dumping the light sail you can see that your ship is close to three planets. The only thing that is known is their names.\n";

	std::cout << "They are planets Vanessa, Lyra, and Xing. Which one will you choose?\n";
	std::cout << "Planet Vanessa = 1   Planet Lyra = 2    Planet Xing = 3\n";
	std::cin >> x;

	if (x == 1) {
		std::cout << "Good choice " << planetOne << " looks hospitable. Let us go down and see if it is in fact hospitable.\n";
	}
	else if (x == 2) {
		std::cout << "Really?! You chose " << planetTwo << ". Let us hope that the flaming gas explosions shooting into the upper atmosphere will not destroy our ship....\n";
	}
	else if (x == 3) {
		std::cout << planetThree << " looks fairly promising. Honestly if it were up to me, your fligh computer, I would have chosen " << planetOne << " but since you are the pilot... Off we go in...\n";
		for (int i = 10; i > 0; i--) {
			std::cout << i << '\n';
		}
	}
	else {
		std::cout << "You did not choose 1, 2, or 3. Because of your stupidity you and your whole crew contracts space lice and they drive you all slowly into madness over many months before your oxygen runs out....";
		return false;
	}
}