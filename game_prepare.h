#pragma once
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game_log.h"

const int defMaxValue = 10;

bool getMaxValue(const int argc, const char** argv, int &maxValue);

bool calcRandomNumber(const int maxValue, int &randomNumber);

std::string getUser();
	
