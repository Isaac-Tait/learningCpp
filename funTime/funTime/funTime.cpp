// funTime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Chapter 2 lesson 2

int firstNumber() 
{
    std::cout << "Enter a number..." << "\n";

    int numOne{ };

    std::cin >> numOne;

    return numOne;
}

int secondNumber() 
{
    std::cout << "Now enter another number..." << "\n";

    int numTwo{ };

    std::cin >> numTwo;

    return numTwo;
}

int main()
{
    int mainNumberOne{ firstNumber() };

    int mainNumberTwo{ secondNumber() };

    std::cout << mainNumberOne << " + " << mainNumberTwo << " is equal to " << mainNumberOne + mainNumberTwo << "\n";

    std::cout << mainNumberOne << " - " << mainNumberTwo << " is equal to " << mainNumberOne - mainNumberTwo << "\n";

    //Chapter 1 lesson 11
/*
    std::cout << "Enter an integer. Than press enter.\n";
    
    int num{};

    std::cin >> num;

    std::cout << "Double that number is: " << num * 2 << "\n";

    std::cout << "Triple that number is: " << num * 3 << "\n";

    std::cout << "But you are a chosen people, a royal priesthood, a holy nation, God’s special possession, that you may declare the praises of him who called you out of darkness into his wonderful light 1 Peter 2:9" << "\n";
*/

    // Chapter 1 Quiz
/*
    std::cout << "Enter a number..." << "\n";

    int numOne{ };

    std::cin >> numOne;

    std::cout << "Now enter another number..." << "\n";

    int numTwo{ };

    std::cin >> numTwo;

    std::cout << numOne << " + " << numTwo << " is equal to " << numOne + numTwo << "\n";

    std::cout << numOne << " - " << numTwo << " is equal to " << numOne - numTwo << "\n";
*/ 

    return 0;
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
