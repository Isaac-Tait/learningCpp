#include "math.h"
#include <iostream>

int main()
{
	int m{ userKmTime() };
	int s{ userKmTime() };

	userKmSeconds((m * 60) + s);
	return 0;
}