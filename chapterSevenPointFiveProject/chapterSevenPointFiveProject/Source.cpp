/**************************************************************
* Write a function called calculate() that takes two integers and 
a char representing one of the following mathematical operations: 
+, -, *, /, or % (modulus). Use a switch statement to perform the 
appropriate mathematical operation on the integers, and return the result. 
If an invalid operator is passed into the function, the function should print an error. 

For the division operator, do an integer division. 
***************************************************************/

#include <iostream>

int main() {
	float x{};
	float y{};
	char operate {};

	std::cout << "Enter a number please\n";
	std::cin >> x;

	std::cout << "Enter another number if you would not mind\n";
	std::cin >> y;

	std::cout << "Now choose one (1) mathematical operator (e.g. *, +, -, or /)\n";
	std::cin >> operate;

	switch (operate) {
	case '*':
		std::cout << "x multiplied by y is equal to: " << x * y << '\n';
		break;

	case '+':
		std::cout << "x added to y is equal to: " << x + y << '\n';
		break;

	case '-':
		std::cout << "x subtracted from y is equal to: " << x - y << '\n';
		break;

	case '/':
		std::cout << "x divided by y is equal to: " << x / y << '\n';
		break;

	default:
		std::cout << "Error!\n";
	}
	return 0;
}

//Instructors solution
#include <iostream>

int calculate(int x, int y, char op)
{
    switch (op)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    case '%':
        return x % y;
    default:
        std::cout << "calculate(): Unhandled case\n";
        return 0;
    }
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << "Enter a mathematical operator (+, -, *, /, or %): ";
    char op{};
    std::cin >> op;

    std::cout << x << ' ' << op << ' ' << y << " is " << calculate(x, y, op) << '\n';

    return 0;
}