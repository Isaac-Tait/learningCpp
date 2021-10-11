#pragma once
#ifndef CONSTANTS_H

#include <string>

namespace constants {

	std::string computer[5] = { "Duotronics", "Hal", "Shirka", "Skynet", "Icarus"};

	std::string coloredAcorns[5] = { "Purple", "Blue", "Yellow", "Green", "Red" };
	//enum Colored_Acorns { Purple, Blue, Yellow, Green, Red };
	//Daniel suggested saving the above as an enum. However, if I do that then I am not sure how to get the random selection
	//to work. So, I am reverting back to arrays for now...

	std::string gameName = "Sneaky Snacky Squirrel";
}

#endif // !CONSTANTS_H
