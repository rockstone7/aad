/*
 * CommandLineSwitchController.h is the class that sends the argc and argv from
 * the main to CommandLineSwitchView class, and get the boolean flags, second,
 * and messages from the CommanLineSwitchView class and send them to Prank class.
 *
 *  CS232
 *  Date: Feb 27, 2015
 *      Author: Peter Kim
 */

#ifndef COMMANDLINESWITCHCONTROLLER_H_
#define COMMANDLINESWITCHCONTROLLER_H_


#include "CommandLineSwitchView.h"
#include "Prank.h"

using namespace std;

class CommandLineSwitchController {
public:
	CommandLineSwitchController();
	CommandLineSwitchController(int num, char* switches[]);
	virtual ~CommandLineSwitchController();
	void run();

private:
	bool interrupt;
	int second;
	string message;

};

#endif /* COMMANDLINESWITCHCONTROLLER_H_ */
