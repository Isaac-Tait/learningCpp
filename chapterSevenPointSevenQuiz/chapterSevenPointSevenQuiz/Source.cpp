#include <iostream>

// Loop between 5 and 1
int main()
{
    std::cout << "Reverse nested loop below\n";
    /*
    Reverse nested loop - Question #4
    */
    int upper{5};
    while (upper <= 5) {
        int lower{ upper };
        while (lower >= 1) {
            std::cout << lower++ << ' ';
        }
        std::cout << '\n';
        ++upper;
    }

    std::cout << "Inverted loop below\n";
    /*
    Inverted nested loop - Question #3
    */
    int outer{ 5 };
    while (outer >= 1)
    {
        // loop between 1 and outer
        int inner{ outer };
        while (inner >= 1)
        {
            std::cout << inner-- << ' ';
        }

        // print a newline at the end of each row
        std::cout << '\n';
        --outer;
    }

    return 0;
}