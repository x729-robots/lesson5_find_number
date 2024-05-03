#pragma once
#include <string>
#include <fstream>
#include <iostream>

const std::string logFName = "find_number.log";

bool resultToLog(const std::string user, const int attemptsN);
bool printLog   ();

