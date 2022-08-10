// localScopeIntro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void doInt(int x)
{
    int y{ 4 };
    std::cout << "doIt: x = " << x << "y = " << y << '\n'; //x is called here but it has not been instantiated yet...

    x = 3; //My thought is that x is called above before it is defined here
    std::cout << "doIt: x = " << x << "y = " << y << '\n'; //x & y are both called here and are in scope so this line will compile
}

int main()
{
    int x{ 1 };
    int y{ 2 };

    std::cout << "main: x = " << x << " y = " << y << '\n';

    doInt(x);//I was half way there... x is defined as 1 in main so it is called as doInt(1). Once x = 3 is in scope for line 12 the program compiles x with the new definition and overrides main's instantiation of 1

    std::cout << "main: x = " << x << " y = " << y << '\n';

    return 0;
}

//will return: 
/*
main: x = 1 y = 2
doIt: x = 1 y = 4
doIt: x = 3 y = 4
main: x = 1 y = 2
*/