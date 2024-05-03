#include "game_log.h"

bool resultToLog(const std::string logFName,const std::string user, const int attemptsN)
{
	// Write new high score to the records table
	{
		// We should open the output file in the append mode - we don't want
		// to erase previous results.
		std::ofstream out_file{logFName, std::ios_base::app};
		if (!out_file.is_open()) {
			std::cout << "Failed to open file for write: " <<logFName << "!" << std::endl;
			return 1;
		}

		// Append new results to the table:
		out_file << user << ' ';
		out_file << attemptsN;
		out_file << std::endl;
	} // end of score here just to mark end of the logic block of code


	return 0;
}
bool printLog   (const std::string logFName)
{
		std::ifstream in_file{logFName};
		if (!in_file.is_open()) {
			std::cout << "Failed to open file for read: " <<logFName << "!" << std::endl;
			return 1;
		}

		std::cout << "Player results  table:" << std::endl;

		std::string username;
		int high_score = 0;
		while (true) {
			// Read the username first
			in_file >> username;
			// Read the high score next
			in_file >> high_score;
			// Ignore the end of line symbol
			in_file.ignore();

			if (in_file.fail()) {
				break;
			}

			// Print the information to the screen
			std::cout << username << '\t' << high_score << std::endl;
		}
	
	return 0;
}

