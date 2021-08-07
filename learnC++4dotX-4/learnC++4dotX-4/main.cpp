/*
Write a short program to simulate a ball being dropped off of a tower. To start, the user should be asked for the height of the tower in meters. 
Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start). 
Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. 
The ball should not go underneath the ground (height 0).

Use a function to calculate the height of the ball after x seconds. 
The function can calculate how far the ball has fallen after x seconds using the following formula: distance fallen = gravity_constant * x_seconds2 / 2
*/

#include <iostream>;
#include <string>;

int main() {

	int x{};
	constexpr double gravity{ 9.8 };
	double seconds{ 0.0 };
	double distanceFallen{ (gravity * (seconds * seconds)) / 2.0 };

	std::cout << "Please enter the height of the tower in meters: " << x << '\n';
	std::cin >> x;

	while (seconds <= 5) {
		if (distanceFallen - x > 0.0) {
			std::cout << "At " << seconds << " seconds, the ball is at height: " << distanceFallen - x << '\n';
			++seconds;
		}
		else {
			std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
		}
	}

	return 0;
}