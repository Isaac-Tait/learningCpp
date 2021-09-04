#include <iostream>

template <typename I>
I max(I x, I y, I z)
{
	return (x + z) / y;
}

template <typename I>
int min(I x, I y, I z)
{
	return (x + z) / y;
}

template <typename I, typename S, typename A>
auto doge(I x, S y, A z) //return type set as 'auto' to prevent narrowing conversion (double to int == data loss)
{
	return (x + z) / y;
}

template <typename C, typename M>
auto sub(C x, M y)
{
	return(x - y);
}


int main() {
	
	//Function template with template parameters
	std::cout << max(3.3, 99.7, 103.0) << '\n';
	std::cout << max(3, 99, 102) << '\n';
	std::cout << max('♥', 'c', 'f') << " a.k.a. 1" << '\n';

	//Function template with non-template parameters
	std::cout << min(3.3, 99.7, 103.0) << '\n';
	std::cout << min(3, 99, 102) << '\n';
	std::cout << min('♥', 'c', 'f') << '\n';

	//Function template with multiple template type parameters 
	std::cout << doge(3, 2.5, 6.0f) << '\n';

	//Quiz 5c Chapter 8 Summary
	std::cout << sub(3, 2) << '\n';
	std::cout << sub(3.5, 2) << '\n';
	std::cout << sub(4, 1.5) << '\n';

	return 0;
}