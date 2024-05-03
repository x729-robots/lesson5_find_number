#include "game_logic.h"
#include "game_ui.h"

bool superGame(const int randomNumber, int &attemptsN)
{

	int current_value (0);
	bool not_win = true;
	attemptsN = 0;

	std::cout << "Enter your guess:" << std::endl;

	do {
		attemptsN++;
		std::cin >> current_value; //TODO filter user input

		if (current_value < randomNumber) {
			MessageTooLittle(current_value );
		}
		else if (current_value > randomNumber) {
			MessageTooBig(current_value );
		}
		else {
			MessageVictory();
			break;
		}

	} while(true);

	return 0;

}
