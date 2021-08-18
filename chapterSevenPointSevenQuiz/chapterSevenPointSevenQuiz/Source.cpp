#include <iostream>

// Loop between 5 and 1
int main()
{
    std::cout << "Print letters A - Z w/ ASCII codes\n";
    /*
    Print letters - Question #2
    */
    char alphabet{ 'a' };
    while (alphabet <= 'z') {
        if (static_cast<int>(alphabet) % 5 == 0) {
            std::cout << alphabet << "-" << static_cast<int>(alphabet) << '\n';
            alphabet++;
        } 
        else {
            std::cout << alphabet << "-" << static_cast<int>(alphabet) << ' ';
            ++alphabet;
        }
        
    }

    std::cout << '\n' << "Reverse nested loop below\n";
    /*
    Reverse nested loop - Question #4
    */
    int upper{ 1 };
    while (upper <= 5) {
        int lower{ 5 };
        
        while (lower >= 1) {
            if (lower <= upper)
                std::cout << lower << ' ';
            else
                std::cout << "  "; // extra spaces purely for formatting purpose

            --lower;
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