#include <iostream>

int main() {
    enum class Color //Adding class clears error message 
    {
        color_black, // assigned 0
        color_red = -5, // assigned -5
        color_blue, // assigned -4
        color_green = 33, // assigned 33
        color_white, // assigned 34
        color_cyan = 9, // assigned 9
        color_yellow, // assigned 10
        color_magenta // assigned 11
    };

    Color paint{Color::color_green};
    Color randomNumber{Color::color_white};

    /*********************
    With enum classes, the compiler will no longer implicitly convert enumerator values to integers. 
    This is mostly a good thing. However, there are occasionally cases where it is useful to be able to do so. 
    In these cases, you can explicitly convert an enum class enumerator to an integer by using a static_cast to int:
    **********************/

    std::cout << static_cast<int>(paint) << '\n'; //Will print 33
    std::cout << static_cast<int>(randomNumber) << '\n'; //Will print 34

    return 0;
}