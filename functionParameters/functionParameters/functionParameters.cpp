#include <iostream>

//Quiz 4 & 5
int doubleNumber(int x)
{
    return x + x;
}

int main()
{
    std::cout << "Enter an integer then press any key" << "\n";

    int userNumber{ };

    std::cin >> userNumber;

    std::cout <<  "Your number doubled is " << doubleNumber(userNumber) << "\n";

    return 0;
}

//Having some fun with the second half of the lesson
/*
int add(int x, int y)
{
    return x + y;
}

int multiply(int a, int z)
{
    return a * z;
}

int main()
{
    std::cout << add(4, multiply(9,7)) << '\n';

    std::cout << multiply(add(9,8), multiply(3,7)) << '\n';

    return 0;
}
*/

/*
int getValueFromUser()
{
    std::cout << "Enter an integer please: " << "\n";
    int input{ };
    std::cin >> input;

    return input;
}

void printDouble(int num)
{
    std::cout << num << " doubled is: " << num * 2 << "\n";
}

int main()
{
    int num { getValueFromUser() };

    printDouble(num);

    return 0;
}
*/

//Simplified code from first attempt above. Removed one line in int main()
/*
int getValueFromUser()
{
    std::cout << "Enter an integer please: " << "\n";
    int input{ };
    std::cin >> input;

    return input;
}

void printDouble(int num)
{
    std::cout << num << " doubled is: " << num * 2 << "\n";
}

int main()
{
    printDouble(getValueFromUser());

    return 0;
}
*/
//https://www.learncpp.com/cpp-tutorial/introduction-to-function-parameters-and-arguments/
