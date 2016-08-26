#include "StdAfx.h"
#include "ScreenPrint.h"
#include <iostream>
#include <iomanip>
using namespace std;

ScreenPrint::ScreenPrint(void)
{
}

ScreenPrint::~ScreenPrint(void)
{
}

int ScreenPrint::HelloWorld()
{
	cout << "Hello World!" << endl;
	return 0;
}

// we need the following include for setw() in some c++ implementations
int ScreenPrint::FormatOutPut(int Raw,int Col)
{
	// the first for-loop will handle the rows
	for (int i = 0; i < Raw; i++) {
		// the second for loop will handle the columns
		for (int j = 0;  j < Col ; j++)
			// setw(int) sets the column width
			cout << setw(17) << "Hello World!";
		// this  next line is a part of the first for loop
		// and causes the new line
		cout << endl;
	}
	return 0;
}

int ScreenPrint::Format2OutPut(int Raw,int Col)
{
	// set up cout to right-align ¶ÔÓÒ¿¿Æë
	cout <<  setiosflags(ios::left);
	// the first for loop will handle the rows
	for (int i = 0; i < Raw; i++) {
		// the second for loop will handle the columns
		for (int j = 0;  j < Col ; j++)
			// setw(int) sets the column width
			cout << setw(17) << "Hello World!";
		// this  next line is a part of the first for loop
		// and causes the new line
		cout << endl;
	}
	return 0;
}

// get_input.cpp: Maggie Johnson
// Description: Illustrate the use of cin to get input.
int ScreenPrint::GetInput()
{
	int input_var = 0;
	// Enter the do while loop and stay there until either
	// a non-numeric is entered, or -1 is entered. Note that
	// cin will accept any integer, 4, 40, 400, etc.
	do {
		cout << "Enter a number (-1 = quit): ";
		// The following line accepts input from the keyboard into
		// variable input_var.
		// cin returns false if an input operation fails, that is, if
		// something other than an int (the type of input_var) is entered.
		if (!(cin >> input_var)) {
			cout << "You entered a non-numeric. Ignoring..." << endl;
			cin.clear();
			cin.ignore(10,'\n');
			//break;
			// exit the do while loop
		}
		if (input_var != -1) {
			cout << "You entered " << input_var << endl;
		}
	} while (input_var != -1);
	cout << "All done." << endl;
	return 0;

}

int ScreenPrint::OutPut()
{
	cout << " 1\t2\t3\t4\t5\t6\t7\t8\t9" << endl << "" << endl;
	for (int c = 1; c < 10; c++) {
		cout << c << "| ";
		for (int i = 1; i < 10; i++) {
			cout << i * c << '\t';
		}
		cout << endl;
	}
	return 0;
}
