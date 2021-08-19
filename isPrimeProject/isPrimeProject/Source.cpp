#include <iostream>
#include <cassert>

//My attempt
bool isPrime(int x) {

    if (x == 1 || x == 0) {
        return false;
    } 
    else {
        for (int i = 2; i <= x; ++i) { //I got a new error message, which was cool... I was way off though :(
            if (x % 2 == 0) {
                false;
            }
            else {
                true;
            }
        }
    }
}

//Correct solution
bool isPrime(int x)
{
    int divisors{ 1 }; // the number of even divisors we've encountered.  We start at 1 since everything is divisible by 1.
    for (int test{ 2 }; test <= x; ++test) // test every divisor between 2 and x
    {
        if (x % test == 0) // if x is evenly divisible, increment divisors
            ++divisors;
    }

    return (divisors == 2); // if we only encountered 2 divisors (1 and the number itself) then x must be prime
}

int main() 
{
    assert(!isPrime(0));
    assert(!isPrime(1));
    assert(isPrime(2));
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!\n";

    return 0;
}