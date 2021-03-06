// Jonathan Vertiz
// ITSE 1307
// Example 5-5
// Example 5-5.cpp : Converts a letter to its corresponding telephone digit

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// Start by putting in the letter
	char letter = '-';

	// Tell the user to input the letter to be converted
	cout << "Program to convert uppercase "
		<< "letters to their corresponding "
		<< "telephone digits." << endl;
	cout << "To stop the program enter #."
		<< endl;
	cout << "Enter a letter: ";
	cin >> letter;
	cout << endl;

	// Function that'll tell the program to end after a # is placed
	while (letter != '#')
	{
		cout << "The letter you entered is: "
			<< letter << endl;
		cout << "The corresponding telephone "
			<< "digit is: ";

		// Switch statement that converts the letter to the number
		if (letter >= 'A' && letter <= 'Z')
			switch (letter)
			{
			case 'A':
			case 'B':
			case 'C':
				cout << 2 << endl;
				break;
			case 'D':
			case 'E':
			case 'F':
				cout << 3 << endl; //Line 14
				break; //Line 15
			case 'G':
			case 'H':
			case 'I':
				cout << 4 << endl; //Line 16
				break; //Line 17
			case 'J':
			case 'K':
			case 'L':
				cout << 5 << endl; //Line 18
				break; //Line 19
			case 'M':
			case 'N':
			case 'O':
				cout << 6 << endl; //Line 20
				break; //Line 21
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
				cout << 7 << endl; //Line 22
				break; //Line 23
			case 'T':
			case 'U':
			case 'V':
				cout << 8 << endl; //Line 24
				break; //Line 25
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
				cout << 9 << endl; //Line 26
			}

		//Invalid inputs will be know to the user
		else //Line 27
			cout << "Invalid input." << endl; //Line 28

		//Enters a line of text agan after the first input
		cout << "\nEnter another uppercase "
			<< "letter to find its "
			<< "corresponding telephone digit."
			<< endl; //Line 29
		cout << "To stop the program enter #."
			<< endl; //Line 30
		cout << "Enter a letter: "; //Line 31
		cin >> letter; //Line 32
		cout << endl; //Line 33
	}
	return 0;
}