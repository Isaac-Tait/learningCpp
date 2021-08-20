#pragma once
#ifndef CONSTANTS_H

#include <string>

namespace constants {
	constexpr double pi{ 3.141592653 };
	constexpr float gravity{ 0.357 };
	constexpr int randomOne[8] = { 1,3,5,7,9,12,15,18 };
	constexpr char randomTwo[10] = { 2,4,6,8,11,13,17,22,43,1 };
	std::string hello = "Hello World";
	std::string vowels = "a,e,i,o,u,y";
}

#endif // !CONSTANTS_H
