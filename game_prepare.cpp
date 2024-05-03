#include "game_prepare.h"
//TODO add doxygen comments style
//TODO try autoformat tools
bool getMaxValue(const int argc, const char** argv, int &maxValue)
{
	const std::string helpMessage = "Start program with --help parametr for more information";
	// Let's print this argument
	if (argc < 2)
   	{
		maxValue = defMaxValue;
	}
	else
	{

				std::string arg1_value{ argv[1] };
				if (arg1_value == "--max_number") 
				{
					// We've detected the '-parameter' argument. And we extect that after this argument there is a value:
					// We need to parse the string to the int value
					if (argc < 3) 
					{
						std::cout << "Wrong arguments number! " << helpMessage << std::endl;
						return 1;
					}
					else
					{
						maxValue = std::stoi(argv[2]);
						if (maxValue < 0)
						{
							std::cout << "Number can't be negative" << std::endl;
							return 1;
						}
					}
				}
				else if (arg1_value == "--help") 
				{
					std::cout<< "suported arguments:" << std::endl
						<< "--help" << std::endl
						<< "--max_number NUMBER" << std::endl;
					return 1;
				}
				else
				{
					std::cout << "Wrong parametr name. "<< helpMessage << std::endl;
					return 1;
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
		randomNumber = std::rand() % (maxValue+1);
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

