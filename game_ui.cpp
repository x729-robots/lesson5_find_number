#include "game_ui.h"
#include <iostream>
void MessageTooBig(int current_value )
{
	std::cout << "less than " << current_value << std::endl;
	return;
}

void MessageTooLittle(int current_value )
{
	std::cout << "greater than " << current_value << std::endl;
	return;
}

void MessageVictory(int attemptsN)
{
	std::cout << "you win! " << "attempts = "<< attemptsN << std::endl;
	return;
}
