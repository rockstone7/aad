/*
 * CommandLineSwitchView.cpp is the cpp file of the CommandLineSwitchView.h
 *
 *  CS232
 *  Date: Feb 27, 2015
 *      Author: Peter Kim
 */

#include "CommandLineSwitchView.h"

/**
 * Explicit constructor that gets its num and switches from the
 * CommandLineSwitchController and sends back the boolean flags, second,
 * and messages.
 */
CommandLineSwitchView::CommandLineSwitchView(int num, char* switches[]){
	interrupt = false;
	second = 5;
	message = "Annoying~~~~~~~~~~~~~~~~~!!!";
	for( unsigned i = 1; i < num; i++){
		if (string(switches[i]) == "-i"){
			interrupt = false;
		} else if(string(switches[i]) == "+i"){
			interrupt = true;
		} else if(string(switches[i]) == "+t"){
			if(i+1 == num){
				cout << "Error! Invalid time input!\nExiting the Program." << endl;
			}
			second = atoi(switches[i+1]);
			if(second == 0){
				cout << "Error! Invalid time input!\nExiting the Program." << endl;
				exit (0);
			}
			i++;
		} else if(string(switches[i]) == "-m"){
			if(i+1 == num){
				cout << "Error! Invalid input!\n Exiting the Program." << endl;
			}
			message = switches[i+1];
			i++;
		} else {
			cout << "Error! You have typed wrong command. Exiting the program." << endl;
			exit (0);
		}
	}
}

CommandLineSwitchView::~CommandLineSwitchView(){

}

