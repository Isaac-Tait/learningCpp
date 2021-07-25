#include "math.h"
#include <iostream>

int main()
{
	float seconds{}, decimalTime{};
	int m{ userKmTime() };
	int s{ userKmTime() };

	seconds = (m * 60) + s;

	decimalTime = seconds / 0.621371192 * 60;

	return decimalTime;
}