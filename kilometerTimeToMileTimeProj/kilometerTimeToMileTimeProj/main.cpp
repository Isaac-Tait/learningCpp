#include "math.h"
#include <iostream>

int main()
{
	float seconds{}, decimalTime{};

	int m{ userKmTime() };
	int s{ userKmTime() };

	seconds = (m * 60) + s;

	decimalTime = seconds / 0.621371192 / 60;

	//Breaks the decimal time into an integer and a fractional part, which will allow the program to return the mile time in 8m30s instead of 8.5m (for example)
	//std::modf(decimalTime);

	std::cout << "If your speed remained the same, your 1km split of " << m << " minutes " << s << " seconds" << ", would be a 1 mile split of " << decimalTime << '\n';

	return decimalTime;
}