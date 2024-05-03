#include "game_prepare.h"		
#include "game_ui.h"
#include "game_logic.h"
#include "game_log.h"	
#include <string>

int main(int argc, char** argv)
{

	int maxValue(0);
	if(readArgs(int argc, char** argv, int &maxValue)){return 1;}
	
	int randomNumber(0);
	if(calcRandomNumber(int maxValue,int &randomNumber)){return 1;}
	
	std::string user;
	user = getUser();
	
	int attemptsN;
	if(superGame(randomNumbe, int &attemptsN)){return 1};
	
	const std::string logFName("find_number.log");
	if(resultToLog(logFName,user, attemptsN)){return 1;}
	if(printLog(logFName)){return 1};

	return 0;
}
