#include "math.h"
#include <iostream>

int main()
{
	float seconds{}, decimalTime{};

	int m{ userKmTime() };
	int s{ userKmTime() };

	seconds = (m * 60) + s;

	decimalTime = seconds / 0.621371192 / 60;

	//std::modf();

	std::cout << "If your speed remained the same, your 1km split of " << m << " minutes " << s << " seconds" << ", would be a 1 mile split of " << decimalTime << '\n';

	return decimalTime;
}