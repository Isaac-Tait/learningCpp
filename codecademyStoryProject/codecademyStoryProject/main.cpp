#include <iostream>
#include <string>
#include <chrono>
#include <thread>

#include "constants.h"

int main() {
	//Decision point one - which planet to land on.
	int x = {};
	//Story fork point one - which planet was selected?
	int y = {};
	//Decision point two - each planet has two options upon selection int a records the users decision
	int a = {};

	int z = {};

	std::cout << "Excuse me pilot this is the fligh computer of the USS Starship Polkadot. I am prematuraly awakening you from cryosleep.\nYour destination was Alpha Centauri. However, there was an issue with our telemetry.\nI had no choice but to drop off of the light sail or risk the ship imploding.\n";
	std::cout << "After dumping the light sail I can detect three nearbyt planets. As of right now the only thing that I know is their names.\n\n";

	std::cout << "They are planets Vanessa, Lyra, and Xing. Which one will you choose to land on? Regretably, we do not have much fuel left so we cannot stay in space.\n";
	std::cout << "Planet Vanessa = 1   Planet Lyra = 2    Planet Xing = 3\n";
	std::cin >> x;

	if (x == 1) {
		std::cout << "Good choice " << constants::planetOne << " looks hospitable. Let us go down and see if it is in fact hospitable.\n";
		y = 1;
	}
	else if (x == 2) {
		std::cout << "Really?! You chose " << constants::planetTwo << ". Let us hope that the flaming gas explosions shooting into the upper atmosphere will not destroy our ship....\n";
		y = 2;
	}
	else if (x == 3) {
		std::cout << constants::planetThree << " looks fairly promising. Honestly if it were up to me, your fligh computer, I would have chosen " << constants::planetOne << " but since you are the pilot... Off we go in...\n";
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

	if (y == 1) {
		std::cout << "The atmosphere of " << constants::planetOne << " is much thinner than I anticpated. Entry was smooth, however we overshot my intended landing zone. I see two possibilities." << '\n';
		std::cout << "One we land on a watery substance that looks like the ocean with a thin fog veneer...\n";
		std::cout << "Or we land in a primevial looking forest with lots of tall rock formations dripping with waterfalls...\n";
		std::cout << "What is your choice? 1 = Ocean   2 = Forest\n";

		std::cin >> a;

		if (a == 1) {
			std::cout << "What?! Seriously, you want to land in the ocean? You are crazy... but it is your funeral I guess... Wait it is mine too. Argh why did the engineers who designed me not give me the freedom to override a human's dumb decisions!?\n";
			z = 1;
		} else if (a == 2) {
			std::cout << "Okay, the forest is the best choice out of the two possibilities. It is too bad we overshot my intended landing zone though - it looked like a space port where we could refeul... Alas\n";
			z = 2;
		}
		else {
			std::cout << "You should never read this because it is the flight computers personal journal recording all the dumb decisions my pilots have made over the years.... Initiating self destruct. Goodbye forever.\n";
		}
	}
	else if (y == 2) {
		std::cout << "Warning warning warning! The atmospher of " << constants::planetTwo << " was too dense and I could not detect the asteroid belt. We have sustained severe damage." << '\n';
		std::cout << "I do not know if we can land... What do you want to do?" << "\n";
		std::cout << "Bail out of the shuttle with your escape pod or ride the flaming wreckage to the planets surface?\n";
		std::cout << "What is your choice? 1 = Bail    2 = Stay in the shuttle\n";

		std::cin >> a;

		if (a == 1) {
			std::cout << "While I understand your logic I regret that you have chosen to leave me behind after all we have been through... Arming the escape pod now!" << "\n";
			z = 3;
		}
		else if (a == 2) {
			std::cout << "Thank you for not abandoning me in my darkest hour. I think I can still land this flaming hulk on that giant mushroom below us. It appears to be soft and squishy.\n";
			z = 4;
		}
		else {
			std::cout << "You should never read this because it is the flight computers personal journal recording all the dumb decisions my pilots have made over the years.... Initiating self destruct. Goodbye forever.\n";
		}
	}
	else if (y == 3) {
		std::cout << "Ummm I do not know how to tell you this but it would appear that " << constants::planetThree << " is inhabited by some sort of alien race. We are being approached by an unknown space craft." << '\n';
		std::cout << "Our weapon systems are fully functional and armed or we could just hope for the best...\n";
		std::cout << "What is your choice? 1 = Shoot down the space craft    2 = Hold on and hope for the best...\n";

		std::cin >> a;

		if (a == 1) {
			std::cout << "Good choice! As my pappy used to say 'Shoot first, ask questions later' (he was a salty Marine, what can I say?).\n";
			z = 5;
		}
		else if (a == 2) {
			std::cout << "Sometimes you just need to kick a little butt. However, since you obviously do not agree I regret to inform you that they have locked on to our ship with their tractor beam. I wish I could tell you I told you so but we do not have that much time...\n";
			z = 6;
		}
		else {
			std::cout << "You should never read this because it is the flight computers personal journal recording all the dumb decisions my pilots have made over the years.... Initiating self destruct. Goodbye forever.\n";
		}
	}
	else {
		std::cout << "You should never read this unless there is a problem with the code...\n";
	}
	std::this_thread::sleep_for(std::chrono::milliseconds(3000));
}