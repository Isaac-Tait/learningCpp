// forwardDeclarations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int add(int x, int y); //Forward declared the add function
                        
int subtract(int a, int); //Forward declared the subtract function

int capture(int e, int x)
{
    std::cout << "Hello. Please enter a number between 1 - 99999" << '\n';
    
    int e{ };

    std::cin >> e;

    std::cout << "Hello. Please enter another number between 1 - 99999" << '\n';

    int x{ };

    std::cin >> x;
}

int main()
{
    int capture(int e, int b); //I want the function "capture" to populate the numbers for the "add" and "subtract functions"... I need those numbers to be saved... How do I do that?

    return 0;
}

int add(int x, int y) //implements the add function
{
    return x + y;
}

int subtract(int a, int b) //implements the subtract function
{
    return a - b;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
