/*
 * CommandLineSwitchController.cpp is the .cpp file of the CommandLineSwitchController.h
 *
 *  CS232
 *  Date: Feb 27, 2015
 *      Author: Peter Kim
 */

#include "CommandLineSwitchController.h"

CommandLineSwitchController::CommandLineSwitchController(int num, char* switches[]){
	CommandLineSwitchView cv(num, switches);
	interrupt = cv.getInterrupt();
	second = cv.getSecond();
	message = cv.getMessage();
}


CommandLineSwitchController::~CommandLineSwitchController() {
	// TODO Auto-generated destructor stub
}
