#include "math.h"
#include <iostream>
//For the delay timer 
#include <chrono>
#include <thread>

int main()
{
	//Define users time in the various mathmatical formats needed to convert km time to mile time
	float seconds{}, decimalTime{};

	//userKmTime forward declared from math.cpp
	int m{ userKmTime() };
	int s{ userKmTime() };

	seconds = (m * 60) + s;

	decimalTime = seconds / 0.621371192 / 60;

	std::cout << "Computing...\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));

	//Define the integral and fractional portions of decimal time
	double intPart, fractPart;

	//Breaks the decimal time into an integer and a fractional part, which will allow the program to 
	//return the mile time in 8m30s instead of 8.5m (for example)
	fractPart = std::modf(decimalTime, &intPart);

	//Returns the users time that they entered as a kilometer (km) split and returns the mile split time
	std::cout << "If your speed remained the same, your 1km split of " << m << " minutes " << s << " seconds" << ", would be a 1 mile split of " << intPart << " minutes " << (fractPart * 60) << " seconds!" << '\n';

	return 0;
}