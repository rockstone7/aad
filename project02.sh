#!/bin/sh
#
#project02.sh is a simple shell program that automates the process of checking if the computers on the
#computers.txt list are avaliable. Furthermore it checks whether they are booted in linux, windows, or
#shut down.
#
#Date: March 10, 2015
#Author: Peter Kim, yk43
#For CS 232
####################################################################################

echo These are the computers that are avaliable, shut down, or on windows
#this loop reads each of the computer names and store them in LINE
while read LINE
do	
	#This assigns the result, number of users, of each computer first doing ssh on
	#each computers. Then it uses users| wc -w to see if there are any users using the computer
	Users=$(ssh -n -o StrictHostKeyChecking=no -l yk43 $LINE 2>error.txt 'users| wc -w')
	#This is a if statement checking whether an error has occurred while trying ssh
	if [ $? -ne 0 ]	
	then 
		#if an error did occure. Then it redirects the error message to error.txt and 
		#check if the word route is in the file.
		#And if it is, then it indicates that the machine is shut down.
		if grep -q "route" "error.txt" 
		then
			echo $LINE: is shut down
		elif grep -q "refused" "error.txt"
		then 
			echo $LINE: is in Windows
		fi
	#if there was no error while ssh into different machines, and check if there are any users
	#working on the computer, and if there is no one using the machine, indicate that this machine
	#is in Linux. Else, does not echo anything.
	elif [ $Users -lt 1 ] 
	then
		echo $LINE: is in Linux and unoccupied
	else
		echo $LINE: is in Linux and occupied
	fi
done < "computers.txt"
#clean-up itself after the program is finished doing its job
rm "error.txt"
