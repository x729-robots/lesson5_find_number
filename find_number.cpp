#include "game_prepare.h"		
#include "game_ui.h"
#include "game_logic.h"
#include "game_log.h"	
#include <string>

int main(int argc, char** argv)
{

	int maxValue(0);
	if(getMaxValue(argc, const_cast<const char**>(argv), maxValue)){return 1;}
	
	int randomNumber(0);
	if(calcRandomNumber(maxValue, randomNumber)){return 1;}
	
	std::string user;
	user = getUser();
	
	int attemptsN;
	if(superGame(randomNumber, attemptsN)){return 1;}
	
	if(resultToLog(user, attemptsN)){return 1;}
	if(printLog()){return 1;}

	return 0;
}
