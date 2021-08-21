#pragma once
#ifndef CONSTANTS_H

#include <string>

namespace constants {
	constexpr double pi{ 3.141592653 };
	constexpr float gravity{ 0.357 };
	constexpr int randomOne[10] = { 1,3,5,7,9,12,13,15,18,23 };
	constexpr char randomTwo[12] = { 2,4,6,8,11,13,17,22,43,1,317,822 };
	std::string hello = "Hello World";
	std::string vowels = "a,e,i,o,u,y";
}

#endif // !CONSTANTS_H
