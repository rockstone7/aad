/*
 * MenuController.cpp .cpp file of MenuController.h
 *  CS232
 *  Date: Feb 27, 2015
 *      Author: Peter Kim
 */

#include "MenuController.h"

// default constructor of MenuController
MenuController::MenuController() {
	// TODO Auto-generated constructor stub
	msg = false;
	interrupt = false;
	second = 5;
}

/**
 * run() method creates a Interface and gets the input from user
 */
void MenuController::run() {
	MenuInterface mi;
	mi.run();
	message = mi.getMessage();
	second = mi.getSecond();
	interrupt = mi.getInterrupt();
}

MenuController::~MenuController() {

}
