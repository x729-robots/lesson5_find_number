#include "game_prepare.h"

bool getMaxValue(const int argc, const char** argv, int &maxValue)
{

	// Let's print this argument
	if (argc < 2)
   	{
		maxValue = defMaxValue;
	}
	else
	{
		if (argc >= 2)
   		{

			std::string arg1_value{ argv[1] };
			if (arg1_value == "--parameter") {

				// We've detected the '-parameter' argument. And we extect that after this argument there is a value:
				int parameter_value = 0;
				if (argc < 3) {
					std::cout << "Wrong usage! The argument '--parameter' requires some value!" << std::endl;
					return 1;
				}
				// We need to parse the string to the int value
				parameter_value = std::stoi(argv[2]);
			}
		}
	}

	std::cout << "Max value = " << maxValue << std::endl;
	return 0;
}

bool calcRandomNumber(const int maxValue, int &randomNumber)
{
	if(maxValue < 0)
	{
		return 1;
	}
	else
	{
		std::srand(std::time(nullptr)); // use current time as seed for random generator
		randomNumber = std::rand() % maxValue;
		return 0;
	}
}

std::string getUser()
{
	// Ask about name
	std::cout << "Enter your name, please:" << std::endl;
	std::string user_name;
	std::cin >> user_name; //TODO check user input
	return user_name;
}

