/*
 * CommandLineSwitchView.h is the view class that gets argc, and argv from
 * the CommandLineSwitchController class, generate the boolean flags, messages
 * seconds, and return those back to the CommandlineSwitchController class.
 *
 *  CS232
 *  Date: Feb 27, 2015
 *      Author: Peter Kim
 */

#ifndef COMMANDLINESWITCHVIEW_H_
#define COMMANDLINESWITCHVIEW_H_

#include <string>;
#include <iostream>;
#include <stdlib.h>

using namespace std;

class CommandLineSwitchView {
public:
	CommandLineSwitchView();
	CommandLineSwitchView(int num, char* switches[]);
	virtual ~CommandLineSwitchView();
	bool getInterrupt () {return interrupt;}
	int getSecond () {return second;}
	string getMessage () {return message;}
private:
	bool interrupt;
	int second;
	string message;
};


#endif /* COMMANDLINESWITCHVIEW_H_ */
