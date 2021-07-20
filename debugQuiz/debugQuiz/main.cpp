#include <iostream>

//Quiz Question #1
// Errors after line 7 x is not defined also line 19 int x is not assigned anything
//int readNumber(int x)
//{
//	std::cout << "Please enter a number: ";
//	std::cin >> x;
//	return x;
//}
//
//void writeAnswer(int x)
//{
//	std::cout << "The sum is: " << x;
//}
//
//int main()
//{
//	int x{};
//	readNumber(x);
//	x = x + readNumber(x);
//	writeAnswer(x);
//
//	return 0;
//}

//Quiz Question #2
// Errors on line 44 & 45 the second number provided by the user is not recorded the first number provided is assigned to both x & y
//int readNumber()
//{
//	std::cout << "Please enter a number: ";
//	int x{};
//	std::cin >> x;
//	return x;
//}
//
//void writeAnswer(int x)
//{
//	std::cout << "The quotient is: " << x;
//}
//
//int main()
//{
//	int x{ };
//	int y{ };
//	x = readNumber();
//	x = readNumber();
//	writeAnswer(x / y);
//
//	return 0;
//}

//Quiz Question #3
// This one was supposed to display "d b a main" in the call stack but I did not get that...

void d()
{ // here
}

void c()
{
}

void b()
{
	c();
	d();
}

void a()
{
	b();
}

int main()
{
	a();

	return 0;
}